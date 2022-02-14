
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int clock_caps; } ;
typedef enum snd_dice_rate_mode { ____Placeholder_snd_dice_rate_mode } snd_dice_rate_mode ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;



 unsigned int* VAR_1 ;

int FUNC_2(struct snd_dice *VAR_2, unsigned int VAR_3,
      enum snd_dice_rate_mode *VAR_4)
{

 static const enum snd_dice_rate_mode VAR_5[] = {
  [0] = 129,
  [1] = 129,
  [2] = 129,
  [3] = 128,
  [4] = 128,
  [5] = 130,
  [6] = 130,
 };
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (!(VAR_2->clock_caps & FUNC_1(VAR_6)))
   continue;
  if (VAR_1[VAR_6] != VAR_3)
   continue;

  *VAR_4 = VAR_5[VAR_6];
  return 0;
 }

 return -VAR_0;
}
