
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_object_locator {TYPE_1__* pool_ns; } ;
struct TYPE_2__ {int len; } ;



__attribute__((used)) static int FUNC_0(const struct ceph_object_locator *VAR_0)
{
 return 8 + 4 + 4 + 4 + (VAR_0->pool_ns ? VAR_0->pool_ns->len : 0);
}
