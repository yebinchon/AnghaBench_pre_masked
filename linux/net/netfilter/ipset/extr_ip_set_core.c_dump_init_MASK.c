
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct nfgenmsg {int dummy; } ;
struct netlink_callback {unsigned long* args; int skb; } ;
struct ip_set_net {int dummy; } ;
struct ip_set {int dummy; } ;
typedef unsigned long ip_set_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct ip_set* FUNC_0 (struct ip_set_net*,int ,unsigned long*) ;
 int VAR_11 ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 unsigned long FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,scalar_t__,int ,int *) ;
 struct nlmsghdr* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct netlink_callback *VAR_12, struct ip_set_net *VAR_13)
{
 struct nlmsghdr *VAR_14 = FUNC_5(VAR_12->skb);
 int VAR_15 = FUNC_6(sizeof(struct nfgenmsg));
 struct nlattr *VAR_16[VAR_3 + 1];
 struct nlattr *VAR_17 = (void *)VAR_14 + VAR_15;
 u32 VAR_18;
 ip_set_id_t VAR_19;
 int VAR_20;

 VAR_20 = FUNC_4(VAR_16, VAR_3, VAR_17,
   VAR_14->nlmsg_len - VAR_15,
   VAR_11, ((void*)0));
 if (VAR_20)
  return VAR_20;

 VAR_12->args[VAR_10] = FUNC_3(VAR_16[VAR_5]);
 if (VAR_16[VAR_6]) {
  struct ip_set *VAR_21;

  VAR_21 = FUNC_0(VAR_13, FUNC_2(VAR_16[VAR_6]),
          &VAR_19);
  if (!VAR_21)
   return -VAR_2;

  VAR_18 = VAR_1;
  VAR_12->args[VAR_8] = VAR_19;
 } else {
  VAR_18 = VAR_0;
 }

 if (VAR_16[VAR_4]) {
  u32 VAR_22 = FUNC_1(VAR_16[VAR_4]);

  VAR_18 |= (VAR_22 << 16);
 }
 VAR_12->args[VAR_9] = (unsigned long)VAR_13;
 VAR_12->args[VAR_7] = VAR_18;

 return 0;
}
