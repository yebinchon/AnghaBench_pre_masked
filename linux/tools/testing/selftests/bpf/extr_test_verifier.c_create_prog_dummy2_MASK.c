
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_insn {int dummy; } ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;


 int FUNC_0 (struct bpf_insn*) ;
 int VAR_0 ;
 struct bpf_insn FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct bpf_insn FUNC_2 (int ,int) ;
 struct bpf_insn FUNC_3 (int ,int) ;
 struct bpf_insn FUNC_4 (int,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,struct bpf_insn*,int ,char*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(enum bpf_prog_type VAR_6, int VAR_7, int VAR_8)
{
 struct bpf_insn VAR_9[] = {
  FUNC_3(VAR_5, VAR_8),
  FUNC_2(VAR_4, VAR_7),
  FUNC_4(VAR_2 | VAR_0, 0, 0, 0,
        VAR_1),
  FUNC_3(VAR_3, 41),
  FUNC_1(),
 };

 return FUNC_5(VAR_6, VAR_9,
    FUNC_0(VAR_9), "GPL", 0, ((void*)0), 0);
}
