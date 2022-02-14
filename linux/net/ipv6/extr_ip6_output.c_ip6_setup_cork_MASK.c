
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct sock {int sk_allocation; } ;
struct TYPE_18__ {int flags; TYPE_3__* dev; } ;
struct rt6_info {TYPE_6__ dst; } ;
struct ipv6_txoptions {scalar_t__ srcrt; scalar_t__ hopopt; scalar_t__ dst1opt; scalar_t__ dst0opt; int opt_nflen; int opt_flen; } ;
struct ipv6_pinfo {scalar_t__ pmtudisc; unsigned int frag_size; } ;
struct TYPE_17__ {int transmit_time; int tsflags; int mark; } ;
struct ipcm6_cookie {TYPE_5__ sockc; int gso_size; int tclass; int hlimit; struct ipv6_txoptions* opt; } ;
struct TYPE_16__ {unsigned int fragsize; int transmit_time; scalar_t__ length; int flags; scalar_t__ tx_flags; int mark; int gso_size; TYPE_6__* dst; } ;
struct flowi6 {int dummy; } ;
struct TYPE_13__ {struct flowi6 ip6; } ;
struct TYPE_14__ {TYPE_1__ u; } ;
struct inet_cork_full {TYPE_4__ base; TYPE_2__ fl; } ;
struct inet6_cork {int tclass; int hop_limit; TYPE_8__* opt; } ;
struct TYPE_19__ {int tot_len; int srcrt; void* hopopt; void* dst1opt; void* dst0opt; int opt_nflen; int opt_flen; } ;
struct TYPE_15__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 unsigned int FUNC_4 (TYPE_6__*) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 void* FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 TYPE_8__* FUNC_8 (int,int ) ;
 int FUNC_9 (struct sock*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (int) ;
 TYPE_6__* FUNC_11 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_6, struct inet_cork_full *VAR_7,
     struct inet6_cork *VAR_8, struct ipcm6_cookie *VAR_9,
     struct rt6_info *VAR_10, struct flowi6 *VAR_11)
{
 struct ipv6_pinfo *VAR_12 = FUNC_5(VAR_6);
 unsigned int VAR_13;
 struct ipv6_txoptions *VAR_14 = VAR_9->opt;




 if (VAR_14) {
  if (FUNC_1(VAR_8->opt))
   return -VAR_1;

  VAR_8->opt = FUNC_8(sizeof(*VAR_14), VAR_6->sk_allocation);
  if (FUNC_10(!VAR_8->opt))
   return -VAR_2;

  VAR_8->opt->tot_len = sizeof(*VAR_14);
  VAR_8->opt->opt_flen = VAR_14->opt_flen;
  VAR_8->opt->opt_nflen = VAR_14->opt_nflen;

  VAR_8->opt->dst0opt = FUNC_6(VAR_14->dst0opt,
          VAR_6->sk_allocation);
  if (VAR_14->dst0opt && !VAR_8->opt->dst0opt)
   return -VAR_2;

  VAR_8->opt->dst1opt = FUNC_6(VAR_14->dst1opt,
          VAR_6->sk_allocation);
  if (VAR_14->dst1opt && !VAR_8->opt->dst1opt)
   return -VAR_2;

  VAR_8->opt->hopopt = FUNC_6(VAR_14->hopopt,
         VAR_6->sk_allocation);
  if (VAR_14->hopopt && !VAR_8->opt->hopopt)
   return -VAR_2;

  VAR_8->opt->srcrt = FUNC_7(VAR_14->srcrt,
          VAR_6->sk_allocation);
  if (VAR_14->srcrt && !VAR_8->opt->srcrt)
   return -VAR_2;


 }
 FUNC_3(&VAR_10->dst);
 VAR_7->base.dst = &VAR_10->dst;
 VAR_7->fl.u.ip6 = *VAR_11;
 VAR_8->hop_limit = VAR_9->hlimit;
 VAR_8->tclass = VAR_9->tclass;
 if (VAR_10->dst.flags & VAR_0)
  VAR_13 = VAR_12->pmtudisc >= VAR_5 ?
        FUNC_0(VAR_10->dst.dev->mtu) : FUNC_4(&VAR_10->dst);
 else
  VAR_13 = VAR_12->pmtudisc >= VAR_5 ?
   FUNC_0(VAR_10->dst.dev->mtu) : FUNC_4(FUNC_11(&VAR_10->dst));
 if (VAR_12->frag_size < VAR_13) {
  if (VAR_12->frag_size)
   VAR_13 = VAR_12->frag_size;
 }
 if (VAR_13 < VAR_4)
  return -VAR_1;
 VAR_7->base.fragsize = VAR_13;
 VAR_7->base.gso_size = VAR_9->gso_size;
 VAR_7->base.tx_flags = 0;
 VAR_7->base.mark = VAR_9->sockc.mark;
 FUNC_9(VAR_6, VAR_9->sockc.tsflags, &VAR_7->base.tx_flags);

 if (FUNC_2(FUNC_11(&VAR_10->dst)))
  VAR_7->base.flags |= VAR_3;
 VAR_7->base.length = 0;

 VAR_7->base.transmit_time = VAR_9->sockc.transmit_time;

 return 0;
}
