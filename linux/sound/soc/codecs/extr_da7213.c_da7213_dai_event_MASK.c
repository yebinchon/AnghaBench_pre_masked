
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;
struct da7213_priv {int master; } ;


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


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 struct da7213_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_5 (struct snd_soc_component*,int,int) ;
 struct snd_soc_component* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dapm_widget *VAR_11,
       struct snd_kcontrol *VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = FUNC_6(VAR_11->dapm);
 struct da7213_priv *VAR_15 = FUNC_2(VAR_14);
 u8 VAR_16, VAR_17;
 int VAR_18 = 0;
 bool VAR_19 = 0;

 switch (VAR_13) {
 case 128:

  if (VAR_15->master)
   FUNC_4(VAR_14, VAR_1,
         VAR_0,
         VAR_0);


  FUNC_4(VAR_14, VAR_2,
        VAR_3, 0);


  VAR_16 = FUNC_3(VAR_14, VAR_5);
  if (!(VAR_16 & VAR_6))
   return 0;


  if (VAR_16 & VAR_4) {
   FUNC_5(VAR_14, 0xF0, 0x8B);
   FUNC_5(VAR_14, 0xF2, 0x03);
   FUNC_5(VAR_14, 0xF0, 0x00);
  }


  do {
   VAR_17 = FUNC_3(VAR_14, VAR_7);
   if (VAR_17 & VAR_9) {
    VAR_19 = 1;
   } else {
    ++VAR_18;
    FUNC_1(50);
   }
  } while ((VAR_18 < VAR_8) && (!VAR_19));

  if (!VAR_19)
   FUNC_0(VAR_14->dev, "SRM failed to lock\n");

  return 0;
 case 129:

  VAR_16 = FUNC_3(VAR_14, VAR_5);
  if (VAR_16 & VAR_4) {
   FUNC_5(VAR_14, 0xF0, 0x8B);
   FUNC_5(VAR_14, 0xF2, 0x01);
   FUNC_5(VAR_14, 0xF0, 0x00);
  }


  FUNC_4(VAR_14, VAR_2,
        VAR_3,
        VAR_3);


  if (VAR_15->master)
   FUNC_4(VAR_14, VAR_1,
         VAR_0, 0);
  return 0;
 default:
  return -VAR_10;
 }
}
