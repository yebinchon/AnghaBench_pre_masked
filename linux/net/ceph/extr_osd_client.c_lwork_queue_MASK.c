
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linger_work {int work; int pending_item; int queued_stamp; struct ceph_osd_linger_request* lreq; } ;
struct ceph_osd_linger_request {int pending_lworks; struct ceph_osd_client* osdc; } ;
struct ceph_osd_client {int notify_wq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ceph_osd_linger_request*) ;

__attribute__((used)) static void FUNC_5(struct linger_work *VAR_1)
{
 struct ceph_osd_linger_request *VAR_2 = VAR_1->lreq;
 struct ceph_osd_client *VAR_3 = VAR_2->osdc;

 FUNC_4(VAR_2);
 FUNC_0(!FUNC_2(&VAR_1->pending_item));

 VAR_1->queued_stamp = VAR_0;
 FUNC_1(&VAR_1->pending_item, &VAR_2->pending_lworks);
 FUNC_3(VAR_3->notify_wq, &VAR_1->work);
}
