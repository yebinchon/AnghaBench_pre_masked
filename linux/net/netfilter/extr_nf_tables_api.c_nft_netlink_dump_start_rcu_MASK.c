
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_dump_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*,struct sk_buff*,struct nlmsghdr const*,struct netlink_dump_control*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_2, struct sk_buff *VAR_3,
          const struct nlmsghdr *VAR_4,
          struct netlink_dump_control *VAR_5)
{
 int VAR_6;

 if (!FUNC_4(VAR_1))
  return -VAR_0;

 FUNC_3();
 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2();
 FUNC_0(VAR_1);

 return VAR_6;
}
