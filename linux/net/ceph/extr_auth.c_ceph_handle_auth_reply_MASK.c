
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct ceph_auth_client {void* global_id; int negotiating; int protocol; int mutex; TYPE_1__* ops; } ;
typedef int s32 ;
struct TYPE_2__ {int (* handle_reply ) (struct ceph_auth_client*,int,void*,void*) ;int name; int (* destroy ) (struct ceph_auth_client*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_auth_client*,int) ;
 int FUNC_1 (struct ceph_auth_client*,void*,size_t) ;
 void* FUNC_2 (void**) ;
 void* FUNC_3 (void**) ;
 int FUNC_4 (void**,void*,int,int ) ;
 int FUNC_5 (char*,void*,void*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct ceph_auth_client*) ;
 int FUNC_10 (struct ceph_auth_client*,int,void*,void*) ;

int FUNC_11(struct ceph_auth_client *VAR_3,
      void *VAR_4, size_t VAR_5,
      void *VAR_6, size_t VAR_7)
{
 void *VAR_8 = VAR_4;
 void *VAR_9 = VAR_4 + VAR_5;
 int VAR_10;
 s32 VAR_11;
 u64 VAR_12;
 void *VAR_13, *VAR_14;
 int VAR_15;
 char *VAR_16;
 int VAR_17;
 int VAR_18 = -VAR_1;

 FUNC_6(&VAR_3->mutex);
 FUNC_5("handle_auth_reply %p %p\n", VAR_8, VAR_9);
 FUNC_4(&VAR_8, VAR_9, sizeof(u32) * 3 + sizeof(u64), VAR_2);
 VAR_10 = FUNC_2(&VAR_8);
 VAR_11 = FUNC_2(&VAR_8);
 VAR_12 = FUNC_3(&VAR_8);
 VAR_15 = FUNC_2(&VAR_8);
 VAR_13 = VAR_8;
 VAR_8 += VAR_15;
 FUNC_4(&VAR_8, VAR_9, sizeof(u32), VAR_2);
 VAR_17 = FUNC_2(&VAR_8);
 VAR_16 = VAR_8;
 VAR_8 += VAR_17;
 if (VAR_8 != VAR_9)
  goto bad;

 FUNC_5(" result %d '%.*s' gid %llu len %d\n", VAR_11, VAR_17,
      VAR_16, VAR_12, VAR_15);

 VAR_14 = VAR_13 + VAR_15;

 if (VAR_12 && VAR_3->global_id != VAR_12) {
  FUNC_5(" set global_id %lld -> %lld\n", VAR_3->global_id, VAR_12);
  VAR_3->global_id = VAR_12;
 }

 if (VAR_3->negotiating) {

  if (!VAR_10 && VAR_11 < 0) {
   VAR_18 = VAR_11;
   goto out;
  }

  if (VAR_3->protocol && VAR_3->protocol != VAR_10) {
   VAR_3->ops->destroy(VAR_3);
   VAR_3->protocol = 0;
   VAR_3->ops = ((void*)0);
  }
  if (VAR_3->protocol != VAR_10) {
   VAR_18 = FUNC_0(VAR_3, VAR_10);
   if (VAR_18) {
    FUNC_8("error %d on auth protocol %d init\n",
           VAR_18, VAR_10);
    goto out;
   }
  }

  VAR_3->negotiating = 0;
 }

 VAR_18 = VAR_3->ops->handle_reply(VAR_3, VAR_11, VAR_13, VAR_14);
 if (VAR_18 == -VAR_0) {
  VAR_18 = FUNC_1(VAR_3, VAR_6, VAR_7);
 } else if (VAR_18) {
  FUNC_8("auth method '%s' error %d\n", VAR_3->ops->name, VAR_18);
 }

out:
 FUNC_7(&VAR_3->mutex);
 return VAR_18;

bad:
 FUNC_8("failed to decode auth msg\n");
 VAR_18 = -VAR_1;
 goto out;
}
