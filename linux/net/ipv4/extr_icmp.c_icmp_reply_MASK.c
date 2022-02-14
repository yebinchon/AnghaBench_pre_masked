
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


typedef void* u32 ;
struct sock {void* sk_mark; } ;
struct sk_buff {int dev; int mark; } ;
struct TYPE_8__ {int dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net {int dummy; } ;
struct ipcm_cookie {TYPE_4__* opt; void* addr; } ;
struct inet_sock {int tos; } ;
struct TYPE_13__ {void* faddr; scalar_t__ srr; scalar_t__ optlen; } ;
struct TYPE_11__ {TYPE_6__ opt; } ;
struct TYPE_12__ {TYPE_4__ opt; } ;
struct TYPE_9__ {int type; int code; scalar_t__ checksum; } ;
struct TYPE_10__ {TYPE_2__ icmph; } ;
struct icmp_bxm {TYPE_5__ replyopts; TYPE_3__ data; } ;
struct flowi4 {int flowi4_oif; int flowi4_proto; int flowi4_tos; int flowi4_uid; void* flowi4_mark; void* saddr; void* daddr; } ;
typedef int fl4 ;
typedef void* __be32 ;
struct TYPE_14__ {int tos; void* saddr; } ;


 void* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (int ) ;
 struct net* FUNC_3 (int ) ;
 void* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct flowi4*) ;
 int FUNC_6 (struct icmp_bxm*,struct flowi4*,struct ipcm_cookie*,struct rtable**) ;
 struct sock* FUNC_7 (struct net*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct net*,int,int) ;
 scalar_t__ FUNC_10 (struct net*,struct rtable*,struct flowi4*,int,int) ;
 struct inet_sock* FUNC_11 (struct sock*) ;
 TYPE_7__* FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct net*,TYPE_6__*,struct sk_buff*) ;
 struct rtable* FUNC_14 (struct net*,struct flowi4*) ;
 int FUNC_15 (struct rtable*) ;
 int FUNC_16 (struct ipcm_cookie*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (struct flowi4*,int ,int) ;
 int FUNC_21 (struct sk_buff*,int ) ;
 struct rtable* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct net*,int *) ;

__attribute__((used)) static void FUNC_24(struct icmp_bxm *VAR_1, struct sk_buff *VAR_2)
{
 struct ipcm_cookie VAR_3;
 struct rtable *VAR_4 = FUNC_22(VAR_2);
 struct net *VAR_5 = FUNC_3(VAR_4->dst.dev);
 struct flowi4 VAR_6;
 struct sock *VAR_7;
 struct inet_sock *VAR_8;
 __be32 VAR_9, VAR_10;
 u32 VAR_11 = FUNC_0(VAR_5, VAR_2->mark);
 int VAR_12 = VAR_1->data.icmph.type;
 int VAR_13 = VAR_1->data.icmph.code;

 if (FUNC_13(VAR_5, &VAR_1->replyopts.opt.opt, VAR_2))
  return;


 FUNC_18();


 if (!FUNC_9(VAR_5, VAR_12, VAR_13))
  goto out_bh_enable;

 VAR_7 = FUNC_7(VAR_5);
 if (!VAR_7)
  goto out_bh_enable;
 VAR_8 = FUNC_11(VAR_7);

 VAR_1->data.icmph.checksum = 0;

 FUNC_16(&VAR_3);
 VAR_8->tos = FUNC_12(VAR_2)->tos;
 VAR_7->sk_mark = VAR_11;
 VAR_9 = VAR_3.addr = FUNC_12(VAR_2)->saddr;
 VAR_10 = FUNC_4(VAR_2);

 if (VAR_1->replyopts.opt.opt.optlen) {
  VAR_3.opt = &VAR_1->replyopts.opt;
  if (VAR_3.opt->opt.srr)
   VAR_9 = VAR_1->replyopts.opt.opt.faddr;
 }
 FUNC_20(&VAR_6, 0, sizeof(VAR_6));
 VAR_6 = VAR_9;
 VAR_6 = VAR_10;
 VAR_6 = VAR_11;
 VAR_6 = FUNC_23(VAR_5, ((void*)0));
 VAR_6 = FUNC_2(FUNC_12(VAR_2)->tos);
 VAR_6 = VAR_0;
 VAR_6 = FUNC_17(VAR_2->dev);
 FUNC_21(VAR_2, FUNC_5(&VAR_6));
 VAR_4 = FUNC_14(VAR_5, &VAR_6);
 if (FUNC_1(VAR_4))
  goto out_unlock;
 if (FUNC_10(VAR_5, VAR_4, &VAR_6, VAR_12, VAR_13))
  FUNC_6(VAR_1, &VAR_6, &VAR_3, &VAR_4);
 FUNC_15(VAR_4);
out_unlock:
 FUNC_8(VAR_7);
out_bh_enable:
 FUNC_19();
}
