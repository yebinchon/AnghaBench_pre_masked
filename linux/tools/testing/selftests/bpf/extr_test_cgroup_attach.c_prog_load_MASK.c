
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;
typedef int prog ;


 struct bpf_insn FUNC_0 () ;
 int VAR_0 ;
 struct bpf_insn FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct bpf_insn*,size_t,char*,int ,char*,int ) ;
 char* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(int VAR_4)
{
 int VAR_5;
 struct bpf_insn VAR_6[] = {
  FUNC_1(VAR_2, VAR_4),
  FUNC_0(),
 };
 size_t VAR_7 = sizeof(VAR_6) / sizeof(struct bpf_insn);

 VAR_5 = FUNC_2(VAR_1,
          VAR_6, VAR_7, "GPL", 0,
          VAR_3, VAR_0);

 if (VAR_5 < 0) {
  FUNC_3("Loading program");
  FUNC_4("Output from verifier:\n%s\n-------\n", VAR_3);
  return 0;
 }
 return VAR_5;
}
