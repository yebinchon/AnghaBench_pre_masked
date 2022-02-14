
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_variable {int* ptr; scalar_t__ name; } ;


 struct debug_variable* VAR_0 ;

int FUNC_0(void)
{
 struct debug_variable *VAR_1 = &VAR_0[0];


 while (VAR_1->name) {
  *VAR_1->ptr = -1;
  VAR_1++;
 }

 return 0;
}
