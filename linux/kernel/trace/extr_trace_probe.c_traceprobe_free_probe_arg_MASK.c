
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_arg {struct fetch_insn* fmt; struct fetch_insn* comm; struct fetch_insn* name; struct fetch_insn* code; } ;
struct fetch_insn {scalar_t__ op; struct fetch_insn* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fetch_insn*) ;

void FUNC_1(struct probe_arg *VAR_3)
{
 struct fetch_insn *VAR_4 = VAR_3->code;

 while (VAR_4 && VAR_4->op != VAR_2) {
  if (VAR_4->op == VAR_0 ||
      VAR_4->op == VAR_1)
   FUNC_0(VAR_4->data);
  VAR_4++;
 }
 FUNC_0(VAR_3->code);
 FUNC_0(VAR_3->name);
 FUNC_0(VAR_3->comm);
 FUNC_0(VAR_3->fmt);
}
