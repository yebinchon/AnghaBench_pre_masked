
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t xtensa_state ;
struct TYPE_5__ {TYPE_1__* states; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
struct TYPE_4__ {int num_bits; } ;


 int FUNC_0 (TYPE_2__*,size_t,int ) ;
 int VAR_0 ;

int
FUNC_1 (xtensa_isa VAR_1, xtensa_state VAR_2)
{
  xtensa_isa_internal *VAR_3 = (xtensa_isa_internal *) VAR_1;
  FUNC_0 (VAR_3, VAR_2, VAR_0);
  return VAR_3->states[VAR_2].num_bits;
}
