
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct core_reloc_misc_output {int c; int b; int a; } ;
struct core_reloc_misc_extensible {int dummy; } ;
struct core_reloc_misc___b {struct core_reloc_misc_extensible b1; } ;
struct core_reloc_misc___a {struct core_reloc_misc_extensible a1; } ;
struct TYPE_2__ {int out; int in; } ;


 scalar_t__ FUNC_0 (int *,struct core_reloc_misc_extensible*) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(void *VAR_1)
{
 struct core_reloc_misc___a *VAR_2 = (void *)&VAR_0.in;
 struct core_reloc_misc___b *VAR_3 = (void *)&VAR_0.in;
 struct core_reloc_misc_extensible *VAR_4 = (void *)&VAR_0.in;
 struct core_reloc_misc_output *VAR_5 = (void *)&VAR_0.out;


 if (FUNC_0(&VAR_5->a, &VAR_2->a1) ||
     FUNC_0(&VAR_5->b, &VAR_3->b1))
  return 1;





 if (FUNC_0(&VAR_5->c, &VAR_4[2]))
  return 1;

 return 0;
}
