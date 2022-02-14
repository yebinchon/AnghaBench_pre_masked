
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_auth_client {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* invalidate_authorizer ) (struct ceph_auth_client*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_auth_client*,int) ;

void FUNC_3(struct ceph_auth_client *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->mutex);
 if (VAR_0->ops && VAR_0->ops->invalidate_authorizer)
  VAR_0->ops->invalidate_authorizer(VAR_0, VAR_1);
 FUNC_1(&VAR_0->mutex);
}
