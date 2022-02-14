
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int iov_len; int iov_base; } ;
struct ceph_msg {TYPE_1__ front; } ;
struct TYPE_17__ {int peer_addr; } ;
struct ceph_mon_client {TYPE_8__* client; int mutex; TYPE_7__ con; int cur_mon; TYPE_9__* auth; TYPE_3__* m_auth; scalar_t__ pending_auth; } ;
struct TYPE_19__ {int global_id; } ;
struct TYPE_14__ {int num; int type; } ;
struct TYPE_15__ {TYPE_4__ name; } ;
struct TYPE_16__ {TYPE_5__ inst; } ;
struct TYPE_18__ {int auth_err; int auth_wq; TYPE_6__ msgr; } ;
struct TYPE_12__ {int iov_base; } ;
struct TYPE_13__ {int front_alloc_len; TYPE_2__ front; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_mon_client*) ;
 int FUNC_1 (struct ceph_mon_client*,int) ;
 int FUNC_2 (struct ceph_mon_client*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct ceph_mon_client*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ceph_mon_client *VAR_1,
         struct ceph_msg *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 FUNC_9(&VAR_1->mutex);
 VAR_4 = FUNC_3(VAR_1->auth);
 VAR_1->pending_auth = 0;
 VAR_3 = FUNC_4(VAR_1->auth, VAR_2->front.iov_base,
         VAR_2->front.iov_len,
         VAR_1->m_auth->front.iov_base,
         VAR_1->m_auth->front_alloc_len);
 if (VAR_3 > 0) {
  FUNC_1(VAR_1, VAR_3);
  goto out;
 }

 FUNC_8(VAR_1);

 if (VAR_3 < 0) {
  VAR_1->client->auth_err = VAR_3;
 } else if (!VAR_4 && FUNC_3(VAR_1->auth)) {
  FUNC_7("authenticated, starting session\n");

  VAR_1->client->msgr.inst.name.type = VAR_0;
  VAR_1->client->msgr.inst.name.num =
     FUNC_6(VAR_1->auth->global_id);

  FUNC_2(VAR_1);
  FUNC_0(VAR_1);

  FUNC_11("mon%d %s session established\n", VAR_1->cur_mon,
   FUNC_5(&VAR_1->con.peer_addr));
 }

out:
 FUNC_10(&VAR_1->mutex);
 if (VAR_1->client->auth_err < 0)
  FUNC_12(&VAR_1->client->auth_wq);
}
