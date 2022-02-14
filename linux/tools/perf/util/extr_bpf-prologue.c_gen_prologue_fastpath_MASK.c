
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg {int value; } ;
struct bpf_insn_pos {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_insn_pos*) ;
 int FUNC_1 (struct bpf_insn_pos*,int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct bpf_insn_pos *VAR_2,
        struct probe_trace_arg *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3[VAR_5].value,
        VAR_0 + VAR_5);
  if (VAR_6)
   goto errout;
 }

 return FUNC_0(VAR_2);
errout:
 return VAR_6;
}
