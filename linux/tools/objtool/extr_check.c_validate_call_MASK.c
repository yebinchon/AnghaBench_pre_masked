
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instruction {int offset; int sec; int call_dest; } ;
struct insn_state {scalar_t__ df; scalar_t__ uaccess; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct instruction*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct instruction *VAR_0, struct insn_state *VAR_1)
{
 if (VAR_1->uaccess && !FUNC_2(VAR_0->call_dest)) {
  FUNC_0("call to %s() with UACCESS enabled",
    VAR_0->sec, VAR_0->offset, FUNC_1(VAR_0));
  return 1;
 }

 if (VAR_1->df) {
  FUNC_0("call to %s() with DF set",
    VAR_0->sec, VAR_0->offset, FUNC_1(VAR_0));
  return 1;
 }

 return 0;
}
