
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {char* exit_reasons_isa; int exit_reasons; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

int FUNC_1(struct perf_kvm_stat *VAR_2, const char *VAR_3)
{
 if (FUNC_0(VAR_3, "IBM")) {
  VAR_2->exit_reasons = VAR_1;
  VAR_2->exit_reasons_isa = "SIE";
 } else
  return -VAR_0;

 return 0;
}
