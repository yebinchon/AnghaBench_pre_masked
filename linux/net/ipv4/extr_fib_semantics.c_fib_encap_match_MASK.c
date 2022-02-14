
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_state {int dummy; } ;
struct fib_nh {int fib_nh_lws; } ;
struct fib_config {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lwtunnel_state*) ;
 int FUNC_1 (scalar_t__,struct nlattr*,int ,struct fib_config const*,struct lwtunnel_state**,struct netlink_ext_ack*) ;
 int FUNC_2 (struct lwtunnel_state*,int ) ;

__attribute__((used)) static int FUNC_3(u16 VAR_2,
      struct nlattr *VAR_3,
      const struct fib_nh *VAR_4,
      const struct fib_config *VAR_5,
      struct netlink_ext_ack *VAR_6)
{
 struct lwtunnel_state *VAR_7;
 int VAR_8, VAR_9 = 0;

 if (VAR_2 == VAR_1)
  return 0;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_0,
       VAR_5, &VAR_7, VAR_6);
 if (!VAR_8) {
  VAR_9 = FUNC_2(VAR_7, VAR_4->fib_nh_lws);
  FUNC_0(VAR_7);
 }

 return VAR_9;
}
