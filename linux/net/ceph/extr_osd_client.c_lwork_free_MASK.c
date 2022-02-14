
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linger_work {int pending_item; struct ceph_osd_linger_request* lreq; } ;
struct ceph_osd_linger_request {int lock; } ;


 int FUNC_0 (struct linger_work*) ;
 int FUNC_1 (struct ceph_osd_linger_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct linger_work *VAR_0)
{
 struct ceph_osd_linger_request *VAR_1 = VAR_0->lreq;

 FUNC_3(&VAR_1->lock);
 FUNC_2(&VAR_0->pending_item);
 FUNC_4(&VAR_1->lock);

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
