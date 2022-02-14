
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct ip_set_net {scalar_t__ ip_set_max; } ;
struct ip_set {int dummy; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct ip_set* FUNC_0 (struct ip_set_net*,int ) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,scalar_t__) ;
 int FUNC_2 (struct ip_set*) ;
 struct ip_set_net* FUNC_3 (struct net*) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5,
   const struct nlmsghdr *VAR_6,
   const struct nlattr * const VAR_7[],
   struct netlink_ext_ack *VAR_8)
{
 struct ip_set_net *VAR_9 = FUNC_3(VAR_3);
 struct ip_set *VAR_10;
 ip_set_id_t VAR_11;

 if (FUNC_6(FUNC_5(VAR_7)))
  return -VAR_2;

 if (!VAR_7[VAR_1]) {
  for (VAR_11 = 0; VAR_11 < VAR_9->ip_set_max; VAR_11++) {
   VAR_10 = FUNC_1(VAR_9, VAR_11);
   if (VAR_10)
    FUNC_2(VAR_10);
  }
 } else {
  VAR_10 = FUNC_0(VAR_9, FUNC_4(VAR_7[VAR_1]));
  if (!VAR_10)
   return -VAR_0;

  FUNC_2(VAR_10);
 }

 return 0;
}
