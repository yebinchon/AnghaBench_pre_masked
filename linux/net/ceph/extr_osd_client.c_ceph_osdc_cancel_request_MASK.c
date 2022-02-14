
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request {scalar_t__ r_osd; struct ceph_osd_client* r_osdc; } ;
struct ceph_osd_client {int lock; } ;


 int FUNC_0 (struct ceph_osd_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ceph_osd_request *VAR_0)
{
 struct ceph_osd_client *VAR_1 = VAR_0->r_osdc;

 FUNC_1(&VAR_1->lock);
 if (VAR_0->r_osd)
  FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock);
}
