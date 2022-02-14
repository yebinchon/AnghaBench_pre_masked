
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int doff; scalar_t__ fin; scalar_t__ syn; int seq; int ack_seq; scalar_t__ ack; int source; scalar_t__ rst; } ;
struct tcp_md5sig_key {int dummy; } ;
typedef struct sock {int sk_bound_dev_if; scalar_t__ sk_state; scalar_t__ sk_priority; } const sock ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {int flowlabel_reflect; } ;
struct TYPE_6__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;
struct ipv6hdr {int saddr; int daddr; } ;
struct ipv6_pinfo {scalar_t__ repflow; } ;
typedef int __u8 ;
typedef int __be32 ;
struct TYPE_8__ {scalar_t__ tw_priority; int tw_flowlabel; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct net* FUNC_1 (int ) ;
 struct sock const* FUNC_2 (struct net*,int *,int *,int ,int *,int ,int *,int ,int ,int ) ;
 TYPE_4__* FUNC_3 (struct sock const*) ;
 int FUNC_4 (struct ipv6hdr*) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int const*,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (struct sock const*) ;
 TYPE_3__* FUNC_13 (struct sk_buff*) ;
 struct net* FUNC_14 (struct sock const*) ;
 int VAR_2 ;
 struct tcphdr* FUNC_15 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_16 (struct sock const*) ;
 int * FUNC_17 (struct tcphdr const*) ;
 int FUNC_18 (struct sk_buff*) ;
 struct tcp_md5sig_key* FUNC_19 (struct sock const*,int *) ;
 int FUNC_20 (unsigned char*,struct tcp_md5sig_key*,int *,struct sk_buff*) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sock const*,struct sk_buff*,scalar_t__,scalar_t__,int ,int ,int ,int,struct tcp_md5sig_key*,int,int ,int ,scalar_t__) ;
 int FUNC_23 (struct sock const*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_24(const struct sock *VAR_3, struct sk_buff *VAR_4)
{
 const struct tcphdr *VAR_5 = FUNC_15(VAR_4);
 struct ipv6hdr *VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7 = 0, VAR_8 = 0;
 struct tcp_md5sig_key *VAR_9 = ((void*)0);






 __be32 VAR_10 = 0;
 u32 VAR_11 = 0;
 struct net *VAR_12;
 int VAR_13 = 0;

 if (VAR_5->rst)
  return;




 if (!VAR_3 && !FUNC_6(VAR_4))
  return;

 VAR_12 = VAR_3 ? FUNC_14(VAR_3) : FUNC_1(FUNC_13(VAR_4)->dev);
 if (VAR_5->ack)
  VAR_7 = FUNC_8(VAR_5->ack_seq);
 else
  VAR_8 = FUNC_8(VAR_5->seq) + VAR_5->syn + VAR_5->fin + VAR_4->len -
     (VAR_5->doff << 2);

 if (VAR_3) {
  VAR_13 = VAR_3->sk_bound_dev_if;
  if (FUNC_12(VAR_3)) {
   const struct ipv6_pinfo *VAR_14 = FUNC_16(VAR_3);

   FUNC_23(VAR_3, VAR_4);
   if (VAR_14->repflow)
    VAR_10 = FUNC_4(VAR_6);
   VAR_11 = VAR_3->sk_priority;
  }
  if (VAR_3->sk_state == VAR_1) {
   VAR_10 = FUNC_0(FUNC_3(VAR_3)->tw_flowlabel);
   VAR_11 = FUNC_3(VAR_3)->tw_priority;
  }
 } else {
  if (VAR_12->ipv6.sysctl.flowlabel_reflect & VAR_0)
   VAR_10 = FUNC_4(VAR_6);
 }

 FUNC_22(VAR_3, VAR_4, VAR_7, VAR_8, 0, 0, 0, VAR_13, VAR_9, 1, 0,
        VAR_10, VAR_11);





}
