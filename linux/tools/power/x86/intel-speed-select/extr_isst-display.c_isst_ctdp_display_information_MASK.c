
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct isst_pkg_ctdp_level_info {int level; int tdp_ratio; int pkg_tdp; int t_proc_hot; int buckets_info; int* trl_sse_active_cores; int* trl_avx_active_cores; int* trl_avx_512_active_cores; int fact_info; scalar_t__ fact_support; int pbf_info; scalar_t__ pbf_support; scalar_t__ pbf_enabled; scalar_t__ fact_enabled; int core_cpumask; int core_cpumask_size; int processed; } ;
struct isst_pkg_ctdp {int levels; struct isst_pkg_ctdp_level_info* ctdp_level; } ;
typedef int header ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int,int,int,int *,int) ;
 int FUNC_1 (int,int *,int,int *,int) ;
 int FUNC_2 (int *,int,char*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,char*,int ,int ) ;
 int FUNC_7 (int,char*,int ,int ) ;
 int FUNC_8 (char*,int,char*,...) ;

void FUNC_9(int VAR_1, FILE *VAR_2, int VAR_3,
       struct isst_pkg_ctdp *VAR_4)
{
 char VAR_5[256];
 char VAR_6[256];
 int VAR_7, VAR_8 = 1;

 FUNC_5(VAR_1, VAR_2);

