
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dst_entry {int flags; TYPE_4__* xfrm; scalar_t__ dev; } ;
struct TYPE_7__ {struct dst_entry dst; } ;
struct xfrm_dst {scalar_t__ xfrm_genid; scalar_t__ num_pols; scalar_t__ policy_genid; scalar_t__ child_mtu_cached; scalar_t__ route_mtu_cached; TYPE_3__ u; struct dst_entry* route; int route_cookie; TYPE_2__** pols; int path_cookie; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_8__ {scalar_t__ genid; TYPE_1__ km; } ;
struct TYPE_6__ {int genid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dst_entry*,int ) ;
 int FUNC_2 (struct dst_entry*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct dst_entry*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 struct dst_entry* FUNC_6 (struct dst_entry*) ;
 struct dst_entry* FUNC_7 (struct dst_entry*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct xfrm_dst *VAR_4)
{
 struct xfrm_dst *VAR_5[VAR_2];
 struct dst_entry *VAR_6 = &VAR_4->u.dst;
 struct xfrm_dst *VAR_7;
 int VAR_8, VAR_9;
 u32 VAR_10;

 if (!FUNC_1(FUNC_7(VAR_6), ((struct xfrm_dst *)VAR_6)->path_cookie) ||
     (VAR_6->dev && !FUNC_5(VAR_6->dev)))
  return 0;

 if (VAR_6->flags & VAR_0)
  return 1;

 VAR_8 = VAR_9 = 0;
 do {
  struct xfrm_dst *VAR_11 = (struct xfrm_dst *)VAR_6;

  if (VAR_6->xfrm->km.state != VAR_3)
   return 0;
  if (VAR_11->xfrm_genid != VAR_6->xfrm->genid)
   return 0;
  if (VAR_11->num_pols > 0 &&
      VAR_11->policy_genid != FUNC_0(&VAR_11->pols[0]->genid))
   return 0;

  VAR_5[VAR_9++] = VAR_11;

  VAR_10 = FUNC_3(FUNC_6(VAR_6));
  if (VAR_11->child_mtu_cached != VAR_10) {
   VAR_8 = VAR_9;
   VAR_11->child_mtu_cached = VAR_10;
  }

  if (!FUNC_1(VAR_11->route, VAR_11->route_cookie))
   return 0;
  VAR_10 = FUNC_3(VAR_11->route);
  if (VAR_11->route_mtu_cached != VAR_10) {
   VAR_8 = VAR_9;
   VAR_11->route_mtu_cached = VAR_10;
  }

  VAR_6 = FUNC_6(VAR_6);
 } while (VAR_6->xfrm);

 if (FUNC_4(!VAR_8))
  return 1;

 VAR_7 = VAR_5[VAR_8 - 1];
 VAR_10 = VAR_7->child_mtu_cached;
 while (VAR_8--) {
  VAR_6 = &VAR_7->u.dst;

  VAR_10 = FUNC_8(VAR_6->xfrm, VAR_10);
  if (VAR_10 > VAR_7->route_mtu_cached)
   VAR_10 = VAR_7->route_mtu_cached;
  FUNC_2(VAR_6, VAR_1, VAR_10);
  if (!VAR_8)
   break;

  VAR_7 = VAR_5[VAR_8 - 1];
  VAR_7->child_mtu_cached = VAR_10;
 }

 return 1;
}
