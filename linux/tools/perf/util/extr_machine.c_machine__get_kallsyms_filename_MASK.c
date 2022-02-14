
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int root_dir; } ;
struct TYPE_2__ {int default_guest_kallsyms; } ;


 scalar_t__ FUNC_0 (struct machine*) ;
 int FUNC_1 (char*,size_t,char*,int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_2(struct machine *VAR_1, char *VAR_2,
        size_t VAR_3)
{
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_2, VAR_3, "%s", VAR_0.default_guest_kallsyms);
 else
  FUNC_1(VAR_2, VAR_3, "%s/proc/kallsyms", VAR_1->root_dir);
}
