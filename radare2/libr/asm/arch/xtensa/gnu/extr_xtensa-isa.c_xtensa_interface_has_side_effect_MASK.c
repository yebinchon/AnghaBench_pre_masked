
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* interfaces; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef size_t xtensa_interface ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (TYPE_2__*,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1 (xtensa_isa VAR_2, xtensa_interface VAR_3)
{
  xtensa_isa_internal *VAR_4 = (xtensa_isa_internal *) VAR_2;
  FUNC_0 (VAR_4, VAR_3, VAR_1);
  if ((VAR_4->interfaces[VAR_3].flags & VAR_0) != 0) {
   return 1;
  }
  return 0;
}
