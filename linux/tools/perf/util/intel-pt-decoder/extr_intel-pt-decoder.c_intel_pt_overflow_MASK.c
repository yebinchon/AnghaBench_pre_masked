
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int overflow; int pkt_state; scalar_t__ timestamp_insn_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct intel_pt_decoder *VAR_2)
{
 FUNC_1("ERROR: Buffer overflow\n");
 FUNC_0(VAR_2);
 VAR_2->timestamp_insn_cnt = 0;
 VAR_2->pkt_state = VAR_1;
 VAR_2->overflow = 1;
 return -VAR_0;
}
