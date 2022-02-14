
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_authorizer {int (* destroy ) (struct ceph_authorizer*) ;} ;


 int FUNC_0 (struct ceph_authorizer*) ;

void FUNC_1(struct ceph_authorizer *VAR_0)
{
 VAR_0->destroy(VAR_0);
}
