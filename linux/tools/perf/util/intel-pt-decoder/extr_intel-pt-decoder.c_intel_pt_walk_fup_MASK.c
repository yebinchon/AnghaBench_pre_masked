
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_insn {scalar_t__ branch; } ;
struct intel_pt_decoder {int set_fup_tx_flags; void* pkt_state; int ip; int last_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 scalar_t__ FUNC_1 (struct intel_pt_decoder*) ;
 scalar_t__ FUNC_2 (struct intel_pt_decoder*,struct intel_pt_insn*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct intel_pt_decoder*,struct intel_pt_insn*,int ) ;

__attribute__((used)) static int FUNC_5(struct intel_pt_decoder *VAR_6)
{
 struct intel_pt_insn VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_6->last_ip;

 while (1) {
  VAR_9 = FUNC_4(VAR_6, &VAR_7, VAR_8);
  if (VAR_9 == VAR_4)
   return 0;
  if (VAR_9 == -VAR_0 ||
      FUNC_2(VAR_6, &VAR_7, VAR_8, VAR_9)) {
   if (FUNC_1(VAR_6))
    return 0;
   return -VAR_0;
  }
  VAR_6->set_fup_tx_flags = 0;
  if (VAR_9)
   return VAR_9;

  if (VAR_7.branch == VAR_3) {
   FUNC_3("ERROR: Unexpected indirect branch",
     VAR_6->ip);
   VAR_6->pkt_state = VAR_5;
   return -VAR_1;
  }

  if (VAR_7.branch == VAR_2) {
   FUNC_3("ERROR: Unexpected conditional branch",
     VAR_6->ip);
   VAR_6->pkt_state = VAR_5;
   return -VAR_1;
  }

  FUNC_0(VAR_6);
 }
}
