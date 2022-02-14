
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pg_pool_info {int dummy; } ;
struct ceph_osds {int size; int * osds; } ;
struct ceph_osdmap {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_pg_pool_info*) ;
 int FUNC_1 (struct ceph_osdmap*,int ) ;

__attribute__((used)) static void FUNC_2(struct ceph_osdmap *VAR_1,
        struct ceph_pg_pool_info *VAR_2,
        struct ceph_osds *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2)) {
  int VAR_5 = 0;


  for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
   if (!FUNC_1(VAR_1, VAR_3->osds[VAR_4])) {
    VAR_5++;
    continue;
   }
   if (VAR_5)
    VAR_3->osds[VAR_4 - VAR_5] = VAR_3->osds[VAR_4];
  }
  VAR_3->size -= VAR_5;
 } else {

  for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
   if (!FUNC_1(VAR_1, VAR_3->osds[VAR_4]))
    VAR_3->osds[VAR_4] = VAR_0;
  }
 }
}
