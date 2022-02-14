
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct klp_object {TYPE_1__* mod; } ;
struct TYPE_2__ {size_t state; int name; } ;


 int * VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, struct klp_object *VAR_2)
{
 if (VAR_2->mod)
  FUNC_0("%s: %s -> %s\n", VAR_1, VAR_2->mod->name,
   VAR_0[VAR_2->mod->state]);
 else
  FUNC_0("%s: vmlinux\n", VAR_1);
}
