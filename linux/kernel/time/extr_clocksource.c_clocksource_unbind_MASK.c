
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct clocksource*) ;
 scalar_t__ FUNC_1 (struct clocksource*) ;
 scalar_t__ FUNC_2 (struct clocksource*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned long*) ;
 int FUNC_7 (unsigned long*) ;
 struct clocksource* VAR_1 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct clocksource *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_2(VAR_2)) {

  FUNC_4(1);
  if (FUNC_2(VAR_2))
   return -VAR_0;
 }

 if (VAR_2 == VAR_1) {

  FUNC_3();
  if (VAR_1 == VAR_2)
   return -VAR_0;
 }

 if (FUNC_1(VAR_2)) {





  FUNC_5(1);
 }

 FUNC_6(&VAR_3);
 FUNC_0(VAR_2);
 FUNC_8(&VAR_2->list);
 FUNC_7(&VAR_3);

 return 0;
}
