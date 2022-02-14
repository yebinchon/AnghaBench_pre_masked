
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int* sysclk; unsigned int* mclk; int* aifdiv; int * aifclk; } ;
struct snd_soc_dai {int id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ) ;
 unsigned int* VAR_9 ;
 struct wm8994_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_10,
  int VAR_11, unsigned int VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = VAR_10->component;
 struct wm8994_priv *VAR_15 = FUNC_4(VAR_14);
 int VAR_16;

 switch (VAR_10->id) {
 case 1:
 case 2:
  break;

 default:

  return -VAR_0;
 }

 switch (VAR_11) {
 case 130:
  VAR_15->sysclk[VAR_10->id - 1] = 130;
  VAR_15->mclk[0] = VAR_12;
  FUNC_2(VAR_10->dev, "AIF%d using MCLK1 at %uHz\n",
   VAR_10->id, VAR_12);
  break;

 case 129:

  VAR_15->sysclk[VAR_10->id - 1] = 129;
  VAR_15->mclk[1] = VAR_12;
  FUNC_2(VAR_10->dev, "AIF%d using MCLK2 at %uHz\n",
   VAR_10->id, VAR_12);
  break;

 case 132:
  VAR_15->sysclk[VAR_10->id - 1] = 132;
  FUNC_2(VAR_10->dev, "AIF%d using FLL1\n", VAR_10->id);
  break;

 case 131:
  VAR_15->sysclk[VAR_10->id - 1] = 131;
  FUNC_2(VAR_10->dev, "AIF%d using FLL2\n", VAR_10->id);
  break;

 case 128:



  if (VAR_12) {
   for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_9); VAR_16++)
    if (VAR_9[VAR_16] == VAR_12)
     break;
   if (VAR_16 == FUNC_0(VAR_9))
    return -VAR_0;
   FUNC_6(VAR_14, VAR_5,
         VAR_6, VAR_16);
   FUNC_6(VAR_14, VAR_8,
         VAR_7, VAR_7);
  } else {
   FUNC_6(VAR_14, VAR_8,
         VAR_7, 0);
  }
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_14);





 if (FUNC_3(VAR_15->aifclk[0], VAR_15->aifclk[1]) < 50000) {
  FUNC_2(VAR_14->dev, "Configuring AIFs for 128fs\n");

  VAR_15->aifdiv[0] = FUNC_5(VAR_14, VAR_2)
   & VAR_1;
  VAR_15->aifdiv[1] = FUNC_5(VAR_14, VAR_4)
   & VAR_1;

  FUNC_6(VAR_14, VAR_2,
        VAR_1, 0x1);
  FUNC_6(VAR_14, VAR_4,
        VAR_3, 0x1);
 } else if (VAR_15->aifdiv[0]) {
  FUNC_6(VAR_14, VAR_2,
        VAR_1,
        VAR_15->aifdiv[0]);
  FUNC_6(VAR_14, VAR_4,
        VAR_3,
        VAR_15->aifdiv[1]);

  VAR_15->aifdiv[0] = 0;
  VAR_15->aifdiv[1] = 0;
 }

 return 0;
}
