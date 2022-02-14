
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int seq; scalar_t__ ack; scalar_t__ syn; } ;
struct synproxy_options {int dummy; } ;
struct synproxy_net {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nf_synproxy_info {int dummy; } ;
struct nft_synproxy {struct nf_synproxy_info info; } ;
struct TYPE_2__ {void* code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct net {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct net* FUNC_1 (struct nft_pktinfo const*) ;
 int FUNC_2 (struct synproxy_options*,struct tcphdr const*,struct synproxy_net*,struct nf_synproxy_info*,struct nft_synproxy const*) ;
 int FUNC_3 (int ) ;
 struct synproxy_net* FUNC_4 (struct net*) ;
 scalar_t__ FUNC_5 (struct net*,struct sk_buff*,struct tcphdr const*,struct synproxy_options*,int ) ;
 int FUNC_6 (struct net*,struct sk_buff*,struct tcphdr const*,struct synproxy_options*) ;

__attribute__((used)) static void FUNC_7(const struct nft_synproxy *VAR_2,
     struct nft_regs *VAR_3,
     const struct nft_pktinfo *VAR_4,
     const struct tcphdr *VAR_5,
     struct tcphdr *VAR_6,
     struct synproxy_options *VAR_7)
{
 struct nf_synproxy_info VAR_8 = VAR_2->info;
 struct net *VAR_9 = FUNC_1(VAR_4);
 struct synproxy_net *VAR_10 = FUNC_4(VAR_9);
 struct sk_buff *VAR_11 = VAR_4->skb;

 if (VAR_5->syn) {

  FUNC_2(VAR_7, VAR_5, VAR_10, &VAR_8, VAR_2);
  FUNC_6(VAR_9, VAR_11, VAR_5, VAR_7);
  FUNC_0(VAR_11);
  VAR_3->verdict.code = VAR_1;
 } else if (VAR_5->ack) {

  if (FUNC_5(VAR_9, VAR_11, VAR_5, VAR_7,
          FUNC_3(VAR_5->seq))) {
   FUNC_0(VAR_11);
   VAR_3->verdict.code = VAR_1;
  } else {
   VAR_3->verdict.code = VAR_0;
  }
 }
}
