
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xtensa_opcode ;
struct TYPE_8__ {TYPE_2__* slots; TYPE_1__* formats; } ;
typedef TYPE_3__ xtensa_isa_internal ;
typedef scalar_t__ xtensa_isa ;
typedef int xtensa_insnbuf ;
typedef size_t xtensa_format ;
struct TYPE_7__ {scalar_t__ (* opcode_decode_fn ) (int const) ;} ;
struct TYPE_6__ {int* slot_id; } ;


 int FUNC_0 (TYPE_3__*,size_t,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,size_t,int,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

xtensa_opcode
FUNC_4 (xtensa_isa VAR_4, xtensa_format VAR_5, int VAR_6,
        const xtensa_insnbuf VAR_7)
{
  xtensa_isa_internal *VAR_8 = (xtensa_isa_internal *) VAR_4;
  int VAR_9;
  xtensa_opcode VAR_10;

  FUNC_0 (VAR_8, VAR_5, VAR_0);
  FUNC_1 (VAR_8, VAR_5, VAR_6, VAR_0);

  VAR_9 = VAR_8->formats[VAR_5].slot_id[VAR_6];

  VAR_10 = (VAR_8->slots[VAR_9].opcode_decode_fn) (VAR_7);
  if (VAR_10 != VAR_0) {
   return VAR_10;
  }

  VAR_2 = VAR_1;
  FUNC_2 (VAR_3, "cannot decode opcode");
  return VAR_0;
}
