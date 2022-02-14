
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct xfrm_flo {int flags; struct dst_entry* dst_orig; } ;
struct dst_entry {int flags; struct net_device* dev; int output; int input; int lastuse; int obsolete; } ;
struct TYPE_4__ {struct dst_entry dst; } ;
struct xfrm_dst {struct dst_entry* path; struct dst_entry* route; TYPE_2__ u; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ sysctl_larval_drop; } ;
struct net {TYPE_1__ xfrm; } ;
struct flowi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfrm_dst* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xfrm_dst*) ;
 int VAR_4 ;
 int FUNC_2 (struct dst_entry*,struct dst_entry*) ;
 int VAR_5 ;
 int FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (struct dst_entry*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct xfrm_dst* FUNC_5 (struct net*,int ) ;
 int FUNC_6 (struct xfrm_dst*,struct dst_entry*) ;
 int FUNC_7 (struct xfrm_dst*,struct net_device*,struct flowi const*) ;
 int FUNC_8 (struct xfrm_dst*,struct dst_entry*,int ) ;

__attribute__((used)) static struct xfrm_dst *FUNC_9(struct net *VAR_8,
       struct xfrm_flo *VAR_9,
       const struct flowi *VAR_10,
       int VAR_11,
       u16 VAR_12)
{
 int VAR_13;
 struct net_device *VAR_14;
 struct dst_entry *VAR_15;
 struct dst_entry *VAR_16;
 struct xfrm_dst *VAR_17;

 VAR_17 = FUNC_5(VAR_8, VAR_12);
 if (FUNC_1(VAR_17))
  return VAR_17;

 if (!(VAR_9->flags & VAR_4) ||
     VAR_8->xfrm.sysctl_larval_drop ||
     VAR_11 <= 0)
  return VAR_17;

 VAR_15 = VAR_9->dst_orig;
 VAR_16 = &VAR_17->u.dst;
 FUNC_3(VAR_15);
 VAR_17->route = VAR_15;

 FUNC_2(VAR_16, VAR_15);

 VAR_16->obsolete = VAR_1;
 VAR_16->flags |= VAR_0 | VAR_2;
 VAR_16->lastuse = VAR_6;

 VAR_16->input = VAR_5;
 VAR_16->output = VAR_7;

 FUNC_3(VAR_15);
 FUNC_6(VAR_17, VAR_15);
 VAR_17->path = VAR_15;

 FUNC_8((struct xfrm_dst *)VAR_16, VAR_15, 0);

 VAR_13 = -VAR_3;
 VAR_14 = VAR_15->dev;
 if (!VAR_14)
  goto free_dst;

 VAR_13 = FUNC_7(VAR_17, VAR_14, VAR_10);
 if (VAR_13)
  goto free_dst;

out:
 return VAR_17;

free_dst:
 FUNC_4(VAR_16);
 VAR_17 = FUNC_0(VAR_13);
 goto out;
}
