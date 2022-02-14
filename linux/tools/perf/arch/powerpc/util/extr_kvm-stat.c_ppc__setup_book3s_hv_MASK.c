
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {char* exit_reasons_isa; int exit_reasons; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,struct evlist*) ;
 char** VAR_1 ;
 char* VAR_2 ;
 char** VAR_3 ;

__attribute__((used)) static int FUNC_1(struct perf_kvm_stat *VAR_4,
    struct evlist *VAR_5)
{
 const char **VAR_6;
 int VAR_7, VAR_8 = 0, VAR_9 = -1;


 for (VAR_6 = VAR_3; *VAR_6; VAR_6++) {
  VAR_9 = FUNC_0(*VAR_6, VAR_5);
  if (VAR_9)
   return -1;
  VAR_8++;
 }

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_1[VAR_7] = VAR_3[VAR_7];

 VAR_1[VAR_7] = ((void*)0);
 VAR_2 = "trap";
 VAR_4->exit_reasons = VAR_0;
 VAR_4->exit_reasons_isa = "HV";

 return 0;
}
