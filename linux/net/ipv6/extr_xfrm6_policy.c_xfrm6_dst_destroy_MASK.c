
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rt6i_uncached_list; int rt6i_idev; } ;
struct TYPE_3__ {TYPE_2__ rt6; } ;
struct xfrm_dst {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct xfrm_dst*) ;

__attribute__((used)) static void FUNC_5(struct dst_entry *VAR_0)
{
 struct xfrm_dst *VAR_1 = (struct xfrm_dst *)VAR_0;

 if (FUNC_2(VAR_1->u.rt6.rt6i_idev))
  FUNC_1(VAR_1->u.rt6.rt6i_idev);
 FUNC_0(VAR_0);
 if (VAR_1->u.rt6.rt6i_uncached_list)
  FUNC_3(&VAR_1->u.rt6);
 FUNC_4(VAR_1);
}
