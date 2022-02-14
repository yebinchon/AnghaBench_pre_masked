
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_authorizer {int dummy; } ;
struct ceph_auth_client {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* verify_authorizer_reply ) (struct ceph_auth_client*,struct ceph_authorizer*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_auth_client*,struct ceph_authorizer*) ;

int FUNC_3(struct ceph_auth_client *VAR_0,
          struct ceph_authorizer *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->mutex);
 if (VAR_0->ops && VAR_0->ops->verify_authorizer_reply)
  VAR_2 = VAR_0->ops->verify_authorizer_reply(VAR_0, VAR_1);
 FUNC_1(&VAR_0->mutex);
 return VAR_2;
}
