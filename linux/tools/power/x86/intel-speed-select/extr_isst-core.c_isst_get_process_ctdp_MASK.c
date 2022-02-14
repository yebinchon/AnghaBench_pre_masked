
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isst_pkg_ctdp_level_info {int processed; int level; int control_cpu; int pbf_found; int fact_info; scalar_t__ fact_support; int pbf_info; scalar_t__ pbf_support; int trl_avx_512_active_cores; int trl_avx_active_cores; int trl_sse_active_cores; int buckets_info; int core_cpumask; int core_cpumask_size; int die_id; int pkg_id; } ;
struct isst_pkg_ctdp {int processed; int levels; struct isst_pkg_ctdp_level_info* ctdp_level; int current_level; int enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,struct isst_pkg_ctdp_level_info*) ;
 int FUNC_5 (int,int,struct isst_pkg_ctdp_level_info*) ;
 int FUNC_6 (int,struct isst_pkg_ctdp*) ;
 int FUNC_7 (int,int,int *) ;
 int FUNC_8 (int,int,int,int ) ;
 int FUNC_9 (int,int,int *) ;
 int FUNC_10 (int,int,struct isst_pkg_ctdp_level_info*) ;
 int FUNC_11 (int,int,struct isst_pkg_ctdp_level_info*) ;
 int FUNC_12 (int,int,struct isst_pkg_ctdp_level_info*) ;
 int FUNC_13 (int,int *) ;

int FUNC_14(int VAR_0, int VAR_1, struct isst_pkg_ctdp *VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2->processed)
  return 0;

 VAR_4 = FUNC_6(VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_1("cpu: %d ctdp enable:%d current level: %d levels:%d\n",
       VAR_0, VAR_2->enabled, VAR_2->current_level,
       VAR_2->levels);

 for (VAR_3 = 0; VAR_3 <= VAR_2->levels; ++VAR_3) {
  struct isst_pkg_ctdp_level_info *VAR_5;

  if (VAR_1 != 0xff && VAR_3 != VAR_1)
   continue;

  FUNC_1("cpu:%d Get Information for TDP level:%d\n", VAR_0,
        VAR_3);
  VAR_5 = &VAR_2->ctdp_level[VAR_3];

  VAR_5->processed = 1;
  VAR_5->level = VAR_3;
  VAR_5->control_cpu = VAR_0;
  VAR_5->pkg_id = FUNC_3(VAR_0);
  VAR_5->die_id = FUNC_2(VAR_0);

  VAR_4 = FUNC_5(VAR_0, VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_11(VAR_0, VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_10(VAR_0, VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_12(VAR_0, VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;

  VAR_5->core_cpumask_size =
   FUNC_0(&VAR_5->core_cpumask);
  VAR_4 = FUNC_4(VAR_0, VAR_3, VAR_5);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_13(VAR_0, &VAR_5->buckets_info);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_8(VAR_0, VAR_3, 0,
           VAR_5->trl_sse_active_cores);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_8(VAR_0, VAR_3, 1,
           VAR_5->trl_avx_active_cores);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_8(VAR_0, VAR_3, 2,
           VAR_5->trl_avx_512_active_cores);
  if (VAR_4)
   return VAR_4;

  if (VAR_5->pbf_support) {
   VAR_4 = FUNC_9(VAR_0, VAR_3, &VAR_5->pbf_info);
   if (!VAR_4)
    VAR_5->pbf_found = 1;
  }

  if (VAR_5->fact_support) {
   VAR_4 = FUNC_7(VAR_0, VAR_3,
       &VAR_5->fact_info);
   if (VAR_4)
    return VAR_4;
  }
 }

 VAR_2->processed = 1;

 return 0;
}
