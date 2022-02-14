
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int payload_len; } ;
struct TYPE_3__ {int hop_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,struct sk_buff*,int,int) ;
 int FUNC_2 (struct net_device const*) ;
 int FUNC_3 (scalar_t__) ;
 struct tcphdr* FUNC_4 (struct sk_buff*,struct tcphdr*,unsigned int*,int) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*,struct tcphdr const*,unsigned int) ;
 struct ipv6hdr* FUNC_6 (struct sk_buff*,struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct net *VAR_3,
         struct sk_buff *VAR_4,
         const struct net_device *VAR_5,
         int VAR_6)
{
 struct sk_buff *VAR_7;
 const struct tcphdr *VAR_8;
 struct tcphdr VAR_9;
 unsigned int VAR_10;
 struct ipv6hdr *VAR_11;

 if (!FUNC_7(VAR_4))
  return;

 VAR_8 = FUNC_4(VAR_4, &VAR_9, &VAR_10, VAR_6);
 if (!VAR_8)
  return;

 VAR_7 = FUNC_0(sizeof(struct ipv6hdr) + sizeof(struct tcphdr) +
    VAR_2, VAR_0);
 if (!VAR_7)
  return;

 FUNC_9(VAR_7, VAR_2);
 VAR_11 = FUNC_6(VAR_7, VAR_4, VAR_1,
         VAR_3->ipv6.devconf_all->hop_limit);
 FUNC_5(VAR_7, VAR_4, VAR_8, VAR_10);
 VAR_11->payload_len = FUNC_3(VAR_7->len - sizeof(struct ipv6hdr));

 FUNC_8(VAR_4, VAR_7);

 FUNC_1(FUNC_2(VAR_5), VAR_7, 0, 1);
}
