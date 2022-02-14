
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int active_bank; int reg_lock; int start_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ymfpci*,int ) ;
 int FUNC_1 (struct snd_ymfpci*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_ymfpci *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_2->reg_lock, VAR_3);
 if (VAR_2->start_count++ > 0)
  goto __end;
 FUNC_1(VAR_2, VAR_1,
     FUNC_0(VAR_2, VAR_1) | 3);
 VAR_2->active_bank = FUNC_0(VAR_2, VAR_0) & 1;
      __end:
       FUNC_3(&VAR_2->reg_lock, VAR_3);
}
