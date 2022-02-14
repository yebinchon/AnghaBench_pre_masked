
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_insn {scalar_t__ branch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const*,size_t,int,struct intel_pt_insn*) ;

int FUNC_1(const unsigned char *VAR_1, size_t VAR_2, int VAR_3)
{
 struct intel_pt_insn VAR_4;
 if (FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4) < 0)
  return -1;
 return VAR_4.branch != VAR_0;
}
