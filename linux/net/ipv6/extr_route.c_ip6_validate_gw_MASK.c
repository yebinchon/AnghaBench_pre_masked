
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int flags; } ;
struct net {int dummy; } ;
struct inet6_dev {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib6_config {int fc_flags; struct in6_addr fc_gateway; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct net*,struct fib6_config*,struct net_device**,struct inet6_dev**) ;
 int FUNC_2 (struct net*,struct fib6_config*,struct net_device const*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct in6_addr const*) ;
 scalar_t__ FUNC_4 (struct net*,struct in6_addr const*,struct net_device const*,int,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct net *VAR_6, struct fib6_config *VAR_7,
      struct net_device **VAR_8, struct inet6_dev **VAR_9,
      struct netlink_ext_ack *VAR_10)
{
 const struct in6_addr *VAR_11 = &VAR_7->fc_gateway;
 int VAR_12 = FUNC_3(VAR_11);
 bool VAR_13 = VAR_12 & VAR_2 ? 0 : 1;
 const struct net_device *VAR_14 = *VAR_8;
 bool VAR_15 = !VAR_14;
 int VAR_16 = -VAR_0;






 if (VAR_14 &&
     FUNC_4(VAR_6, VAR_11, VAR_14, VAR_13, 0, 0)) {
  FUNC_0(VAR_10, "Gateway can not be a local address");
  goto out;
 }

 if (VAR_12 != (VAR_2 | VAR_4)) {
  if (!(VAR_12 & (VAR_4 | VAR_3))) {
   FUNC_0(VAR_10, "Invalid gateway address");
   goto out;
  }

  FUNC_5();

  if (VAR_7->fc_flags & VAR_5)
   VAR_16 = FUNC_2(VAR_6, VAR_7, VAR_14, VAR_10);
  else
   VAR_16 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);

  FUNC_6();

  if (VAR_16)
   goto out;
 }


 VAR_14 = *VAR_8;

 VAR_16 = -VAR_0;
 if (!VAR_14) {
  FUNC_0(VAR_10, "Egress device not specified");
  goto out;
 } else if (VAR_14->flags & VAR_1) {
  FUNC_0(VAR_10,
          "Egress device can not be loopback device for this route");
  goto out;
 }




 if (VAR_15 &&
     FUNC_4(VAR_6, VAR_11, VAR_14, VAR_13, 0, 0)) {
  FUNC_0(VAR_10, "Gateway can not be a local address");
  goto out;
 }

 VAR_16 = 0;
out:
 return VAR_16;
}
