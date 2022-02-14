
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t xtensa_sysreg ;
struct TYPE_5__ {TYPE_1__* sysregs; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
struct TYPE_4__ {char const* name; } ;


 int FUNC_0 (TYPE_2__*,size_t,int *) ;

const char *
FUNC_1 (xtensa_isa VAR_0, xtensa_sysreg VAR_1)
{
  xtensa_isa_internal *VAR_2 = (xtensa_isa_internal *) VAR_0;
  FUNC_0 (VAR_2, VAR_1, ((void*)0));
  return VAR_2->sysregs[VAR_1].name;
}
