
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ceph_mon_generic_request {int tid; TYPE_2__* request; int private_data; int complete_cb; void* reply; } ;
struct ceph_mon_client {int mutex; } ;
typedef int ceph_monc_callback_t ;
struct TYPE_3__ {void* iov_base; } ;
struct TYPE_4__ {int front_alloc_len; TYPE_1__ front; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ceph_mon_generic_request* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct ceph_mon_generic_request* FUNC_2 (struct ceph_mon_client*,int ) ;
 int FUNC_3 (void**,int ) ;
 int FUNC_4 (void**,void* const,char const*,int) ;
 void* FUNC_5 (int ,int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ceph_mon_generic_request*) ;
 int FUNC_9 (struct ceph_mon_generic_request*) ;
 int FUNC_10 (struct ceph_mon_client*,struct ceph_mon_generic_request*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static struct ceph_mon_generic_request *
FUNC_12(struct ceph_mon_client *VAR_4, const char *VAR_5,
   ceph_monc_callback_t VAR_6, u64 VAR_7)
{
 struct ceph_mon_generic_request *VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_8)
  goto err_put_req;

 VAR_8->request = FUNC_5(VAR_0,
        sizeof(u64) + sizeof(u32) + FUNC_11(VAR_5),
        VAR_3, 1);
 if (!VAR_8->request)
  goto err_put_req;

 VAR_8->reply = FUNC_5(VAR_1, 32, VAR_3,
      1);
 if (!VAR_8->reply)
  goto err_put_req;

 VAR_8->complete_cb = VAR_6;
 VAR_8->private_data = VAR_7;

 FUNC_6(&VAR_4->mutex);
 FUNC_9(VAR_8);
 {
  void *VAR_9 = VAR_8->request->front.iov_base;
  void *const VAR_10 = VAR_9 + VAR_8->request->front_alloc_len;

  FUNC_3(&VAR_9, VAR_8->tid);
  FUNC_4(&VAR_9, VAR_10, VAR_5, FUNC_11(VAR_5));
  FUNC_1(VAR_9 != VAR_10);
 }
 FUNC_10(VAR_4, VAR_8);
 FUNC_7(&VAR_4->mutex);

 return VAR_8;

err_put_req:
 FUNC_8(VAR_8);
 return FUNC_0(-VAR_2);
}
