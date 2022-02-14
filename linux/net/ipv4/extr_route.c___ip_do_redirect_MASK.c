
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; struct net_device* dev; } ;
struct TYPE_6__ {int obsolete; int dev; } ;
struct rtable {scalar_t__ rt_gw_family; scalar_t__ rt_gw4; TYPE_2__ dst; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct neighbour {int nud_state; } ;
struct iphdr {scalar_t__ daddr; scalar_t__ saddr; } ;
struct in_device {int dummy; } ;
struct flowi4 {int daddr; } ;
struct fib_result {int dummy; } ;
struct fib_nh_common {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_5__ {scalar_t__ gateway; } ;
struct TYPE_8__ {int code; TYPE_1__ un; } ;
struct TYPE_7__ {scalar_t__ saddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct fib_nh_common* FUNC_0 (struct fib_result) ;




 scalar_t__ FUNC_1 (struct in_device*) ;
 int FUNC_2 (struct in_device*) ;
 scalar_t__ FUNC_3 (struct in_device*) ;
 int FUNC_4 (struct in_device*) ;
 int FUNC_5 (struct neighbour*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct in_device* FUNC_6 (struct net_device*) ;
 struct neighbour* FUNC_7 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_8 (int ,struct neighbour*) ;
 struct net* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net*,struct flowi4*,struct fib_result*,int ) ;
 TYPE_4__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct in_device*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,struct net_device*) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 struct neighbour* FUNC_19 (int *,scalar_t__*,int ) ;
 int FUNC_20 (struct neighbour*,int *) ;
 int FUNC_21 (struct neighbour*) ;
 int FUNC_22 (char*,scalar_t__*,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_23 (struct fib_nh_common*,int ,scalar_t__,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_24(struct rtable *VAR_8, struct sk_buff *VAR_9, struct flowi4 *VAR_10,
        bool VAR_11)
{
 __be32 VAR_12 = FUNC_11(VAR_9)->un.gateway;
 __be32 VAR_13 = FUNC_15(VAR_9)->saddr;
 struct net_device *VAR_14 = VAR_9->dev;
 struct in_device *VAR_15;
 struct fib_result VAR_16;
 struct neighbour *VAR_17;
 struct net *VAR_18;

 switch (FUNC_11(VAR_9)->code & 7) {
 case 129:
 case 128:
 case 131:
 case 130:
  break;

 default:
  return;
 }

 if (VAR_8->rt_gw_family != VAR_0 || VAR_8->rt_gw4 != VAR_13)
  return;

 VAR_15 = FUNC_6(VAR_14);
 if (!VAR_15)
  return;

 VAR_18 = FUNC_9(VAR_14);
 if (VAR_12 == VAR_13 || !FUNC_2(VAR_15) ||
     FUNC_17(VAR_12) || FUNC_16(VAR_12) ||
     FUNC_18(VAR_12))
  goto reject_redirect;

 if (!FUNC_4(VAR_15)) {
  if (!FUNC_12(VAR_15, VAR_12, VAR_13))
   goto reject_redirect;
  if (FUNC_3(VAR_15) && FUNC_14(VAR_12, VAR_14))
   goto reject_redirect;
 } else {
  if (FUNC_13(VAR_18, VAR_12) != VAR_4)
   goto reject_redirect;
 }

 VAR_17 = FUNC_7(VAR_8->dst.dev, VAR_12);
 if (!VAR_17)
  VAR_17 = FUNC_19(&VAR_5, &VAR_12, VAR_8->dst.dev);
 if (!FUNC_5(VAR_17)) {
  if (!(VAR_17->nud_state & VAR_3)) {
   FUNC_20(VAR_17, ((void*)0));
  } else {
   if (FUNC_10(VAR_18, VAR_10, &VAR_16, 0) == 0) {
    struct fib_nh_common *VAR_19 = FUNC_0(VAR_16);

    FUNC_23(VAR_19, VAR_10->daddr, VAR_12,
      0, 0,
      VAR_7 + VAR_6);
   }
   if (VAR_11)
    VAR_8->dst.obsolete = VAR_1;
   FUNC_8(VAR_2, VAR_17);
  }
  FUNC_21(VAR_17);
 }
 return;

reject_redirect:
 ;
}
