
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct input_dev {int dummy; } ;
struct cs42l56_private {int beep_rate; int beep_work; } ;




 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct snd_soc_component* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 struct cs42l56_private* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_0);
 struct cs42l56_private *VAR_5 = FUNC_3(VAR_4);

 FUNC_0(VAR_4->dev, "Beep event %x %x\n", VAR_2, VAR_3);

 switch (VAR_2) {
 case 129:
  if (VAR_3)
   VAR_3 = 261;
 case 128:
  break;
 default:
  return -1;
 }


 VAR_5->beep_rate = VAR_3;
 FUNC_2(&VAR_5->beep_work);
 return 0;
}
