
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* length_decode_fn ) (unsigned char const*) ;} ;
typedef TYPE_1__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;


 int FUNC_0 (unsigned char const*) ;

int
FUNC_1 (xtensa_isa VAR_0, const unsigned char *VAR_1)
{
  xtensa_isa_internal *VAR_2 = (xtensa_isa_internal *) VAR_0;
  return (VAR_2->length_decode_fn) (VAR_1);
}
