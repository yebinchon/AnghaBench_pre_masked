
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int o_osd; struct ceph_osd_client* o_osdc; } ;
struct ceph_osd_client {int osdmap; int req_mempool; int msgpool_op; int msgpool_op_reply; void* notify_wq; struct ceph_client* client; int osds_timeout_work; int timeout_work; void* completion_wq; void* linger_map_checks; void* map_checks; void* linger_requests; int last_linger_id; TYPE_2__ homeless_osd; int osd_lru_lock; int osd_lru; void* osds; int lock; } ;
struct ceph_client {TYPE_1__* options; } ;
struct TYPE_3__ {int osd_idle_ttl; int osd_keepalive_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ,int,char*) ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct ceph_osd_client *VAR_11, struct ceph_client *VAR_12)
{
 int VAR_13;

 FUNC_8("init\n");
 VAR_11->client = VAR_12;
 FUNC_9(&VAR_11->lock);
 VAR_11->osds = VAR_7;
 FUNC_1(&VAR_11->osd_lru);
 FUNC_15(&VAR_11->osd_lru_lock);
 FUNC_12(&VAR_11->homeless_osd);
 VAR_11->homeless_osd.o_osdc = VAR_11;
 VAR_11->homeless_osd.o_osd = VAR_0;
 VAR_11->last_linger_id = VAR_1;
 VAR_11->linger_requests = VAR_7;
 VAR_11->map_checks = VAR_7;
 VAR_11->linger_map_checks = VAR_7;
 FUNC_0(&VAR_11->timeout_work, VAR_10);
 FUNC_0(&VAR_11->osds_timeout_work, VAR_9);

 VAR_13 = -VAR_5;
 VAR_11->osdmap = FUNC_4();
 if (!VAR_11->osdmap)
  goto out;

 VAR_11->req_mempool = FUNC_10(10,
           VAR_8);
 if (!VAR_11->req_mempool)
  goto out_map;

 VAR_13 = FUNC_3(&VAR_11->msgpool_op, VAR_2,
    VAR_6, VAR_4, 10, "osd_op");
 if (VAR_13 < 0)
  goto out_mempool;
 VAR_13 = FUNC_3(&VAR_11->msgpool_op_reply, VAR_3,
    VAR_6, VAR_4, 10,
    "osd_op_reply");
 if (VAR_13 < 0)
  goto out_msgpool;

 VAR_13 = -VAR_5;
 VAR_11->notify_wq = FUNC_6("ceph-watch-notify");
 if (!VAR_11->notify_wq)
  goto out_msgpool_reply;

 VAR_11->completion_wq = FUNC_6("ceph-completion");
 if (!VAR_11->completion_wq)
  goto out_notify_wq;

 FUNC_14(&VAR_11->timeout_work,
         VAR_11->client->options->osd_keepalive_timeout);
 FUNC_14(&VAR_11->osds_timeout_work,
     FUNC_13(VAR_11->client->options->osd_idle_ttl));

 return 0;

out_notify_wq:
 FUNC_7(VAR_11->notify_wq);
out_msgpool_reply:
 FUNC_2(&VAR_11->msgpool_op_reply);
out_msgpool:
 FUNC_2(&VAR_11->msgpool_op);
out_mempool:
 FUNC_11(VAR_11->req_mempool);
out_map:
 FUNC_5(VAR_11->osdmap);
out:
 return VAR_13;
}
