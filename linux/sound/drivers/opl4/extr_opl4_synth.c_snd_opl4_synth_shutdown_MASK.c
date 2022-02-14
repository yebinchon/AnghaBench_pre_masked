
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl4 {int reg_lock; TYPE_1__* voices; } ;
struct TYPE_2__ {int reg_misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_opl4*,scalar_t__,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct snd_opl4 *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->reg_lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_0(VAR_3, VAR_2 + VAR_5,
          VAR_3->voices[VAR_5].reg_misc & ~VAR_0);
 FUNC_2(&VAR_3->reg_lock, VAR_4);
}
