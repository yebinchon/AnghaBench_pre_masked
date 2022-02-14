
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ irq_capable; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct timer_list*) ;
 int FUNC_3 (struct timer_list*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct timer_list*,int) ;
 int FUNC_5 () ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,unsigned long) ;
 int FUNC_11 (struct timer_list*) ;
 int FUNC_12 (struct timer_list*,int ,int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;

__attribute__((used)) static int
FUNC_15(void *VAR_8)
{
 unsigned long VAR_9 = VAR_5;
 long VAR_10 = (long)VAR_8;
 int VAR_11 = VAR_10;
 FUNC_0(VAR_6);
 struct timer_list VAR_12;

 FUNC_1("rcu_torture_reader task started");
 FUNC_8(VAR_3, VAR_1);
 if (VAR_4 && VAR_2->irq_capable)
  FUNC_12(&VAR_12, VAR_7, 0);

 do {
  if (VAR_4 && VAR_2->irq_capable) {
   if (!FUNC_11(&VAR_12))
    FUNC_4(&VAR_12, VAR_5 + 1);
  }
  if (!FUNC_6(&VAR_6))
   FUNC_7(VAR_0);
  if (FUNC_10(VAR_5, VAR_9)) {
   FUNC_7(1);
   VAR_9 = VAR_5 + 10;
  }
  while (FUNC_5() < VAR_11 && !FUNC_14())
   FUNC_7(VAR_0 / 5);
  FUNC_9("rcu_torture_reader");
 } while (!FUNC_14());
 if (VAR_4 && VAR_2->irq_capable) {
  FUNC_2(&VAR_12);
  FUNC_3(&VAR_12);
 }
 FUNC_13("rcu_torture_reader");
 return 0;
}
