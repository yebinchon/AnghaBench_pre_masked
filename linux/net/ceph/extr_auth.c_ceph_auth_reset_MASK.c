
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_auth_client {int negotiating; int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reset ) (struct ceph_auth_client*) ;} ;


 int FUNC_0 (char*,struct ceph_auth_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ceph_auth_client*) ;

void FUNC_4(struct ceph_auth_client *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0("auth_reset %p\n", VAR_0);
 if (VAR_0->ops && !VAR_0->negotiating)
  VAR_0->ops->reset(VAR_0);
 VAR_0->negotiating = 1;
 FUNC_2(&VAR_0->mutex);
}
