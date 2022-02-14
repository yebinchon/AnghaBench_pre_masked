
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98090_priv {scalar_t__ sysclk; int lrclk; int bclk; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (unsigned long long,unsigned long long) ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 scalar_t__* VAR_14 ;
 struct max98090_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_8 (struct snd_soc_component*,int ,unsigned long long) ;
 int* VAR_15 ;
 scalar_t__* VAR_16 ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_17)
{
 struct max98090_priv *VAR_18 = FUNC_5(VAR_17);
 unsigned long long VAR_19;
 int VAR_20;

 if (!VAR_18->sysclk) {
  FUNC_2(VAR_17->dev, "No SYSCLK configured\n");
  return;
 }

 if (!VAR_18->bclk || !VAR_18->lrclk) {
  FUNC_2(VAR_17->dev, "No audio clocks configured\n");
  return;
 }


 if (!(FUNC_6(VAR_17, VAR_8) &
  VAR_2)) {
  return;
 }


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_14); VAR_20++) {
  if ((VAR_14[VAR_20] == VAR_18->sysclk) &&
   (VAR_11[VAR_20] == VAR_18->lrclk)) {
   FUNC_1(VAR_17->dev,
    "Found supported PCLK to LRCLK rates 0x%x\n",
    VAR_20 + 0x8);

   FUNC_7(VAR_17, VAR_3,
    VAR_0,
    (VAR_20 + 0x8) << VAR_1);
   FUNC_7(VAR_17, VAR_3,
    VAR_9, 0);
   return;
  }
 }


 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_16); VAR_20++) {
  if ((VAR_16[VAR_20] == VAR_18->sysclk) &&
   (VAR_15[VAR_20] == VAR_18->lrclk)) {
   FUNC_1(VAR_17->dev,
    "Found user supported PCLK to LRCLK rates\n");
   FUNC_1(VAR_17->dev, "i %d ni %lld mi %lld\n",
    VAR_20, VAR_13[VAR_20], VAR_12[VAR_20]);

   FUNC_7(VAR_17, VAR_3,
    VAR_0, 0);
   FUNC_7(VAR_17, VAR_3,
    VAR_9,
     1 << VAR_10);

   FUNC_8(VAR_17, VAR_7,
    (VAR_13[VAR_20] >> 8) & 0x7F);
   FUNC_8(VAR_17, VAR_6,
    VAR_13[VAR_20] & 0xFF);
   FUNC_8(VAR_17, VAR_5,
    (VAR_12[VAR_20] >> 8) & 0x7F);
   FUNC_8(VAR_17, VAR_4,
    VAR_12[VAR_20] & 0xFF);

   return;
  }
 }




 FUNC_7(VAR_17, VAR_3,
  VAR_0, 0);
 FUNC_7(VAR_17, VAR_3,
  VAR_9, 0);






 VAR_19 = 65536ULL * (VAR_18->lrclk < 50000 ? 96ULL : 48ULL)
   * (unsigned long long int)VAR_18->lrclk;
 FUNC_4(VAR_19, (unsigned long long int)VAR_18->sysclk);
 FUNC_3(VAR_17->dev, "No better method found\n");
 FUNC_3(VAR_17->dev, "Calculating ni %lld with mi 65536\n", VAR_19);
 FUNC_8(VAR_17, VAR_7,
  (VAR_19 >> 8) & 0x7F);
 FUNC_8(VAR_17, VAR_6, VAR_19 & 0xFF);
}
