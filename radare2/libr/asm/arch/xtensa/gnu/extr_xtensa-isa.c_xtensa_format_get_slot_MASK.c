
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* slots; TYPE_1__* formats; } ;
typedef TYPE_3__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_insnbuf ;
typedef size_t xtensa_format ;
struct TYPE_7__ {int (* get_fn ) (int const,int ) ;} ;
struct TYPE_6__ {int* slot_id; } ;


 int FUNC_0 (TYPE_3__*,size_t,int) ;
 int FUNC_1 (TYPE_3__*,size_t,int,int) ;
 int FUNC_2 (int const,int ) ;

int
FUNC_3 (xtensa_isa VAR_0, xtensa_format VAR_1, int VAR_2,
   const xtensa_insnbuf VAR_3, xtensa_insnbuf VAR_4)
{
  xtensa_isa_internal *VAR_5 = (xtensa_isa_internal *) VAR_0;
  int VAR_6;

  FUNC_0 (VAR_5, VAR_1, -1);
  FUNC_1 (VAR_5, VAR_1, VAR_2, -1);

  VAR_6 = VAR_5->formats[VAR_1].slot_id[VAR_2];
  (*VAR_5->slots[VAR_6].get_fn) (VAR_3, VAR_4);
  return 0;
}
