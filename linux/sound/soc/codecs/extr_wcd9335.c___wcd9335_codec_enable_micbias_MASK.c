
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int name; int dapm; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 struct snd_soc_component* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct snd_soc_component*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_7,
     int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_0(VAR_7->dapm);
 int VAR_10;

 if (FUNC_1(VAR_7->name, "MIC BIAS1", sizeof("MIC BIAS1")))
  VAR_10 = VAR_3;
 else if (FUNC_1(VAR_7->name, "MIC BIAS2", sizeof("MIC BIAS2")))
  VAR_10 = VAR_4;
 else if (FUNC_1(VAR_7->name, "MIC BIAS3", sizeof("MIC BIAS3")))
  VAR_10 = VAR_5;
 else if (FUNC_1(VAR_7->name, "MIC BIAS4", sizeof("MIC BIAS4")))
  VAR_10 = VAR_6;
 else
  return -VAR_0;

 switch (VAR_8) {
 case 128:





  FUNC_3(VAR_9, VAR_10, VAR_2, 1);
  break;
 case 129:

  FUNC_2(1000, 1100);
  break;
 case 130:
  FUNC_3(VAR_9, VAR_10, VAR_1, 1);
  break;
 };

 return 0;
}
