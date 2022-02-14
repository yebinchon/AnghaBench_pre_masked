
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct core_reloc_flavors___weird {int a; } ;
struct core_reloc_flavors___reversed {int b; } ;
struct core_reloc_flavors {int c; int b; int a; } ;
struct TYPE_2__ {int out; int in; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_flavors *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_flavors___reversed *VAR_3 = (void *)&VAR_0.in;
 struct core_reloc_flavors___weird *VAR_4 = (void *)&VAR_0.in;
 struct core_reloc_flavors *VAR_5 = (void *)&VAR_0.out;


 if (FUNC_0(&VAR_5->a, &VAR_4->a))
  return 1;

 if (FUNC_0(&VAR_5->b, &VAR_3->b))
  return 1;

 if (FUNC_0(&VAR_5->c, &VAR_2->c))
  return 1;

 return 0;
}
