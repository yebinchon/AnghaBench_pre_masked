
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {struct held_lock* held_locks; } ;
struct held_lock {int pin_count; int references; int acquire_ip; int nest_lock; int hardirqs_off; int check; int read; int trylock; int instance; } ;
struct TYPE_2__ {int subclass; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (struct held_lock*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_0, unsigned int VAR_1,
    int VAR_2, unsigned int *VAR_3)
{
 struct held_lock *VAR_4;
 int VAR_5 = VAR_2;

 if (FUNC_0(!FUNC_4()))
  return 0;

 for (VAR_4 = VAR_0->held_locks + VAR_2; VAR_2 < VAR_1; VAR_2++, VAR_4++) {
  switch (FUNC_2(VAR_4->instance,
        FUNC_3(VAR_4)->subclass,
        VAR_4->trylock,
        VAR_4->read, VAR_4->check,
        VAR_4->hardirqs_off,
        VAR_4->nest_lock, VAR_4->acquire_ip,
        VAR_4->references, VAR_4->pin_count)) {
  case 0:
   return 1;
  case 1:
   break;
  case 2:
   *VAR_3 += (VAR_2 == VAR_5);
   break;
  default:
   FUNC_1(1);
   return 0;
  }
 }
 return 0;
}
