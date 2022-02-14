
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int count; int payload; } ;
struct TYPE_4__ {int* mask; int ** val; } ;
struct TYPE_5__ {TYPE_1__ items; } ;
struct intel_pt_decoder {int blk_type_pos; TYPE_3__ packet; TYPE_2__ state; int blk_type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_decoder *VAR_1)
{
 uint32_t VAR_2 = VAR_1->packet.count;
 uint32_t VAR_3 = 1 << VAR_2;
 int VAR_4 = VAR_1->blk_type_pos;

 if (VAR_4 < 0 || VAR_2 >= VAR_0) {
  FUNC_0("WARNING: Unknown block item %u type %d\n",
        VAR_2, VAR_1->blk_type);
  return;
 }

 if (VAR_1->state.items.mask[VAR_4] & VAR_3) {
  FUNC_0("WARNING: Duplicate block item %u type %d\n",
        VAR_2, VAR_1->blk_type);
 }

 VAR_1->state.items.mask[VAR_4] |= VAR_3;
 VAR_1->state.items.val[VAR_4][VAR_2] = VAR_1->packet.payload;
}
