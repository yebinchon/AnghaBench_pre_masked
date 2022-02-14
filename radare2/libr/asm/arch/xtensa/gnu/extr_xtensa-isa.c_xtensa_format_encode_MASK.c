
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* formats; } ;
typedef TYPE_2__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_insnbuf ;
typedef size_t xtensa_format ;
struct TYPE_4__ {int (* encode_fn ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*,size_t,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2 (xtensa_isa VAR_0, xtensa_format VAR_1, xtensa_insnbuf VAR_2)
{
  xtensa_isa_internal *VAR_3 = (xtensa_isa_internal *) VAR_0;
  FUNC_0 (VAR_3, VAR_1, -1);
  (*VAR_3->formats[VAR_1].encode_fn) (VAR_2);
  return 0;
}
