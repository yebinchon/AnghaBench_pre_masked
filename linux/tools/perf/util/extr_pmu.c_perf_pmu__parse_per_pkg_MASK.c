
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_alias {int per_pkg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct perf_pmu_alias *VAR_2, char *VAR_3, char *VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6;

 FUNC_2(VAR_5, VAR_1, "%s/%s.per-pkg", VAR_3, VAR_4);

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 if (VAR_6 == -1)
  return -1;

 FUNC_0(VAR_6);

 VAR_2->per_pkg = 1;
 return 0;
}
