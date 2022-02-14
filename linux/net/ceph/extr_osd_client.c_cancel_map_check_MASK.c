
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request {int r_tid; struct ceph_osd_client* r_osdc; } ;
struct ceph_osd_client {int map_checks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_osd_request*) ;
 int FUNC_2 (int *,struct ceph_osd_request*) ;
 struct ceph_osd_request* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ceph_osd_client*) ;

__attribute__((used)) static void FUNC_5(struct ceph_osd_request *VAR_0)
{
 struct ceph_osd_client *VAR_1 = VAR_0->r_osdc;
 struct ceph_osd_request *VAR_2;

 FUNC_4(VAR_1);

 VAR_2 = FUNC_3(&VAR_1->map_checks, VAR_0->r_tid);
 if (!VAR_2)
  return;

 FUNC_0(VAR_2 != VAR_0);
 FUNC_2(&VAR_1->map_checks, VAR_0);
 FUNC_1(VAR_0);
}
