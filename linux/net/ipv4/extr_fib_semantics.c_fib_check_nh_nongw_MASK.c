
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct in_device {TYPE_1__* dev; } ;
struct fib_nh {int fib_nh_flags; TYPE_1__* fib_nh_dev; int fib_nh_scope; int fib_nh_oif; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 struct in_device* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net *VAR_8, struct fib_nh *VAR_9,
         struct netlink_ext_ack *VAR_10)
{
 struct in_device *VAR_11;
 int VAR_12;

 if (VAR_9->fib_nh_flags & (VAR_6 | VAR_5)) {
  FUNC_0(VAR_10,
          "Invalid flags for nexthop - PERVASIVE and ONLINK can not be set");
  return -VAR_0;
 }

 FUNC_4();

 VAR_12 = -VAR_2;
 VAR_11 = FUNC_2(VAR_8, VAR_9->fib_nh_oif);
 if (!VAR_11)
  goto out;
 VAR_12 = -VAR_1;
 if (!(VAR_11->dev->flags & VAR_3)) {
  FUNC_0(VAR_10, "Device for nexthop is not up");
  goto out;
 }

 VAR_9->fib_nh_dev = VAR_11->dev;
 FUNC_1(VAR_9->fib_nh_dev);
 VAR_9->fib_nh_scope = VAR_7;
 if (!FUNC_3(VAR_9->fib_nh_dev))
  VAR_9->fib_nh_flags |= VAR_4;
 VAR_12 = 0;
out:
 FUNC_5();
 return VAR_12;
}
