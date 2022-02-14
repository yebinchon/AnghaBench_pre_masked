
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ceph_mon_subscribe_ack {int dummy; } ;
struct ceph_mon_client {int cur_mon; int had_a_connection; int hunt_mult; int * monmap; TYPE_2__* auth; void* m_subscribe_ack; void* m_subscribe; void* m_auth_reply; int fs_cluster_id; scalar_t__ last_tid; int generic_request_tree; int delayed_work; struct ceph_client* client; int con; void* m_auth; scalar_t__ pending_auth; int mutex; } ;
struct ceph_client {int msgr; TYPE_1__* options; } ;
struct TYPE_7__ {int want_keys; } ;
struct TYPE_6__ {int key; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_3 (struct ceph_mon_client*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,struct ceph_mon_client*,int *,int *) ;
 void* FUNC_7 (int ,int,int ,int) ;
 int FUNC_8 (void*) ;
 int VAR_12 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ceph_mon_client*,int ,int) ;
 int VAR_13 ;
 int FUNC_12 (int *) ;

int FUNC_13(struct ceph_mon_client *VAR_14, struct ceph_client *VAR_15)
{
 int VAR_16 = 0;

 FUNC_9("init\n");
 FUNC_11(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->client = VAR_15;
 VAR_14->monmap = ((void*)0);
 FUNC_12(&VAR_14->mutex);

 VAR_16 = FUNC_3(VAR_14);
 if (VAR_16)
  goto out;



 VAR_14->auth = FUNC_5(VAR_15->options->name,
        VAR_15->options->key);
 if (FUNC_1(VAR_14->auth)) {
  VAR_16 = FUNC_2(VAR_14->auth);
  goto out_monmap;
 }
 VAR_14->auth->want_keys =
  VAR_0 | VAR_2 |
  VAR_3 | VAR_1;


 VAR_16 = -VAR_9;
 VAR_14->m_subscribe_ack = FUNC_7(VAR_8,
         sizeof(struct ceph_mon_subscribe_ack),
         VAR_10, 1);
 if (!VAR_14->m_subscribe_ack)
  goto out_auth;

 VAR_14->m_subscribe = FUNC_7(VAR_7, 128,
      VAR_10, 1);
 if (!VAR_14->m_subscribe)
  goto out_subscribe_ack;

 VAR_14->m_auth_reply = FUNC_7(VAR_6, 4096,
       VAR_10, 1);
 if (!VAR_14->m_auth_reply)
  goto out_subscribe;

 VAR_14->m_auth = FUNC_7(VAR_5, 4096, VAR_10, 1);
 VAR_14->pending_auth = 0;
 if (!VAR_14->m_auth)
  goto out_auth_reply;

 FUNC_6(&VAR_14->con, VAR_14, &VAR_13,
        &VAR_14->client->msgr);

 VAR_14->cur_mon = -1;
 VAR_14->had_a_connection = 0;
 VAR_14->hunt_mult = 1;

 FUNC_0(&VAR_14->delayed_work, VAR_12);
 VAR_14->generic_request_tree = VAR_11;
 VAR_14->last_tid = 0;

 VAR_14->fs_cluster_id = VAR_4;

 return 0;

out_auth_reply:
 FUNC_8(VAR_14->m_auth_reply);
out_subscribe:
 FUNC_8(VAR_14->m_subscribe);
out_subscribe_ack:
 FUNC_8(VAR_14->m_subscribe_ack);
out_auth:
 FUNC_4(VAR_14->auth);
out_monmap:
 FUNC_10(VAR_14->monmap);
out:
 return VAR_16;
}