 for (VAR_7 = 0; VAR_7 <= VAR_4->levels; ++VAR_7) {
  struct isst_pkg_ctdp_level_info *VAR_9;
  int VAR_10;

  VAR_9 = &VAR_4->ctdp_level[VAR_7];
  if (!VAR_9->processed)
   continue;

  FUNC_8(VAR_5, sizeof(VAR_5), "perf-profile-level-%d",
    VAR_9->level);
  FUNC_2(VAR_2, VAR_8 + 3, VAR_5, ((void*)0));

  FUNC_8(VAR_5, sizeof(VAR_5), "cpu-count");
  VAR_10 = FUNC_3(FUNC_4(VAR_1),
      FUNC_4(VAR_1));
  FUNC_8(VAR_6, sizeof(VAR_6), "%d", VAR_10);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "enable-cpu-mask");
  FUNC_7(sizeof(VAR_6), VAR_6,
        VAR_9->core_cpumask_size,
        VAR_9->core_cpumask);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "enable-cpu-list");
  FUNC_6(sizeof(VAR_6), VAR_6,
        VAR_9->core_cpumask_size,
        VAR_9->core_cpumask);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "thermal-design-power-ratio");
  FUNC_8(VAR_6, sizeof(VAR_6), "%d", VAR_9->tdp_ratio);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "base-frequency(MHz)");
  FUNC_8(VAR_6, sizeof(VAR_6), "%d",
    VAR_9->tdp_ratio * VAR_0);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5),
    "speed-select-turbo-freq");
  if (VAR_9->fact_support) {
   if (VAR_9->fact_enabled)
    FUNC_8(VAR_6, sizeof(VAR_6), "enabled");
   else
    FUNC_8(VAR_6, sizeof(VAR_6), "disabled");
  } else
   FUNC_8(VAR_6, sizeof(VAR_6), "unsupported");
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5),
    "speed-select-base-freq");
  if (VAR_9->pbf_support) {
   if (VAR_9->pbf_enabled)
    FUNC_8(VAR_6, sizeof(VAR_6), "enabled");
   else
    FUNC_8(VAR_6, sizeof(VAR_6), "disabled");
  } else
   FUNC_8(VAR_6, sizeof(VAR_6), "unsupported");
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "thermal-design-power(W)");
  FUNC_8(VAR_6, sizeof(VAR_6), "%d", VAR_9->pkg_tdp);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "tjunction-max(C)");
  FUNC_8(VAR_6, sizeof(VAR_6), "%d", VAR_9->t_proc_hot);
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, VAR_6);

  FUNC_8(VAR_5, sizeof(VAR_5), "turbo-ratio-limits-sse");
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, ((void*)0));
  for (VAR_10 = 0; VAR_10 < 8; ++VAR_10) {
   FUNC_8(VAR_5, sizeof(VAR_5), "bucket-%d", VAR_10);
   FUNC_2(VAR_2, VAR_8 + 5, VAR_5, ((void*)0));

   FUNC_8(VAR_5, sizeof(VAR_5), "core-count");
   FUNC_8(VAR_6, sizeof(VAR_6), "%llu", (VAR_9->buckets_info >> (VAR_10 * 8)) & 0xff);
   FUNC_2(VAR_2, VAR_8 + 6, VAR_5, VAR_6);

   FUNC_8(VAR_5, sizeof(VAR_5),
    "max-turbo-frequency(MHz)");
   FUNC_8(VAR_6, sizeof(VAR_6), "%d",
     VAR_9->trl_sse_active_cores[VAR_10] *
      VAR_0);
   FUNC_2(VAR_2, VAR_8 + 6, VAR_5, VAR_6);
  }
  FUNC_8(VAR_5, sizeof(VAR_5), "turbo-ratio-limits-avx");
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, ((void*)0));
  for (VAR_10 = 0; VAR_10 < 8; ++VAR_10) {
   FUNC_8(VAR_5, sizeof(VAR_5), "bucket-%d", VAR_10);
   FUNC_2(VAR_2, VAR_8 + 5, VAR_5, ((void*)0));

   FUNC_8(VAR_5, sizeof(VAR_5), "core-count");
   FUNC_8(VAR_6, sizeof(VAR_6), "%llu", (VAR_9->buckets_info >> (VAR_10 * 8)) & 0xff);
   FUNC_2(VAR_2, VAR_8 + 6, VAR_5, VAR_6);

   FUNC_8(VAR_5, sizeof(VAR_5),
    "max-turbo-frequency(MHz)");
   FUNC_8(VAR_6, sizeof(VAR_6), "%d",
     VAR_9->trl_avx_active_cores[VAR_10] *
      VAR_0);
   FUNC_2(VAR_2, VAR_8 + 6, VAR_5, VAR_6);
  }

  FUNC_8(VAR_5, sizeof(VAR_5), "turbo-ratio-limits-avx512");
  FUNC_2(VAR_2, VAR_8 + 4, VAR_5, ((void*)0));
  for (VAR_10 = 0; VAR_10 < 8; ++VAR_10) {
   FUNC_8(VAR_5, sizeof(VAR_5), "bucket-%d", VAR_10);
   FUNC_2(VAR_2, VAR_8 + 5, VAR_5, ((void*)0));

   FUNC_8(VAR_5, sizeof(VAR_5), "core-count");
   FUNC_8(VAR_6, sizeof(VAR_6), "%llu", (VAR_9->buckets_info >> (VAR_10 * 8)) & 0xff);
   FUNC_2(VAR_2, VAR_8 + 6, VAR_5, VAR_6);

   FUNC_8(VAR_5, sizeof(VAR_5),
    "max-turbo-frequency(MHz)");
   FUNC_8(VAR_6, sizeof(VAR_6), "%d",
     VAR_9->trl_avx_512_active_cores[VAR_10] *
      VAR_0);
   FUNC_2(VAR_2, VAR_8 + 6, VAR_5, VAR_6);
  }
  if (VAR_9->pbf_support)
   FUNC_1(VAR_1, VAR_2, VAR_7,
            &VAR_9->pbf_info,
            VAR_8 + 4);
  if (VAR_9->fact_support)
   FUNC_0(VAR_1, VAR_2, VAR_7, 0xff, 0xff,
             &VAR_9->fact_info,
             VAR_8 + 4);
 }

 FUNC_2(VAR_2, 1, ((void*)0), ((void*)0));
}
