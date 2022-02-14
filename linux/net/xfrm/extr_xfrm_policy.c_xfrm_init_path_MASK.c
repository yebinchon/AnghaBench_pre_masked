
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int rt6i_nfheader_len; } ;
struct TYPE_6__ {TYPE_2__ rt6; } ;
struct xfrm_dst {TYPE_3__ u; int path_cookie; } ;
struct rt6_info {int dummy; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt6_info*) ;

__attribute__((used)) static void FUNC_1(struct xfrm_dst *VAR_1, struct dst_entry *VAR_2,
      int VAR_3)
{
 if (VAR_2->ops->family == VAR_0) {
  struct rt6_info *VAR_4 = (struct rt6_info *)VAR_2;
  VAR_1->path_cookie = FUNC_0(VAR_4);
  VAR_1->u.rt6.rt6i_nfheader_len = VAR_3;
 }
}
