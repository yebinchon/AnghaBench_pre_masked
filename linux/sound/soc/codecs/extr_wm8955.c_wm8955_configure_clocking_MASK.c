
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm8955_priv {int fs; scalar_t__ mclk_rate; } ;
struct snd_soc_component {int dev; } ;
struct pll_factors {int n; int k; scalar_t__ outdiv; } ;
struct TYPE_3__ {int fs; scalar_t__ mclk; int usb; int sr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;
 int FUNC_2 (int ,char*,int,...) ;
 struct wm8955_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,struct pll_factors*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_21)
{
 struct wm8955_priv *VAR_22 = FUNC_3(VAR_21);
 int VAR_23, VAR_24, VAR_25;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = -1;
 struct pll_factors VAR_29;


 if (VAR_22->fs == 0)
  VAR_22->fs = 8000;


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_20); VAR_23++) {
  if (VAR_22->fs != VAR_20[VAR_23].fs)
   continue;
  VAR_28 = VAR_23;

  if (VAR_22->mclk_rate == VAR_20[VAR_23].mclk)
   break;
 }


 if (VAR_28 == -1) {
  FUNC_2(VAR_21->dev, "Sample rate %dHz unsupported\n",
   VAR_22->fs);
  FUNC_1(VAR_28 == -1);
  return -VAR_0;
 }

 if (VAR_23 == FUNC_0(VAR_20)) {




  VAR_26 |= VAR_6;



  VAR_24 = FUNC_5(VAR_21->dev, VAR_22->mclk_rate,
      VAR_20[VAR_28].mclk, &VAR_29);
  if (VAR_24 != 0) {
   FUNC_2(VAR_21->dev,
    "Unable to generate %dHz from %dHz MCLK\n",
    VAR_22->fs, VAR_22->mclk_rate);
   return -VAR_0;
  }

  FUNC_4(VAR_21, VAR_11,
        VAR_7 | VAR_4,
        (VAR_29.n << VAR_8) |
        VAR_29.k >> 18);
  FUNC_4(VAR_21, VAR_12,
        VAR_3,
        (VAR_29.k >> 9) & VAR_3);
  FUNC_4(VAR_21, VAR_13,
        VAR_5,
        VAR_29.k & VAR_5);
  if (VAR_29.k)
   FUNC_4(VAR_21, VAR_14,
         VAR_2, VAR_2);
  else
   FUNC_4(VAR_21, VAR_14,
         VAR_2, 0);

  if (VAR_29.outdiv)
   VAR_25 = VAR_15 | VAR_10;
  else
   VAR_25 = VAR_15;


  FUNC_4(VAR_21, VAR_1,
        VAR_15 | VAR_10, VAR_25);
  FUNC_4(VAR_21, VAR_1,
        VAR_9, VAR_9);
 }

 VAR_27 = VAR_20[VAR_28].usb | (VAR_20[VAR_28].sr << VAR_18);

 FUNC_4(VAR_21, VAR_16,
       VAR_19 | VAR_17, VAR_27);
 FUNC_4(VAR_21, VAR_1,
       VAR_6, VAR_26);

 return 0;
}
