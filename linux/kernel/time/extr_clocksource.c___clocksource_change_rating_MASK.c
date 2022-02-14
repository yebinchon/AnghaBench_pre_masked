
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int rating; int list; } ;


 int FUNC_0 (struct clocksource*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct clocksource *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->list);
 VAR_0->rating = VAR_1;
 FUNC_0(VAR_0);
}
