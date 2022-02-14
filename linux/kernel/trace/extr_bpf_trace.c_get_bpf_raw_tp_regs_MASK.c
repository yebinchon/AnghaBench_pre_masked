
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct bpf_raw_tp_regs {struct pt_regs* regs; } ;


 int FUNC_0 (struct pt_regs*) ;
 int VAR_0 ;
 struct pt_regs* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct bpf_raw_tp_regs* FUNC_5 (int *) ;

__attribute__((used)) static struct pt_regs *FUNC_6(void)
{
 struct bpf_raw_tp_regs *VAR_3 = FUNC_5(&VAR_2);
 int VAR_4 = FUNC_4(VAR_1);

 if (FUNC_2(VAR_4 > FUNC_0(VAR_3->regs))) {
  FUNC_3(VAR_1);
  return FUNC_1(-VAR_0);
 }

 return &VAR_3->regs[VAR_4 - 1];
}
