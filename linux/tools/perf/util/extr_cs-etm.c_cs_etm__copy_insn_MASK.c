
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sample {int insn_len; scalar_t__ insn; int ip; } ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet {scalar_t__ sample_type; scalar_t__ isa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cs_etm_queue*,int ,int ,int,void*) ;
 int FUNC_1 (struct cs_etm_queue*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cs_etm_queue *VAR_2,
         u64 VAR_3,
         const struct cs_etm_packet *VAR_4,
         struct perf_sample *VAR_5)
{




 if (VAR_4->sample_type == VAR_0) {
  VAR_5->insn_len = 0;
  return;
 }





 if (VAR_4->isa == VAR_1)
  VAR_5->insn_len = FUNC_1(VAR_2, VAR_3,
         VAR_5->ip);

 else
  VAR_5->insn_len = 4;

 FUNC_0(VAR_2, VAR_3, VAR_5->ip,
      VAR_5->insn_len, (void *)VAR_5->insn);
}
