
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct core_reloc_mods_output {int h; int g; int f; int e; int d; int c; int b; int a; } ;
struct TYPE_5__ {int y; } ;
struct TYPE_4__ {int x; } ;
struct core_reloc_mods {TYPE_2__ h; TYPE_1__ g; int * f; int * e; int d; int c; int b; int a; } ;
struct TYPE_6__ {int out; int in; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_3__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_mods *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_mods_output *VAR_3 = (void *)&VAR_0.out;

 if (FUNC_0(&VAR_3->a, &VAR_2->a) ||
     FUNC_0(&VAR_3->b, &VAR_2->b) ||
     FUNC_0(&VAR_3->c, &VAR_2->c) ||
     FUNC_0(&VAR_3->d, &VAR_2->d) ||
     FUNC_0(&VAR_3->e, &VAR_2->e[2]) ||
     FUNC_0(&VAR_3->f, &VAR_2->f[1]) ||
     FUNC_0(&VAR_3->g, &VAR_2->g.x) ||
     FUNC_0(&VAR_3->h, &VAR_2->h.y))
  return 1;

 return 0;
}
