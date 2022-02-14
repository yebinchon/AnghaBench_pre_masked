
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_authorizer {int dummy; } ;
struct ceph_auth_client {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* add_authorizer_challenge ) (struct ceph_auth_client*,struct ceph_authorizer*,void*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_auth_client*,struct ceph_authorizer*,void*,int) ;

int FUNC_3(struct ceph_auth_client *VAR_0,
           struct ceph_authorizer *VAR_1,
           void *VAR_2,
           int VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_0->mutex);
 if (VAR_0->ops && VAR_0->ops->add_authorizer_challenge)
  VAR_4 = VAR_0->ops->add_authorizer_challenge(VAR_0, VAR_1, VAR_2,
       VAR_3);
 FUNC_1(&VAR_0->mutex);
 return VAR_4;
}
