
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_entry_t ;
struct snd_ymfpci {int interrupt_sleep; int interrupt_sleep_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_ymfpci*,int ) ;

__attribute__((used)) static void FUNC_7(struct snd_ymfpci *VAR_2)
{
 wait_queue_entry_t VAR_3;
 int VAR_4 = 4;

 while (VAR_4-- > 0) {
  if ((FUNC_6(VAR_2, VAR_0) & 3) == 0)
    continue;
  FUNC_2(&VAR_3, VAR_1);
  FUNC_0(&VAR_2->interrupt_sleep, &VAR_3);
  FUNC_1(&VAR_2->interrupt_sleep_count);
  FUNC_5(FUNC_3(50));
  FUNC_4(&VAR_2->interrupt_sleep, &VAR_3);
 }
}
