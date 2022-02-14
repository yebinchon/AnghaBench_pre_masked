
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct core_reloc_ptr_as_arr {int a; } ;
struct TYPE_2__ {int out; int in; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_ptr_as_arr *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_ptr_as_arr *VAR_3 = (void *)&VAR_0.out;

 if (FUNC_0(&VAR_3->a, &VAR_2[2].a))
  return 1;

 return 0;
}
