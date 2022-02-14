
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int uniquified_name; char* pmu_name; char* name; } ;


 scalar_t__ FUNC_0 (char**,char*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct evsel *VAR_0)
{
 char *VAR_1;
 char *VAR_2;

 if (VAR_0->uniquified_name ||
     !VAR_0->pmu_name || !FUNC_4(VAR_0->name, VAR_0->pmu_name,
        FUNC_3(VAR_0->pmu_name)))
  return;

 VAR_2 = FUNC_2(VAR_0->name, '/');
 if (VAR_2) {
  if (FUNC_0(&VAR_1,
        "%s%s", VAR_0->pmu_name, VAR_2) > 0) {
   FUNC_1(VAR_0->name);
   VAR_0->name = VAR_1;
  }
 } else {
  if (FUNC_0(&VAR_1,
        "%s [%s]", VAR_0->name, VAR_0->pmu_name) > 0) {
   FUNC_1(VAR_0->name);
   VAR_0->name = VAR_1;
  }
 }

 VAR_0->uniquified_name = 1;
}
