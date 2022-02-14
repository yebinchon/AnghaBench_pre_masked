
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ceph_mon_generic_request {TYPE_2__* request; void* reply; } ;
struct TYPE_7__ {scalar_t__ session_mon_tid; int session_mon; scalar_t__ have_version; } ;
struct ceph_mon_command {void* str_len; int str; void* num_strs; int fsid; TYPE_3__ monhdr; } ;
struct ceph_mon_client {int client; int mutex; TYPE_4__* monmap; } ;
struct ceph_entity_addr {int nonce; int in_addr; } ;
struct TYPE_8__ {int fsid; } ;
struct TYPE_5__ {struct ceph_mon_command* iov_base; } ;
struct TYPE_6__ {TYPE_1__ front; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceph_mon_generic_request* FUNC_0 (struct ceph_mon_client*,int ) ;
 void* FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ceph_mon_generic_request*) ;
 int FUNC_9 (struct ceph_mon_generic_request*) ;
 int FUNC_10 (struct ceph_mon_client*,struct ceph_mon_generic_request*) ;
 int FUNC_11 (int ,char*,int *,int) ;
 int FUNC_12 (struct ceph_mon_generic_request*) ;

int FUNC_13(struct ceph_mon_client *VAR_4,
       struct ceph_entity_addr *VAR_5)
{
 struct ceph_mon_generic_request *VAR_6;
 struct ceph_mon_command *VAR_7;
 int VAR_8 = -VAR_2;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_6)
  goto out;

 VAR_6->request = FUNC_1(VAR_0, 256, VAR_3, 1);
 if (!VAR_6->request)
  goto out;

 VAR_6->reply = FUNC_1(VAR_1, 512, VAR_3,
      1);
 if (!VAR_6->reply)
  goto out;

 FUNC_6(&VAR_4->mutex);
 FUNC_9(VAR_6);
 VAR_7 = VAR_6->request->front.iov_base;
 VAR_7->monhdr.have_version = 0;
 VAR_7->monhdr.session_mon = FUNC_3(-1);
 VAR_7->monhdr.session_mon_tid = 0;
 VAR_7->fsid = VAR_4->monmap->fsid;
 VAR_7->num_strs = FUNC_4(1);
 VAR_9 = FUNC_11(VAR_7->str, "{ \"prefix\": \"osd blacklist\", 		                 \"blacklistop\": \"add\", 				 \"addr\": \"%pISpc/%u\" }",


        &VAR_5->in_addr, FUNC_5(VAR_5->nonce));
 VAR_7->str_len = FUNC_4(VAR_9);
 FUNC_10(VAR_4, VAR_6);
 FUNC_7(&VAR_4->mutex);

 VAR_8 = FUNC_12(VAR_6);
 if (!VAR_8)






  VAR_8 = FUNC_2(VAR_4->client, 0);

out:
 FUNC_8(VAR_6);
 return VAR_8;
}
