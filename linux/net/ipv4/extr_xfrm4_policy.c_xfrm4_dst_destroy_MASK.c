
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rt_uncached_list; } ;
struct TYPE_3__ {TYPE_2__ rt; } ;
struct xfrm_dst {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct xfrm_dst*) ;

__attribute__((used)) static void FUNC_3(struct dst_entry *VAR_0)
{
 struct xfrm_dst *VAR_1 = (struct xfrm_dst *)VAR_0;

 FUNC_0(VAR_0);
 if (VAR_1->u.rt.rt_uncached_list)
  FUNC_1(&VAR_1->u.rt);
 FUNC_2(VAR_1);
}
