
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_auth_client {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* should_authenticate ) (struct ceph_auth_client*) ;} ;


 int FUNC_0 (struct ceph_auth_client*,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ceph_auth_client*) ;

int FUNC_4(struct ceph_auth_client *VAR_0,
      void *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_0->mutex);
 if (VAR_0->ops->should_authenticate(VAR_0))
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->mutex);
 return VAR_3;
}
