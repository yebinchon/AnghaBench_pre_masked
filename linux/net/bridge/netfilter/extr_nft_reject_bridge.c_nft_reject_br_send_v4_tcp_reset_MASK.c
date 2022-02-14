
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int sysctl_ip_default_ttl; } ;
struct net {TYPE_1__ ipv4; } ;
struct iphdr {int tot_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,struct sk_buff*,int,int) ;
 int FUNC_2 (struct net_device const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iphdr*) ;
 struct tcphdr* FUNC_5 (struct sk_buff*,struct tcphdr*,int) ;
 int FUNC_6 (struct sk_buff*,struct sk_buff*,struct tcphdr const*) ;
 struct iphdr* FUNC_7 (struct sk_buff*,struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct net *VAR_3,
         struct sk_buff *VAR_4,
         const struct net_device *VAR_5,
         int VAR_6)
{
 struct sk_buff *VAR_7;
 struct iphdr *VAR_8;
 const struct tcphdr *VAR_9;
 struct tcphdr VAR_10;

 if (!FUNC_8(VAR_4))
  return;

 VAR_9 = FUNC_5(VAR_4, &VAR_10, VAR_6);
 if (!VAR_9)
  return;

 VAR_7 = FUNC_0(sizeof(struct iphdr) + sizeof(struct tcphdr) +
    VAR_2, VAR_0);
 if (!VAR_7)
  return;

 FUNC_10(VAR_7, VAR_2);
 VAR_8 = FUNC_7(VAR_7, VAR_4, VAR_1,
       VAR_3->ipv4.sysctl_ip_default_ttl);
 FUNC_6(VAR_7, VAR_4, VAR_9);
 VAR_8->tot_len = FUNC_3(VAR_7->len);
 FUNC_4(VAR_8);

 FUNC_9(VAR_4, VAR_7);

 FUNC_1(FUNC_2(VAR_5), VAR_7, 0, 1);
}
