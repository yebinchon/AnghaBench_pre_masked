
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8400_priv {TYPE_1__* wm8400; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;




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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int * VAR_24 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct snd_soc_component*) ;
 struct wm8400_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_25,
     enum snd_soc_bias_level VAR_26)
{
 struct wm8400_priv *VAR_27 = FUNC_6(VAR_25);
 u16 VAR_28;
 int VAR_29;

 switch (VAR_26) {
 case 130:
  break;

 case 129:

  VAR_28 = FUNC_7(VAR_25, VAR_17) &
   ~VAR_22;
  FUNC_8(VAR_25, VAR_17, VAR_28 | 0x2);
  break;

 case 128:
  if (FUNC_5(VAR_25) == 131) {
   VAR_29 = FUNC_4(FUNC_0(VAR_24),
          &VAR_24[0]);
   if (VAR_29 != 0) {
    FUNC_1(VAR_27->wm8400->dev,
     "Failed to enable regulators: %d\n",
     VAR_29);
    return VAR_29;
   }

   FUNC_8(VAR_25, VAR_17,
         VAR_4 | VAR_21);


   FUNC_8(VAR_25, VAR_1, VAR_19 |
         VAR_2 | VAR_16);

   FUNC_2(50);


   VAR_28 = FUNC_7(VAR_25, VAR_17);
   VAR_28 |= 0x2 | VAR_23;
   FUNC_8(VAR_25, VAR_17, VAR_28);


   FUNC_8(VAR_25, VAR_1, VAR_19 |
         VAR_2 | VAR_16 |
         VAR_3);


   FUNC_8(VAR_25, VAR_1, VAR_3);
  }


  VAR_28 = FUNC_7(VAR_25, VAR_17) &
   ~VAR_22;
  FUNC_8(VAR_25, VAR_17, VAR_28 | 0x4);
  break;

 case 131:

  FUNC_8(VAR_25, VAR_1, VAR_19 |
   VAR_16 | VAR_3);


  FUNC_8(VAR_25, VAR_1, VAR_19 |
   VAR_2 | VAR_16 |
   VAR_3);


  VAR_28 = FUNC_7(VAR_25, VAR_5);
  FUNC_8(VAR_25, VAR_5, VAR_28 | VAR_6);


  VAR_28 = FUNC_7(VAR_25, VAR_17);
  VAR_28 |= VAR_20 | VAR_14 |
   VAR_15 | VAR_13 |
   VAR_18;
  FUNC_8(VAR_25, VAR_17, VAR_28);


  VAR_28 &= ~VAR_22;
  FUNC_8(VAR_25, VAR_17, VAR_28);

  FUNC_2(300);


  FUNC_8(VAR_25, VAR_0, VAR_7 |
   VAR_11 | VAR_9 |
   VAR_10 | VAR_8 |
   VAR_12);


  VAR_28 &= ~VAR_23;
  FUNC_8(VAR_25, VAR_17, VAR_28);


  FUNC_8(VAR_25, VAR_1, 0x0);

  VAR_29 = FUNC_3(FUNC_0(VAR_24),
          &VAR_24[0]);
  if (VAR_29 != 0)
   return VAR_29;

  break;
 }

 return 0;
}
