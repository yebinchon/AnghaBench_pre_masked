
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int,char*,int) ;
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
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_18,
      struct snd_kcontrol *VAR_19, int VAR_20)
{
 struct snd_soc_component *VAR_21 = FUNC_6(VAR_18->dapm);
 int VAR_22;
 int VAR_23;
 int VAR_24 = (VAR_2 |
   VAR_3);

 switch (VAR_20) {
 case 129:
  FUNC_5(VAR_21, VAR_1,
        VAR_8 | VAR_14,
        VAR_8 | VAR_14);
  FUNC_7(20);

  FUNC_5(VAR_21, VAR_1,
        VAR_9 | VAR_15,
        VAR_9 | VAR_15);


  FUNC_5(VAR_21, VAR_4,
        VAR_6 | VAR_12 |
        VAR_7 |
        VAR_13,
        VAR_6 | VAR_12 |
        VAR_7 |
        VAR_13);


  VAR_22 = 0;
  do {
   FUNC_3(1);
   VAR_23 = FUNC_4(VAR_21, VAR_5);
   if (VAR_23 < 0) {
    FUNC_2(VAR_21->dev,
     "Failed to read DCS status: %d\n",
     VAR_23);
    continue;
   }
   FUNC_1(VAR_21->dev, "DCS status: %x\n", VAR_23);
  } while (++VAR_22 < 200 && (VAR_23 & VAR_24) != VAR_24);

  if ((VAR_23 & VAR_24) != VAR_24)
   FUNC_2(VAR_21->dev, "DC servo timed out\n");
  else
   FUNC_1(VAR_21->dev, "DC servo complete after %dms\n",
    VAR_22);

  FUNC_5(VAR_21, VAR_1,
        VAR_10 |
        VAR_16,
        VAR_10 |
        VAR_16);
  FUNC_7(20);

  FUNC_5(VAR_21, VAR_1,
        VAR_11 |
        VAR_17,
        VAR_11 |
        VAR_17);
  break;

 case 128:
  FUNC_5(VAR_21, VAR_1,
        VAR_11 |
        VAR_17, 0);

  FUNC_7(20);

  FUNC_5(VAR_21, VAR_4,
        VAR_6 | VAR_12 |
        VAR_7 |
        VAR_13,
        0);

  FUNC_5(VAR_21, VAR_1,
        VAR_8 | VAR_14 |
        VAR_9 | VAR_15 |
        VAR_10 |
        VAR_16, 0);

  break;

 default:
  FUNC_0(1, "Invalid event %d\n", VAR_20);
  return -VAR_0;

 }

 return 0;
}
