
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audioformat {struct audioformat* chmap; struct audioformat* rate_table; int list; } ;


 int FUNC_0 (struct audioformat*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct audioformat *VAR_0)
{
 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_0->rate_table);
 FUNC_0(VAR_0->chmap);
 FUNC_0(VAR_0);
}
