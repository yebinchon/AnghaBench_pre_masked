
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_linger_request {struct ceph_osd_client* osdc; } ;
struct ceph_osd_client {int lock; } ;


 int FUNC_0 (struct ceph_osd_linger_request*) ;
 scalar_t__ FUNC_1 (struct ceph_osd_linger_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ceph_osd_linger_request *VAR_0)
{
 struct ceph_osd_client *VAR_1 = VAR_0->osdc;

 FUNC_2(&VAR_1->lock);
 if (FUNC_1(VAR_0))
  FUNC_0(VAR_0);
 FUNC_3(&VAR_1->lock);
}
