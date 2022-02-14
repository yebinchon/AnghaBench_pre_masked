
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;
struct flowi4 {scalar_t__ flowi4_scope; int flowi4_iif; int flowi4_oif; int daddr; } ;
struct fib_table {int dummy; } ;
struct fib_result {unsigned int type; scalar_t__ scope; } ;
struct fib_nh {int fib_nh_flags; struct net_device* fib_nh_dev; int fib_nh_oif; scalar_t__ fib_nh_scope; int fib_nh_gw4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (struct fib_result) ;
 int FUNC_1 (struct fib_result) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct net_device* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct net_device*) ;
 struct fib_table* FUNC_5 (struct net*,scalar_t__) ;
 int FUNC_6 (struct net*,struct flowi4*,struct fib_result*,int) ;
 int FUNC_7 (struct fib_table*,struct flowi4*,struct fib_result*,int) ;
 unsigned int FUNC_8 (struct net*,struct net_device*,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct net *VAR_12, struct fib_nh *VAR_13, u32 VAR_14,
         u8 VAR_15, struct netlink_ext_ack *VAR_16)
{
 struct net_device *VAR_17;
 struct fib_result VAR_18;
 int VAR_19 = 0;

 if (VAR_13->fib_nh_flags & VAR_8) {
  unsigned int VAR_20;

  if (VAR_15 >= VAR_11) {
   FUNC_2(VAR_16, "Nexthop has invalid scope");
   return -VAR_0;
  }
  VAR_17 = FUNC_3(VAR_12, VAR_13->fib_nh_oif);
  if (!VAR_17) {
   FUNC_2(VAR_16, "Nexthop device required for onlink");
   return -VAR_2;
  }
  if (!(VAR_17->flags & VAR_5)) {
   FUNC_2(VAR_16, "Nexthop device is not up");
   return -VAR_1;
  }
  VAR_20 = FUNC_8(VAR_12, VAR_17, VAR_13->fib_nh_gw4);
  if (VAR_20 != VAR_10) {
   FUNC_2(VAR_16, "Nexthop has invalid gateway");
   return -VAR_0;
  }
  if (!FUNC_9(VAR_17))
   VAR_13->fib_nh_flags |= VAR_7;
  VAR_13->fib_nh_dev = VAR_17;
  FUNC_4(VAR_17);
  VAR_13->fib_nh_scope = VAR_11;
  return 0;
 }
 FUNC_10();
 {
  struct fib_table *VAR_21 = ((void*)0);
  struct flowi4 VAR_22 = {
   .daddr = VAR_13->fib_nh_gw4,
   .flowi4_scope = VAR_15 + 1,
   .flowi4_oif = VAR_13->fib_nh_oif,
   .flowi4_iif = VAR_6,
  };


  if (VAR_22 < VAR_11)
   VAR_22 = VAR_11;

  if (VAR_14)
   VAR_21 = FUNC_5(VAR_12, VAR_14);

  if (VAR_21)
   VAR_19 = FUNC_7(VAR_21, &VAR_22, &VAR_18,
            VAR_3 |
            VAR_4);





  if (!VAR_21 || VAR_19) {
   VAR_19 = FUNC_6(VAR_12, &VAR_22, &VAR_18,
      VAR_3);
  }

  if (VAR_19) {
   FUNC_2(VAR_16, "Nexthop has invalid gateway");
   goto out;
  }
 }

 VAR_19 = -VAR_0;
 if (VAR_18.type != VAR_10 && VAR_18.type != VAR_9) {
  FUNC_2(VAR_16, "Nexthop has invalid gateway");
  goto out;
 }
 VAR_13->fib_nh_scope = VAR_18.scope;
 VAR_13->fib_nh_oif = FUNC_1(VAR_18);
 VAR_13->fib_nh_dev = VAR_17 = FUNC_0(VAR_18);
 if (!VAR_17) {
  FUNC_2(VAR_16,
          "No egress device for nexthop gateway");
  goto out;
 }
 FUNC_4(VAR_17);
 if (!FUNC_9(VAR_17))
  VAR_13->fib_nh_flags |= VAR_7;
 VAR_19 = (VAR_17->flags & VAR_5) ? 0 : -VAR_1;
out:
 FUNC_11();
 return VAR_19;
}
