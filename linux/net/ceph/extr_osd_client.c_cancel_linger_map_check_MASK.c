
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_linger_request {int linger_id; struct ceph_osd_client* osdc; } ;
struct ceph_osd_client {int linger_map_checks; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct ceph_osd_linger_request*) ;
 int FUNC_2 (struct ceph_osd_linger_request*) ;
 struct ceph_osd_linger_request* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ceph_osd_client*) ;

__attribute__((used)) static void FUNC_5(struct ceph_osd_linger_request *VAR_0)
{
 struct ceph_osd_client *VAR_1 = VAR_0->osdc;
 struct ceph_osd_linger_request *VAR_2;

 FUNC_4(VAR_1);

 VAR_2 = FUNC_3(&VAR_1->linger_map_checks,
           VAR_0->linger_id);
 if (!VAR_2)
  return;

 FUNC_0(VAR_2 != VAR_0);
 FUNC_1(&VAR_1->linger_map_checks, VAR_0);
 FUNC_2(VAR_0);
}
