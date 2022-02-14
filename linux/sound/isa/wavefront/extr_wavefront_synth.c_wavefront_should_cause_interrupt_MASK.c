
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
struct TYPE_3__ {scalar_t__ irq_ok; int irq_lock; int interrupt_sleeper; } ;
typedef TYPE_1__ snd_wavefront_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_8 (snd_wavefront_t *VAR_2,
      int VAR_3, int VAR_4, unsigned long VAR_5)

{
 wait_queue_entry_t VAR_6;

 FUNC_2(&VAR_6, VAR_0);
 FUNC_5(&VAR_2->irq_lock);
 FUNC_0(&VAR_2->interrupt_sleeper, &VAR_6);
 VAR_2->irq_ok = 0;
 FUNC_3 (VAR_3,VAR_4);
 FUNC_6(&VAR_2->irq_lock);
 while (!VAR_2->irq_ok && FUNC_7(VAR_1, VAR_5)) {
  FUNC_4(1);
  FUNC_1();
 }
}
