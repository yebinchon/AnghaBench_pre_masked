
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct nduseroptmsg {int nduseropt_opts_len; int nduseropt_icmp_code; int nduseropt_icmp_type; int nduseropt_ifindex; int nduseropt_family; } ;
struct nd_opt_hdr {int nd_opt_len; } ;
struct in6_addr {int dummy; } ;
struct icmp6hdr {int icmp6_code; int icmp6_type; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct net* FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nduseroptmsg*,struct nd_opt_hdr*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int *) ;
 int FUNC_5 (int) ;
 struct nduseroptmsg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (size_t,int ) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_11 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_12 (struct net*,int ,int) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_14(struct sk_buff *VAR_7, struct nd_opt_hdr *VAR_8)
{
 struct icmp6hdr *VAR_9 = (struct icmp6hdr *)FUNC_13(VAR_7);
 struct sk_buff *VAR_10;
 struct nlmsghdr *VAR_11;
 struct nduseroptmsg *VAR_12;
 struct net *VAR_13 = FUNC_1(VAR_7->dev);
 int VAR_14;
 int VAR_15 = FUNC_0(sizeof(struct nduseroptmsg)
        + (VAR_8->nd_opt_len << 3));
 size_t VAR_16 = VAR_15 + FUNC_5(sizeof(struct in6_addr));

 VAR_10 = FUNC_9(VAR_16, VAR_3);
 if (!VAR_10) {
  VAR_14 = -VAR_2;
  goto errout;
 }

 VAR_11 = FUNC_10(VAR_10, 0, 0, VAR_5, VAR_15, 0);
 if (!VAR_11) {
  goto nla_put_failure;
 }

 VAR_12 = FUNC_6(VAR_11);
 VAR_12->nduseropt_family = VAR_0;
 VAR_12->nduseropt_ifindex = VAR_7->dev->ifindex;
 VAR_12->nduseropt_icmp_type = VAR_9->icmp6_type;
 VAR_12->nduseropt_icmp_code = VAR_9->icmp6_code;
 VAR_12->nduseropt_opts_len = VAR_8->nd_opt_len << 3;

 FUNC_3(VAR_12 + 1, VAR_8, VAR_8->nd_opt_len << 3);

 if (FUNC_4(VAR_10, VAR_4, &FUNC_2(VAR_7)->saddr))
  goto nla_put_failure;
 FUNC_7(VAR_10, VAR_11);

 FUNC_11(VAR_10, VAR_13, 0, VAR_6, ((void*)0), VAR_3);
 return;

nla_put_failure:
 FUNC_8(VAR_10);
 VAR_14 = -VAR_1;
errout:
 FUNC_12(VAR_13, VAR_6, VAR_14);
}
