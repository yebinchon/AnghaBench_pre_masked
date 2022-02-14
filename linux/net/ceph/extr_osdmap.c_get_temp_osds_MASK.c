
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_pg_pool_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ osd; } ;
struct TYPE_3__ {int len; scalar_t__* osds; } ;
struct ceph_pg_mapping {TYPE_2__ primary_temp; TYPE_1__ pg_temp; } ;
struct ceph_pg {int dummy; } ;
struct ceph_osds {scalar_t__* osds; int size; scalar_t__ primary; } ;
struct ceph_osdmap {int primary_temp; int pg_temp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_pg_pool_info*) ;
 scalar_t__ FUNC_1 (struct ceph_osdmap*,scalar_t__) ;
 int FUNC_2 (struct ceph_osds*) ;
 struct ceph_pg_mapping* FUNC_3 (int *,struct ceph_pg const*) ;

__attribute__((used)) static void FUNC_4(struct ceph_osdmap *VAR_1,
     struct ceph_pg_pool_info *VAR_2,
     const struct ceph_pg *VAR_3,
     struct ceph_osds *VAR_4)
{
 struct ceph_pg_mapping *VAR_5;
 int VAR_6;

 FUNC_2(VAR_4);


 VAR_5 = FUNC_3(&VAR_1->pg_temp, VAR_3);
 if (VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_5->pg_temp.len; VAR_6++) {
   if (FUNC_1(VAR_1, VAR_5->pg_temp.osds[VAR_6])) {
    if (FUNC_0(VAR_2))
     continue;

    VAR_4->osds[VAR_4->size++] = VAR_0;
   } else {
    VAR_4->osds[VAR_4->size++] = VAR_5->pg_temp.osds[VAR_6];
   }
  }


  for (VAR_6 = 0; VAR_6 < VAR_4->size; VAR_6++) {
   if (VAR_4->osds[VAR_6] != VAR_0) {
    VAR_4->primary = VAR_4->osds[VAR_6];
    break;
   }
  }
 }


 VAR_5 = FUNC_3(&VAR_1->primary_temp, VAR_3);
 if (VAR_5)
  VAR_4->primary = VAR_5->primary_temp.osd;
}
