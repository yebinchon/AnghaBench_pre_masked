
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct sock {int sk_bound_dev_if; int sk_write_queue; int sk_mark; int sk_sndbuf; int sk_protocol; } ;
struct sk_buff {int skb_iif; int ip_summed; int csum; int mark; } ;
struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_8__ {int transmit_time; } ;
struct ipcm_cookie {TYPE_2__* opt; TYPE_1__ sockc; int addr; } ;
struct ip_reply_arg {int bound_dev_if; scalar_t__ csumoffset; int csum; TYPE_3__* iov; int tos; int uid; } ;
struct TYPE_14__ {int faddr; scalar_t__ srr; scalar_t__ optlen; } ;
struct TYPE_9__ {TYPE_7__ opt; } ;
struct ip_options_data {TYPE_2__ opt; } ;
struct ip_options {int dummy; } ;
struct flowi4 {int flowi4_mark; } ;
typedef int __sum16 ;
typedef int __be32 ;
struct TYPE_13__ {int tos; } ;
struct TYPE_12__ {int protocol; } ;
struct TYPE_11__ {int dest; int source; } ;
struct TYPE_10__ {int iov_base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*,int ) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net*,TYPE_7__*,struct sk_buff*,struct ip_options const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct flowi4*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct flowi4*) ;
 TYPE_6__* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct flowi4*,int ,int ,unsigned int,int ,struct ipcm_cookie*,struct rtable**,int ) ;
 int FUNC_10 (struct sock*) ;
 TYPE_5__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sock*,struct flowi4*) ;
 int FUNC_13 (struct ip_reply_arg const*) ;
 int VAR_3 ;
 struct rtable* FUNC_14 (struct net*,struct flowi4*) ;
 int FUNC_15 (struct rtable*) ;
 int FUNC_16 (struct ipcm_cookie*) ;
 scalar_t__ FUNC_17 (struct net*,int) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_19 (int *) ;
 struct rtable* FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 struct net* FUNC_22 (struct sock*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_23 (struct sk_buff*) ;
 scalar_t__ FUNC_24 (int) ;

void FUNC_25(struct sock *VAR_5, struct sk_buff *VAR_6,
      const struct ip_options *VAR_7,
      __be32 VAR_8, __be32 VAR_9,
      const struct ip_reply_arg *VAR_10,
      unsigned int VAR_11, u64 VAR_12)
{
 struct ip_options_data VAR_13;
 struct ipcm_cookie VAR_14;
 struct flowi4 VAR_15;
 struct rtable *VAR_16 = FUNC_20(VAR_6);
 struct net *VAR_17 = FUNC_22(VAR_5);
 struct sk_buff *VAR_18;
 int VAR_19;
 int VAR_20;

 if (FUNC_3(VAR_17, &VAR_13.opt.opt, VAR_6, VAR_7))
  return;

 FUNC_16(&VAR_14);
 VAR_14.addr = VAR_8;
 VAR_14.sockc.transmit_time = VAR_12;

 if (VAR_13.opt.opt.optlen) {
  VAR_14.opt = &VAR_13.opt;

  if (VAR_13.opt.opt.srr)
   VAR_8 = VAR_13.opt.opt.faddr;
 }

 VAR_20 = VAR_10->bound_dev_if;
 if (!VAR_20 && FUNC_17(VAR_17, VAR_6->skb_iif))
  VAR_20 = VAR_6->skb_iif;

 FUNC_6(&VAR_15, VAR_20,
      FUNC_0(VAR_17, VAR_6->mark) ?: VAR_5->sk_mark,
      FUNC_2(VAR_10->tos),
      VAR_2, FUNC_11(VAR_6)->protocol,
      FUNC_13(VAR_10),
      VAR_8, VAR_9,
      FUNC_23(VAR_6)->source, FUNC_23(VAR_6)->dest,
      VAR_10->uid);
 FUNC_18(VAR_6, FUNC_7(&VAR_15));
 VAR_16 = FUNC_14(VAR_17, &VAR_15);
 if (FUNC_1(VAR_16))
  return;

 FUNC_8(VAR_5)->tos = VAR_10->tos;

 VAR_5->sk_protocol = FUNC_11(VAR_6)->protocol;
 VAR_5->sk_bound_dev_if = VAR_10->bound_dev_if;
 VAR_5->sk_sndbuf = VAR_4;
 VAR_5->sk_mark = VAR_15;
 VAR_19 = FUNC_9(VAR_5, &VAR_15, VAR_3, VAR_10->iov->iov_base,
        VAR_11, 0, &VAR_14, &VAR_16, VAR_1);
 if (FUNC_24(VAR_19)) {
  FUNC_10(VAR_5);
  goto out;
 }

 VAR_18 = FUNC_19(&VAR_5->sk_write_queue);
 if (VAR_18) {
  if (VAR_10->csumoffset >= 0)
   *((__sum16 *)FUNC_21(VAR_18) +
     VAR_10->csumoffset) = FUNC_5(FUNC_4(VAR_18->csum,
        VAR_10->csum));
  VAR_18->ip_summed = VAR_0;
  FUNC_12(VAR_5, &VAR_15);
 }
out:
 FUNC_15(VAR_16);
}
