
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_insn {int branch; int op; int rel; } ;






 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,size_t,char*,char*,...) ;

int FUNC_2(const struct intel_pt_insn *VAR_0, char *VAR_1,
         size_t VAR_2)
{
 switch (VAR_0->branch) {
 case 131:
 case 128:
  return FUNC_1(VAR_1, VAR_2, "%s %s%d",
    FUNC_0(VAR_0->op),
    VAR_0->rel > 0 ? "+" : "",
    VAR_0->rel);
 case 129:
 case 130:
  return FUNC_1(VAR_1, VAR_2, "%s",
    FUNC_0(VAR_0->op));
 default:
  break;
 }
 return 0;
}
