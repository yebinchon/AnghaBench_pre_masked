
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int equal_irq; int codec_flag; int interwave; int max_flag; int joystick_dac; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (struct snd_gus_card*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(int VAR_8, struct snd_gus_card *VAR_9)
{
 unsigned long VAR_10;


 FUNC_1(&VAR_9->reg_lock, VAR_10);
 FUNC_0(VAR_9, VAR_5, 0x00);
 FUNC_0(VAR_9, VAR_0, 0x1f);
 FUNC_0(VAR_9, VAR_1, 0x49);
 FUNC_0(VAR_9, VAR_6, 0x11);
 FUNC_0(VAR_9, VAR_3, 0x00);
 FUNC_0(VAR_9, VAR_4, 0x30);
 FUNC_0(VAR_9, VAR_2, 0x00);
 FUNC_2(&VAR_9->reg_lock, VAR_10);
 VAR_9->equal_irq = 1;
 VAR_9->codec_flag = 1;
 VAR_9->interwave = 1;
 VAR_9->max_flag = 1;
 VAR_9->joystick_dac = VAR_7[VAR_8];

}
