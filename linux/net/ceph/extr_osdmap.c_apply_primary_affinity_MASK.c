
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_pg_pool_info {int dummy; } ;
struct ceph_osds {int size; int* osds; int primary; } ;
struct ceph_osdmap {scalar_t__* osd_primary_affinity; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ceph_pg_pool_info*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct ceph_osdmap *VAR_4,
       struct ceph_pg_pool_info *VAR_5,
       u32 VAR_6,
       struct ceph_osds *VAR_7)
{
 int VAR_8;
 int VAR_9 = -1;





 if (!VAR_4->osd_primary_affinity)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_7->size; VAR_8++) {
  int VAR_10 = VAR_7->osds[VAR_8];

  if (VAR_10 != VAR_3 &&
      VAR_4->osd_primary_affinity[VAR_10] !=
     VAR_0) {
   break;
  }
 }
 if (VAR_8 == VAR_7->size)
  return;






 for (VAR_8 = 0; VAR_8 < VAR_7->size; VAR_8++) {
  int VAR_11 = VAR_7->osds[VAR_8];
  u32 VAR_12;

  if (VAR_11 == VAR_3)
   continue;

  VAR_12 = VAR_4->osd_primary_affinity[VAR_11];
  if (VAR_12 < VAR_1 &&
      (FUNC_1(VAR_2,
        VAR_6, VAR_11) >> 16) >= VAR_12) {





   if (VAR_9 < 0)
    VAR_9 = VAR_8;
  } else {
   VAR_9 = VAR_8;
   break;
  }
 }
 if (VAR_9 < 0)
  return;

 VAR_7->primary = VAR_7->osds[VAR_9];

 if (FUNC_0(VAR_5) && VAR_9 > 0) {

  for (VAR_8 = VAR_9; VAR_8 > 0; VAR_8--)
   VAR_7->osds[VAR_8] = VAR_7->osds[VAR_8 - 1];
  VAR_7->osds[0] = VAR_7->primary;
 }
}
