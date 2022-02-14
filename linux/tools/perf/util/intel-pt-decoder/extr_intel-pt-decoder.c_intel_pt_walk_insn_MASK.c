
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct intel_pt_insn {scalar_t__ branch; scalar_t__ length; scalar_t__ op; scalar_t__ rel; int buf; } ;
struct TYPE_2__ {scalar_t__ from_ip; scalar_t__ to_ip; scalar_t__ insn_op; scalar_t__ insn_len; int flags; int insn; int type; } ;
struct intel_pt_decoder {int mtc_insn; int (* walk_insn ) (struct intel_pt_insn*,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,int ) ;scalar_t__ ip; scalar_t__ stuck_ip; int stuck_ip_prd; int stuck_ip_cnt; int tx_flags; TYPE_1__ state; scalar_t__ no_progress; int pkt_state; int stack; int ret_addr; int period_insn_cnt; int sample_insn_cnt; int timestamp_insn_cnt; int tot_insn_cnt; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct intel_pt_decoder*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct intel_pt_insn*,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct intel_pt_decoder *VAR_16,
         struct intel_pt_insn *VAR_17, uint64_t VAR_18)
{
 uint64_t VAR_19, VAR_20 = 0;
 int VAR_21;

 if (!VAR_16->mtc_insn)
  VAR_16->mtc_insn = 1;

 VAR_19 = FUNC_1(VAR_16);

 VAR_21 = VAR_16->walk_insn(VAR_17, &VAR_20, &VAR_16->ip, VAR_18,
     VAR_19, VAR_16->data);

 VAR_16->tot_insn_cnt += VAR_20;
 VAR_16->timestamp_insn_cnt += VAR_20;
 VAR_16->sample_insn_cnt += VAR_20;
 VAR_16->period_insn_cnt += VAR_20;

 if (VAR_21) {
  VAR_16->no_progress = 0;
  VAR_16->pkt_state = VAR_14;
  FUNC_0("ERROR: Failed to get instruction",
    VAR_16->ip);
  if (VAR_21 == -VAR_3)
   return -VAR_4;
  return -VAR_1;
 }

 if (VAR_18 && VAR_16->ip == VAR_18) {
  VAR_21 = -VAR_0;
  goto out;
 }

 if (VAR_19 && VAR_20 >= VAR_19)
  FUNC_4(VAR_16);

 if (VAR_17->branch == VAR_5) {
  VAR_16->state.type = VAR_8;
  VAR_16->state.from_ip = VAR_16->ip;
  VAR_16->state.to_ip = 0;
  VAR_16->ip += VAR_17->length;
  VAR_21 = VAR_13;
  goto out;
 }

 if (VAR_17->op == VAR_11) {

  if (VAR_17->branch != VAR_6 ||
      VAR_17->rel) {
   VAR_21 = FUNC_3(&VAR_16->stack, VAR_16->ip +
         VAR_17->length);
   if (VAR_21)
    goto out;
  }
 } else if (VAR_17->op == VAR_12) {
  VAR_16->ret_addr = FUNC_2(&VAR_16->stack);
 }

 if (VAR_17->branch == VAR_6) {
  int VAR_22 = VAR_16->no_progress++;

  VAR_16->state.from_ip = VAR_16->ip;
  VAR_16->ip += VAR_17->length +
    VAR_17->rel;
  VAR_16->state.to_ip = VAR_16->ip;
  VAR_21 = VAR_13;
  if (VAR_22) {
   if (VAR_22 == 1) {
    VAR_16->stuck_ip = VAR_16->state.to_ip;
    VAR_16->stuck_ip_prd = 1;
    VAR_16->stuck_ip_cnt = 1;
   } else if (VAR_22 > VAR_10 ||
       VAR_16->state.to_ip == VAR_16->stuck_ip) {
    FUNC_0("ERROR: Never-ending loop",
      VAR_16->state.to_ip);
    VAR_16->pkt_state = VAR_15;
    VAR_21 = -VAR_2;
    goto out;
   } else if (!--VAR_16->stuck_ip_cnt) {
    VAR_16->stuck_ip_prd += 1;
    VAR_16->stuck_ip_cnt = VAR_16->stuck_ip_prd;
    VAR_16->stuck_ip = VAR_16->state.to_ip;
   }
  }
  goto out_no_progress;
 }
out:
 VAR_16->no_progress = 0;
out_no_progress:
 VAR_16->state.insn_op = VAR_17->op;
 VAR_16->state.insn_len = VAR_17->length;
 FUNC_5(VAR_16->state.insn, VAR_17->buf,
        VAR_7);

 if (VAR_16->tx_flags & VAR_9)
  VAR_16->state.flags |= VAR_9;

 return VAR_21;
}
