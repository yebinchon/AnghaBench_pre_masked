
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int regno; } ;
struct TYPE_5__ {TYPE_1__ reg; scalar_t__ type; } ;
typedef TYPE_2__ aarch64_opnd_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2 (const aarch64_opnd_info *VAR_2)
{
  return ((FUNC_0 (VAR_2->type)
    == VAR_0)
   && FUNC_1 (VAR_1 + VAR_2->type)
   && VAR_2->reg.regno == 31);
}
