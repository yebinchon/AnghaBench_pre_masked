
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_pt_insn {scalar_t__ op; scalar_t__ branch; scalar_t__ length; scalar_t__ rel; } ;
struct TYPE_6__ {int payload; scalar_t__ count; } ;
struct TYPE_5__ {int type; scalar_t__ to_ip; scalar_t__ from_ip; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ count; } ;
struct intel_pt_decoder {int sample_cyc; TYPE_3__ tnt; scalar_t__ ip; TYPE_2__ state; void* pkt_state; scalar_t__ last_ip; scalar_t__ pkt_step; TYPE_1__ packet; scalar_t__ ret_addr; int return_compression; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct intel_pt_decoder*) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 int FUNC_5 (struct intel_pt_decoder*,struct intel_pt_insn*,int ) ;

__attribute__((used)) static int FUNC_6(struct intel_pt_decoder *VAR_12)
{
 struct intel_pt_insn VAR_13;
 int VAR_14;

 while (1) {
  VAR_14 = FUNC_5(VAR_12, &VAR_13, 0);
  if (VAR_14 == VAR_7)
   return 0;
  if (VAR_14)
   return VAR_14;

  if (VAR_13.op == VAR_6) {
   if (!VAR_12->return_compression) {
    FUNC_2("ERROR: RET when expecting conditional branch",
      VAR_12->ip);
    VAR_12->pkt_state = VAR_8;
    return -VAR_2;
   }
   if (!VAR_12->ret_addr) {
    FUNC_2("ERROR: Bad RET compression (stack empty)",
      VAR_12->ip);
    VAR_12->pkt_state = VAR_8;
    return -VAR_2;
   }
   if (!(VAR_12->tnt.payload & VAR_0)) {
    FUNC_2("ERROR: Bad RET compression (TNT=N)",
      VAR_12->ip);
    VAR_12->pkt_state = VAR_8;
    return -VAR_2;
   }
   VAR_12->tnt.count -= 1;
   if (VAR_12->tnt.count)
    VAR_12->pkt_state = VAR_10;
   else
    VAR_12->pkt_state = VAR_9;
   VAR_12->tnt.payload <<= 1;
   VAR_12->state.from_ip = VAR_12->ip;
   VAR_12->ip = VAR_12->ret_addr;
   VAR_12->state.to_ip = VAR_12->ip;
   return 0;
  }

  if (VAR_13.branch == VAR_4) {

   VAR_14 = FUNC_1(VAR_12);
   if (VAR_14)
    return VAR_14;
   if (VAR_12->packet.type != VAR_11 ||
       VAR_12->packet.count == 0) {
    FUNC_2("ERROR: Missing deferred TIP for indirect branch",
      VAR_12->ip);
    VAR_12->pkt_state = VAR_8;
    VAR_12->pkt_step = 0;
    return -VAR_2;
   }
   FUNC_3(VAR_12);
   VAR_12->state.from_ip = VAR_12->ip;
   VAR_12->state.to_ip = VAR_12->last_ip;
   VAR_12->ip = VAR_12->last_ip;
   return 0;
  }

  if (VAR_13.branch == VAR_3) {
   VAR_12->tnt.count -= 1;
   if (VAR_12->tnt.count)
    VAR_12->pkt_state = VAR_10;
   else
    VAR_12->pkt_state = VAR_9;
   if (VAR_12->tnt.payload & VAR_0) {
    VAR_12->tnt.payload <<= 1;
    VAR_12->state.from_ip = VAR_12->ip;
    VAR_12->ip += VAR_13.length +
            VAR_13.rel;
    VAR_12->state.to_ip = VAR_12->ip;
    return 0;
   }

   if (VAR_12->state.type & VAR_5) {
    VAR_12->tnt.payload <<= 1;
    VAR_12->state.type = VAR_5;
    VAR_12->state.from_ip = VAR_12->ip;
    VAR_12->state.to_ip = 0;
    VAR_12->ip += VAR_13.length;
    return 0;
   }
   VAR_12->sample_cyc = 0;
   VAR_12->ip += VAR_13.length;
   if (!VAR_12->tnt.count) {
    FUNC_4(VAR_12);
    return -VAR_1;
   }
   VAR_12->tnt.payload <<= 1;
   continue;
  }

  return FUNC_0(VAR_12);
 }
}
