
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct TYPE_8__ {int a; } ;
struct TYPE_9__ {TYPE_3__ a; } ;
struct core_reloc_nesting {TYPE_2__ b; TYPE_4__ a; } ;
struct TYPE_10__ {int out; int in; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_5__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_nesting *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_nesting *VAR_3 = (void *)&VAR_0.out;

 if (FUNC_0(&VAR_3->a.a.a, &VAR_2->a.a.a))
  return 1;
 if (FUNC_0(&VAR_3->b.b.b, &VAR_2->b.b.b))
  return 1;

 return 0;
}
