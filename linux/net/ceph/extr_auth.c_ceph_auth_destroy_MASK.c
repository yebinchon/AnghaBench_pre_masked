
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_auth_client {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* destroy ) (struct ceph_auth_client*) ;} ;


 int FUNC_0 (char*,struct ceph_auth_client*) ;
 int FUNC_1 (struct ceph_auth_client*) ;
 int FUNC_2 (struct ceph_auth_client*) ;

void FUNC_3(struct ceph_auth_client *VAR_0)
{
 FUNC_0("auth_destroy %p\n", VAR_0);
 if (VAR_0->ops)
  VAR_0->ops->destroy(VAR_0);
 FUNC_1(VAR_0);
}
