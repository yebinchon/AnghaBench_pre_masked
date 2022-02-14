
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int FUNC_0 (struct bpf_insn*) ;
 struct bpf_insn FUNC_1 () ;
 struct bpf_insn FUNC_2 (int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int,struct bpf_insn*,int ,char*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(enum bpf_prog_type VAR_1)
{
 struct bpf_insn VAR_2[] = {
  FUNC_2(VAR_0, 42),
  FUNC_1(),
 };

 return FUNC_3(VAR_1, VAR_2,
    FUNC_0(VAR_2), "GPL", 0, ((void*)0), 0);
}
