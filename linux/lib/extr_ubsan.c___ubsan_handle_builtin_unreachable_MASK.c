
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unreachable_data {int location; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int *,unsigned long*) ;

void FUNC_4(struct unreachable_data *VAR_0)
{
 unsigned long VAR_1;

 FUNC_3(&VAR_0->location, &VAR_1);
 FUNC_1("calling __builtin_unreachable()\n");
 FUNC_2(&VAR_1);
 FUNC_0("can't return from __builtin_unreachable()");
}
