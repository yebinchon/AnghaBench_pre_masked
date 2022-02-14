
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int is_32_bit; scalar_t__* mask; } ;
struct TYPE_6__ {TYPE_2__ items; } ;
struct TYPE_4__ {scalar_t__ payload; int count; } ;
struct intel_pt_decoder {scalar_t__ prev_pkt_ctx; scalar_t__ blk_type; size_t blk_type_pos; TYPE_3__ state; TYPE_1__ packet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_pt_decoder *VAR_2)
{
 if (VAR_2->prev_pkt_ctx == VAR_1) {
  FUNC_2(VAR_2->state.items.mask, 0, sizeof(VAR_2->state.items.mask));
  VAR_2->state.items.is_32_bit = 0;
 }
 VAR_2->blk_type = VAR_2->packet.payload;
 VAR_2->blk_type_pos = FUNC_0(VAR_2->blk_type);
 if (VAR_2->blk_type == VAR_0)
  VAR_2->state.items.is_32_bit = VAR_2->packet.count;
 if (VAR_2->blk_type_pos < 0) {
  FUNC_1("WARNING: Unknown block type %u\n",
        VAR_2->blk_type);
 } else if (VAR_2->state.items.mask[VAR_2->blk_type_pos]) {
  FUNC_1("WARNING: Duplicate block type %u\n",
        VAR_2->blk_type);
 }
}
