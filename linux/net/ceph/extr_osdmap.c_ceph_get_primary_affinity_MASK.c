
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_osdmap {int max_osd; int * osd_primary_affinity; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

u32 FUNC_1(struct ceph_osdmap *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 >= VAR_1->max_osd);

 if (!VAR_1->osd_primary_affinity)
  return VAR_0;

 return VAR_1->osd_primary_affinity[VAR_2];
}
