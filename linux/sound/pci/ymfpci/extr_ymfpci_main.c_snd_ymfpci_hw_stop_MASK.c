
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {scalar_t__ start_count; int reg_lock; int interrupt_sleep; int interrupt_sleep_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ) ;
 int FUNC_3 (struct snd_ymfpci*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct snd_ymfpci *VAR_2)
{
 unsigned long VAR_3;
 long VAR_4 = 1000;

 FUNC_4(&VAR_2->reg_lock, VAR_3);
 if (--VAR_2->start_count > 0)
  goto __end;
 FUNC_3(VAR_2, VAR_0,
     FUNC_2(VAR_2, VAR_0) & ~3);
 while (VAR_4-- > 0) {
  if ((FUNC_2(VAR_2, VAR_1) & 2) == 0)
   break;
 }
 if (FUNC_0(&VAR_2->interrupt_sleep_count)) {
  FUNC_1(&VAR_2->interrupt_sleep_count, 0);
  FUNC_6(&VAR_2->interrupt_sleep);
 }
      __end:
       FUNC_5(&VAR_2->reg_lock, VAR_3);
}
