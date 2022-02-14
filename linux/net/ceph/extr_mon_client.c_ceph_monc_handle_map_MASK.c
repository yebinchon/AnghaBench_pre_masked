
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iov_len; void* iov_base; } ;
struct ceph_msg {TYPE_1__ front; } ;
struct ceph_monmap {int epoch; int fsid; } ;
struct ceph_mon_client {int mutex; struct ceph_monmap* monmap; struct ceph_client* client; } ;
struct TYPE_4__ {struct ceph_monmap* monmap; } ;
struct ceph_client {int have_fsid; int auth_wq; TYPE_2__ monc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_monmap*) ;
 scalar_t__ FUNC_1 (struct ceph_monmap*) ;
 int FUNC_2 (struct ceph_mon_client*,int ,int ) ;
 scalar_t__ FUNC_3 (struct ceph_client*,int *) ;
 struct ceph_monmap* FUNC_4 (void*,void*) ;
 int FUNC_5 (struct ceph_msg*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct ceph_monmap*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ceph_mon_client *VAR_1,
     struct ceph_msg *VAR_2)
{
 struct ceph_client *VAR_3 = VAR_1->client;
 struct ceph_monmap *VAR_4 = ((void*)0), *VAR_5 = VAR_1->monmap;
 void *VAR_6, *VAR_7;

 FUNC_8(&VAR_1->mutex);

 FUNC_6("handle_monmap\n");
 VAR_6 = VAR_2->front.iov_base;
 VAR_7 = VAR_6 + VAR_2->front.iov_len;

 VAR_4 = FUNC_4(VAR_6, VAR_7);
 if (FUNC_0(VAR_4)) {
  FUNC_10("problem decoding monmap, %d\n",
         (int)FUNC_1(VAR_4));
  FUNC_5(VAR_2);
  goto out;
 }

 if (FUNC_3(VAR_1->client, &VAR_4->fsid) < 0) {
  FUNC_7(VAR_4);
  goto out;
 }

 VAR_3->monc.monmap = VAR_4;
 FUNC_7(VAR_5);

 FUNC_2(VAR_1, VAR_0, VAR_1->monmap->epoch);
 VAR_3->have_fsid = 1;

out:
 FUNC_9(&VAR_1->mutex);
 FUNC_11(&VAR_3->auth_wq);
}
