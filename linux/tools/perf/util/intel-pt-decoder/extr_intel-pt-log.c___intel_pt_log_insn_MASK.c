
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_insn {size_t length; int buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct intel_pt_insn*,char*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,size_t,int ,int) ;

void FUNC_4(struct intel_pt_insn *VAR_3, uint64_t VAR_4)
{
 char VAR_5[VAR_1];
 size_t VAR_6 = VAR_3->length;

 if (FUNC_2())
  return;

 if (VAR_6 > VAR_0)
  VAR_6 = VAR_0;
 FUNC_3(VAR_3->buf, VAR_6, VAR_4, 8);
 if (FUNC_1(VAR_3, VAR_5, VAR_1) > 0)
  FUNC_0(VAR_2, "%s\n", VAR_5);
 else
  FUNC_0(VAR_2, "Bad instruction!\n");
}
