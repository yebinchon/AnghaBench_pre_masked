
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn_pos {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (struct bpf_insn_pos*) ;
 int FUNC_2 (int ,struct bpf_insn_pos*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct bpf_insn_pos *VAR_1, int VAR_2,
       const char *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_4(VAR_3);

 if (VAR_5 < 0) {
  FUNC_3("bpf: prologue: failed to get register %s\n",
         VAR_3);
  return VAR_5;
 }
 FUNC_2(FUNC_0(VAR_0, VAR_4, VAR_2, VAR_5), VAR_1);

 return FUNC_1(VAR_1);
}
