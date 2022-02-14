
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct clocksource*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct clocksource *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_0);
 if (!FUNC_1(&VAR_1->list))
  VAR_2 = FUNC_0(VAR_1);
 FUNC_3(&VAR_0);
 return VAR_2;
}
