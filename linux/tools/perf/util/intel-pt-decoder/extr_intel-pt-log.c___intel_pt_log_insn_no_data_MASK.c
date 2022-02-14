
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_insn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct intel_pt_insn*,char*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct intel_pt_insn *VAR_2,
     uint64_t VAR_3)
{
 char VAR_4[VAR_0];

 if (FUNC_2())
  return;

 FUNC_3(VAR_3, 8);
 if (FUNC_1(VAR_2, VAR_4, VAR_0) > 0)
  FUNC_0(VAR_1, "%s\n", VAR_4);
 else
  FUNC_0(VAR_1, "Bad instruction!\n");
}
