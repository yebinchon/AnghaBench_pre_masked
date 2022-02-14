
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_object_locator {int * pool_ns; int pool; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (struct ceph_object_locator*) ;

void FUNC_2(struct ceph_object_locator *VAR_0,
      const struct ceph_object_locator *VAR_1)
{
 FUNC_1(VAR_0);

 VAR_0->pool = VAR_1->pool;
 if (VAR_1->pool_ns)
  VAR_0->pool_ns = FUNC_0(VAR_1->pool_ns);
 else
  VAR_0->pool_ns = ((void*)0);
}
