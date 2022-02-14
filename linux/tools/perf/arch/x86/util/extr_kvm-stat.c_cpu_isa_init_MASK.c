
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {char* exit_reasons_isa; int exit_reasons; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct perf_kvm_stat *VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_4, "Intel")) {
  VAR_3->exit_reasons = VAR_2;
  VAR_3->exit_reasons_isa = "VMX";
 } else if (FUNC_0(VAR_4, "AMD") || FUNC_0(VAR_4, "Hygon")) {
  VAR_3->exit_reasons = VAR_1;
  VAR_3->exit_reasons_isa = "SVM";
 } else
  return -VAR_0;

 return 0;
}
