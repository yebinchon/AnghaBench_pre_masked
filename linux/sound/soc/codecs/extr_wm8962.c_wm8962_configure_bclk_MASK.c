
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int sysclk_rate; int bclk; int lrclk; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct snd_soc_component*) ;
 struct wm8962_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int) ;
 int* VAR_14 ;

__attribute__((used)) static void FUNC_8(struct snd_soc_component *VAR_15)
{
 struct wm8962_priv *VAR_16 = FUNC_5(VAR_15);
 int VAR_17, VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;

 if (!VAR_16->sysclk_rate) {
  FUNC_1(VAR_15->dev, "No SYSCLK configured\n");
  return;
 }

 if (!VAR_16->bclk || !VAR_16->lrclk) {
  FUNC_1(VAR_15->dev, "No audio clocks configured\n");
  return;
 }

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_14); VAR_18++) {
  if (VAR_14[VAR_18] == VAR_16->sysclk_rate / VAR_16->lrclk) {
   VAR_20 |= VAR_18 << VAR_12;
   break;
  }
 }

 if (VAR_18 == FUNC_0(VAR_14)) {
  FUNC_2(VAR_15->dev, "Unsupported sysclk ratio %d\n",
   VAR_16->sysclk_rate / VAR_16->lrclk);
  return;
 }

 FUNC_1(VAR_15->dev, "Selected sysclk ratio %d\n", VAR_14[VAR_18]);

 FUNC_7(VAR_15, VAR_6,
       VAR_11, VAR_20);





 if (FUNC_4(VAR_15) != VAR_0)
  FUNC_7(VAR_15, VAR_5,
    VAR_10, VAR_9);

 VAR_17 = FUNC_6(VAR_15, VAR_4);

 if (FUNC_4(VAR_15) != VAR_0)
  FUNC_7(VAR_15, VAR_5,
    VAR_10, 0);

 if (VAR_17 < 0) {
  FUNC_2(VAR_15->dev, "Failed to read DSPCLK: %d\n", VAR_17);
  return;
 }

 VAR_17 = (VAR_17 & VAR_7) >> VAR_8;
 switch (VAR_17) {
 case 0:
  VAR_17 = VAR_16->sysclk_rate;
  break;
 case 1:
  VAR_17 = VAR_16->sysclk_rate / 2;
  break;
 case 2:
  VAR_17 = VAR_16->sysclk_rate / 4;
  break;
 default:
  FUNC_3(VAR_15->dev, "Unknown DSPCLK divisor read back\n");
  VAR_17 = VAR_16->sysclk_rate;
 }

 FUNC_1(VAR_15->dev, "DSPCLK is %dHz, BCLK %d\n", VAR_17, VAR_16->bclk);


 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_13); VAR_18++) {
  if (VAR_13[VAR_18] < 0)
   continue;

  if (VAR_17 / VAR_13[VAR_18] == VAR_16->bclk) {
   FUNC_1(VAR_15->dev, "Selected BCLK_DIV %d for %dHz\n",
    VAR_13[VAR_18], VAR_16->bclk);
   VAR_19 |= VAR_18;
   break;
  }
 }
 if (VAR_18 == FUNC_0(VAR_13)) {
  FUNC_2(VAR_15->dev, "Unsupported BCLK ratio %d\n",
   VAR_17 / VAR_16->bclk);
  return;
 }

 VAR_21 |= VAR_16->bclk / VAR_16->lrclk;
 FUNC_1(VAR_15->dev, "Selected LRCLK divisor %d for %dHz\n",
  VAR_16->bclk / VAR_16->lrclk, VAR_16->lrclk);

 FUNC_7(VAR_15, VAR_5,
       VAR_3, VAR_19);
 FUNC_7(VAR_15, VAR_2,
       VAR_1, VAR_21);
}
