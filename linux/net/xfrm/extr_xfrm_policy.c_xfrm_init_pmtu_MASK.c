
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dst_entry {int xfrm; } ;
struct TYPE_2__ {struct dst_entry dst; } ;
struct xfrm_dst {scalar_t__ route_mtu_cached; int route; scalar_t__ child_mtu_cached; TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct dst_entry*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dst_entry*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xfrm_dst **VAR_1, int VAR_2)
{
 while (VAR_2--) {
  struct xfrm_dst *VAR_3 = VAR_1[VAR_2];
  u32 VAR_4, VAR_5;
  struct dst_entry *VAR_6;

  VAR_6 = &VAR_3->u.dst;
  VAR_4 = FUNC_1(FUNC_2(VAR_6));
  VAR_3->child_mtu_cached = VAR_4;

  VAR_4 = FUNC_3(VAR_6->xfrm, VAR_4);

  VAR_5 = FUNC_1(VAR_3->route);
  VAR_3->route_mtu_cached = VAR_5;

  if (VAR_4 > VAR_5)
   VAR_4 = VAR_5;

  FUNC_0(VAR_6, VAR_0, VAR_4);
 }
}
