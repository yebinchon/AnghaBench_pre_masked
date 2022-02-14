
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct core_reloc_arrays_output {int d00d; int c1c; int b123; int a2; } ;
struct core_reloc_arrays {TYPE_2__** d; TYPE_1__* c; int *** b; int * a; } ;
struct TYPE_6__ {int out; int in; } ;
struct TYPE_5__ {int d; } ;
struct TYPE_4__ {int c; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_3__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_arrays *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_arrays_output *VAR_3 = (void *)&VAR_0.out;


 if (FUNC_0(&VAR_3->a2, &VAR_2->a[2]))
  return 1;

 if (FUNC_0(&VAR_3->b123, &VAR_2->b[1][2][3]))
  return 1;

 if (FUNC_0(&VAR_3->c1c, &VAR_2->c[1].c))
  return 1;

 if (FUNC_0(&VAR_3->d00d, &VAR_2->d[0][0].d))
  return 1;

 return 0;
}
