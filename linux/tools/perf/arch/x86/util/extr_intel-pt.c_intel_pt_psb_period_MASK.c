
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_pmu {int name; } ;
struct evlist {int dummy; } ;


 int FUNC_0 (struct perf_pmu*,char*,struct evlist*,int*) ;
 int FUNC_1 (struct perf_pmu*,char*,char*,int*) ;
 int FUNC_2 (char*,int ,size_t) ;

__attribute__((used)) static size_t FUNC_3(struct perf_pmu *VAR_0,
      struct evlist *VAR_1)
{
 u64 VAR_2;
 int VAR_3, VAR_4;
 size_t VAR_5;

 if (FUNC_1(VAR_0, "caps/topa_multiple_entries",
    "%d", &VAR_4) != 1)
  VAR_4 = 0;





 if (!VAR_4) {
  VAR_5 = 256;
  goto out;
 }

 VAR_3 = FUNC_0(VAR_0, "psb_period", VAR_1, &VAR_2);
 if (VAR_3)
  VAR_2 = 0;

 VAR_5 = 1 << (VAR_2 + 11);
out:
 FUNC_2("%s psb_period %zu\n", VAR_0->name, VAR_5);
 return VAR_5;
}
