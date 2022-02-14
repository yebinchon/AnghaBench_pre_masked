
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int core_cpumask; } ;
struct isst_pkg_ctdp_level_info {int core_cpumask; TYPE_1__ pbf_info; scalar_t__ pbf_support; } ;
struct isst_pkg_ctdp {int levels; struct isst_pkg_ctdp_level_info* ctdp_level; int processed; } ;


 int FUNC_0 (int ) ;

void FUNC_1(int VAR_0, struct isst_pkg_ctdp *VAR_1)
{
 int VAR_2;

 if (!VAR_1->processed)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->levels; ++VAR_2) {
  struct isst_pkg_ctdp_level_info *VAR_3;

  VAR_3 = &VAR_1->ctdp_level[VAR_2];
  if (VAR_3->pbf_support)
   FUNC_0(VAR_3->pbf_info.core_cpumask);
  FUNC_0(VAR_3->core_cpumask);
 }
}
