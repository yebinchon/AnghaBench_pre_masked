
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ protocol; } ;
struct TYPE_7__ {int input; } ;
struct rtable {int rt_is_input; TYPE_2__ dst; } ;
struct net_device {int dummy; } ;
struct in_device {int dev; } ;
struct fib_result {int type; int fi; } ;
struct fib_nh_exception {int fnhe_rth_input; } ;
struct TYPE_6__ {int ipv4; } ;
struct fib_nh_common {scalar_t__ nhc_gw_family; int nhc_rth_input; TYPE_1__ nhc_gw; struct net_device* nhc_dev; } ;
typedef int __be32 ;
struct TYPE_8__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fib_nh_common* FUNC_0 (struct fib_result const) ;
 int FUNC_1 (struct fib_result const) ;
 int FUNC_2 (struct in_device*,int ) ;
 scalar_t__ FUNC_3 (struct in_device*) ;
 scalar_t__ FUNC_4 (struct in_device*) ;
 scalar_t__ FUNC_5 (struct in_device*) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 struct in_device* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*,int ,int ,scalar_t__,int ,int ,struct in_device*,scalar_t__*) ;
 struct fib_nh_exception* FUNC_10 (struct fib_nh_common*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (struct in_device*,int ,int ) ;
 int VAR_8 ;
 int FUNC_13 (int ,struct in_device*,struct sk_buff*,int ,int ) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (char*) ;
 struct rtable* FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct rtable*) ;
 struct rtable* FUNC_18 (int ,int ,int ,int ,int ,int) ;
 int FUNC_19 (struct rtable*,int ,struct fib_result const*,struct fib_nh_exception*,int ,int ,scalar_t__,int) ;
 int FUNC_20 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_21 (struct sk_buff*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_9,
      const struct fib_result *VAR_10,
      struct in_device *VAR_11,
      __be32 VAR_12, __be32 VAR_13, u32 VAR_14)
{
 struct fib_nh_common *VAR_15 = FUNC_0(*VAR_10);
 struct net_device *VAR_16 = VAR_15->nhc_dev;
 struct fib_nh_exception *VAR_17;
 struct rtable *VAR_18;
 int VAR_19;
 struct in_device *VAR_20;
 bool VAR_21;
 u32 VAR_22 = 0;


 VAR_20 = FUNC_8(VAR_16);
 if (!VAR_20) {
  FUNC_15("Bug in ip_route_input_slow(). Please report.\n");
  return -VAR_1;
 }

 VAR_19 = FUNC_9(VAR_9, VAR_13, VAR_12, VAR_14, FUNC_1(*VAR_10),
      VAR_11->dev, VAR_11, &VAR_22);
 if (VAR_19 < 0) {
  FUNC_13(VAR_11->dev, VAR_11, VAR_9, VAR_12,
      VAR_13);

  goto cleanup;
 }

 VAR_21 = VAR_10->fi && !VAR_22;
 if (VAR_20 == VAR_11 && VAR_19 && FUNC_5(VAR_20) &&
     VAR_9->protocol == FUNC_11(VAR_3)) {
  __be32 VAR_23;

  VAR_23 = VAR_15->nhc_gw_family == VAR_0 ? VAR_15->nhc_gw.ipv4 : 0;
  if (FUNC_4(VAR_20) ||
      FUNC_12(VAR_20, VAR_13, VAR_23))
   FUNC_6(VAR_9)->flags |= VAR_4;
 }

 if (VAR_9->protocol != FUNC_11(VAR_3)) {







  if (VAR_20 == VAR_11 &&
      FUNC_3(VAR_11) == 0) {
   VAR_19 = -VAR_1;
   goto cleanup;
  }
 }

 VAR_17 = FUNC_10(VAR_15, VAR_12);
 if (VAR_21) {
  if (VAR_17)
   VAR_18 = FUNC_16(VAR_17->fnhe_rth_input);
  else
   VAR_18 = FUNC_16(VAR_15->nhc_rth_input);
  if (FUNC_17(VAR_18)) {
   FUNC_21(VAR_9, &VAR_18->dst);
   goto out;
  }
 }

 VAR_18 = FUNC_18(VAR_20->dev, 0, VAR_10->type,
      FUNC_2(VAR_11, VAR_5),
      FUNC_2(VAR_20, VAR_6), VAR_21);
 if (!VAR_18) {
  VAR_19 = -VAR_2;
  goto cleanup;
 }

 VAR_18->rt_is_input = 1;
 FUNC_7(VAR_7);

 VAR_18->dst.input = VAR_8;

 FUNC_19(VAR_18, VAR_12, VAR_10, VAR_17, VAR_10->fi, VAR_10->type, VAR_22,
         VAR_21);
 FUNC_14(&VAR_18->dst);
 FUNC_20(VAR_9, &VAR_18->dst);
out:
 VAR_19 = 0;
 cleanup:
 return VAR_19;
}
