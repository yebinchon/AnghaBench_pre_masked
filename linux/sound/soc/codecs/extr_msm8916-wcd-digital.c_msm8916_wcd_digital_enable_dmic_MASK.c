
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int name; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,unsigned int*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 char* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_8,
        struct snd_kcontrol *VAR_9,
        int VAR_10)
{
 struct snd_soc_component *VAR_11 = FUNC_3(VAR_8->dapm);
 unsigned int VAR_12;
 int VAR_13;

 char *VAR_14 = FUNC_4(VAR_8->name, "12");

 if (VAR_14 == ((void*)0)) {
  FUNC_0(VAR_11->dev, "Invalid DMIC\n");
  return -VAR_2;
 }
 VAR_13 = FUNC_1(VAR_14, 10, &VAR_12);
 if (VAR_13 < 0 || VAR_12 > 2) {
  FUNC_0(VAR_11->dev, "Invalid DMIC line on the component\n");
  return -VAR_2;
 }

 switch (VAR_10) {
 case 128:
  FUNC_2(VAR_11, VAR_3,
        VAR_1,
        VAR_0);
  switch (VAR_12) {
  case 1:
   FUNC_2(VAR_11, VAR_4,
         VAR_7,
         VAR_6);
   break;
  case 2:
   FUNC_2(VAR_11, VAR_5,
         VAR_7,
         VAR_6);
   break;
  }
  break;
 }

 return 0;
}
