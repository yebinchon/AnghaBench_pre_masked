
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_auth_client {int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* is_authenticated ) (struct ceph_auth_client*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_auth_client*) ;

int FUNC_3(struct ceph_auth_client *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(&VAR_0->mutex);
 if (VAR_0->ops)
  VAR_1 = VAR_0->ops->is_authenticated(VAR_0);
 FUNC_1(&VAR_0->mutex);
 return VAR_1;
}
