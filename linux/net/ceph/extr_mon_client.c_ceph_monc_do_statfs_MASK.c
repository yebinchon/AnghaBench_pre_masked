
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ceph_statfs {int dummy; } ;
struct TYPE_11__ {scalar_t__ session_mon_tid; void* session_mon; scalar_t__ have_version; } ;
struct ceph_mon_statfs {int contains_data_pool; int data_pool; int fsid; TYPE_5__ monhdr; } ;
struct TYPE_7__ {struct ceph_statfs* st; } ;
struct ceph_mon_generic_request {TYPE_4__* request; TYPE_1__ u; void* reply; } ;
struct ceph_mon_client {int mutex; TYPE_6__* monmap; } ;
struct TYPE_12__ {int fsid; } ;
struct TYPE_9__ {struct ceph_mon_statfs* iov_base; } ;
struct TYPE_8__ {void* version; } ;
struct TYPE_10__ {TYPE_3__ front; TYPE_2__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ceph_mon_generic_request* FUNC_0 (struct ceph_mon_client*,int ) ;
 void* FUNC_1 (int ,int,int ,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ceph_mon_generic_request*) ;
 int FUNC_7 (struct ceph_mon_generic_request*) ;
 int FUNC_8 (struct ceph_mon_client*,struct ceph_mon_generic_request*) ;
 int FUNC_9 (struct ceph_mon_generic_request*) ;

int FUNC_10(struct ceph_mon_client *VAR_5, u64 VAR_6,
   struct ceph_statfs *VAR_7)
{
 struct ceph_mon_generic_request *VAR_8;
 struct ceph_mon_statfs *VAR_9;
 int VAR_10 = -VAR_3;

 VAR_8 = FUNC_0(VAR_5, VAR_4);
 if (!VAR_8)
  goto out;

 VAR_8->request = FUNC_1(VAR_0, sizeof(*VAR_9), VAR_4,
        1);
 if (!VAR_8->request)
  goto out;

 VAR_8->reply = FUNC_1(VAR_1, 64, VAR_4, 1);
 if (!VAR_8->reply)
  goto out;

 VAR_8->u.st = VAR_7;
 VAR_8->request->hdr.version = FUNC_2(2);

 FUNC_4(&VAR_5->mutex);
 FUNC_7(VAR_8);

 VAR_9 = VAR_8->request->front.iov_base;
 VAR_9->monhdr.have_version = 0;
 VAR_9->monhdr.session_mon = FUNC_2(-1);
 VAR_9->monhdr.session_mon_tid = 0;
 VAR_9->fsid = VAR_5->monmap->fsid;
 VAR_9->contains_data_pool = (VAR_6 != VAR_2);
 VAR_9->data_pool = FUNC_3(VAR_6);
 FUNC_8(VAR_5, VAR_8);
 FUNC_5(&VAR_5->mutex);

 VAR_10 = FUNC_9(VAR_8);
out:
 FUNC_6(VAR_8);
 return VAR_10;
}
