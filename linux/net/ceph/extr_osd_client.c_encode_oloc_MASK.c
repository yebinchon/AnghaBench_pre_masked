
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_object_locator {TYPE_1__* pool_ns; int pool; } ;
struct TYPE_2__ {int len; int str; } ;


 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,int ) ;
 int FUNC_2 (void**,void*,int ,int ) ;
 int FUNC_3 (struct ceph_object_locator const*) ;
 int FUNC_4 (void**,int,int,int ) ;

__attribute__((used)) static void FUNC_5(void **VAR_0, void *VAR_1,
   const struct ceph_object_locator *VAR_2)
{
 FUNC_4(VAR_0, 5, 4, FUNC_3(VAR_2));
 FUNC_1(VAR_0, VAR_2->pool);
 FUNC_0(VAR_0, -1);
 FUNC_0(VAR_0, 0);
 if (VAR_2->pool_ns)
  FUNC_2(VAR_0, VAR_1, VAR_2->pool_ns->str,
       VAR_2->pool_ns->len);
 else
  FUNC_0(VAR_0, 0);
}
