
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {scalar_t__ own_cpus; scalar_t__ cpus; int threads; } ;
struct perf_evlist {scalar_t__ cpus; int threads; scalar_t__ has_user_cpus; } ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_evlist *VAR_0,
       struct perf_evsel *VAR_1)
{




 if (!VAR_1->own_cpus || VAR_0->has_user_cpus) {
  FUNC_1(VAR_1->cpus);
  VAR_1->cpus = FUNC_0(VAR_0->cpus);
 } else if (VAR_1->cpus != VAR_1->own_cpus) {
  FUNC_1(VAR_1->cpus);
  VAR_1->cpus = FUNC_0(VAR_1->own_cpus);
 }

 FUNC_3(VAR_1->threads);
 VAR_1->threads = FUNC_2(VAR_0->threads);
}
