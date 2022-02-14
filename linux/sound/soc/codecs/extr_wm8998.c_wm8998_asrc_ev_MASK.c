
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,int ) ;
 unsigned int FUNC_3 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_9,
     struct snd_kcontrol *VAR_10,
     int VAR_11)
{
 struct snd_soc_component *VAR_12 = FUNC_4(VAR_9->dapm);
 unsigned int VAR_13;

 switch (VAR_11) {
 case 128:
  VAR_13 = FUNC_3(VAR_12, VAR_0);
  VAR_13 &= VAR_1;
  VAR_13 >>= VAR_2;

  switch (VAR_13) {
  case 0:
  case 1:
  case 2:
   VAR_13 = FUNC_3(VAR_12,
        VAR_7 + VAR_13);
   if (VAR_13 >= 0x11) {
    FUNC_2(VAR_12->dev,
      "Unsupported ASRC rate1 (%s)\n",
      FUNC_0(VAR_13));
    return -VAR_8;
   }
   break;
  default:
   FUNC_1(VAR_12->dev,
    "Illegal ASRC rate1 selector (0x%x)\n",
    VAR_13);
   return -VAR_8;
  }

  VAR_13 = FUNC_3(VAR_12, VAR_3);
  VAR_13 &= VAR_4;
  VAR_13 >>= VAR_5;

  switch (VAR_13) {
  case 8:
  case 9:
   VAR_13 -= 0x8;
   VAR_13 = FUNC_3(VAR_12,
        VAR_6 + VAR_13);
   if (VAR_13 >= 0x11) {
    FUNC_2(VAR_12->dev,
      "Unsupported ASRC rate2 (%s)\n",
      FUNC_0(VAR_13));
    return -VAR_8;
   }
   break;
  default:
   FUNC_1(VAR_12->dev,
    "Illegal ASRC rate2 selector (0x%x)\n",
    VAR_13);
   return -VAR_8;
  }
  break;
 default:
  return -VAR_8;
 }

 return 0;
}
