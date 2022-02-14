
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct hda_beep {int beep_work; int tone; int linear_tone; } ;




 int FUNC_0 (struct hda_beep*,int) ;
 int FUNC_1 (struct hda_beep*,int) ;
 struct hda_beep* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, int VAR_3)
{
 struct hda_beep *VAR_4 = FUNC_2(VAR_0);

 switch (VAR_2) {
 case 129:
  if (VAR_3)
   VAR_3 = 1000;

 case 128:
  if (VAR_4->linear_tone)
   VAR_4->tone = FUNC_0(VAR_4, VAR_3);
  else
   VAR_4->tone = FUNC_1(VAR_4, VAR_3);
  break;
 default:
  return -1;
 }


 FUNC_3(&VAR_4->beep_work);
 return 0;
}
