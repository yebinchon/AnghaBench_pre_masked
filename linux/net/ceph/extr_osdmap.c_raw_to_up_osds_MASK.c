
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {int dummy; } ;
struct ceph_osds {int primary; int size; int* osds; } ;
struct ceph_osdmap {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ceph_pg_pool_info*) ;
 scalar_t__ FUNC_2 (struct ceph_osdmap*,int) ;

__attribute__((used)) static void FUNC_3(struct ceph_osdmap *VAR_1,
      struct ceph_pg_pool_info *VAR_2,
      struct ceph_osds *VAR_3)
{
 int VAR_4;


 FUNC_0(VAR_3->primary != -1);

 if (FUNC_1(VAR_2)) {
  int VAR_5 = 0;


  for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
   if (FUNC_2(VAR_1, VAR_3->osds[VAR_4])) {
    VAR_5++;
    continue;
   }
   if (VAR_5)
    VAR_3->osds[VAR_4 - VAR_5] = VAR_3->osds[VAR_4];
  }
  VAR_3->size -= VAR_5;
  if (VAR_3->size > 0)
   VAR_3->primary = VAR_3->osds[0];
 } else {

  for (VAR_4 = VAR_3->size - 1; VAR_4 >= 0; VAR_4--) {
   if (FUNC_2(VAR_1, VAR_3->osds[VAR_4]))
    VAR_3->osds[VAR_4] = VAR_0;
   else
    VAR_3->primary = VAR_3->osds[VAR_4];
  }
 }
}
