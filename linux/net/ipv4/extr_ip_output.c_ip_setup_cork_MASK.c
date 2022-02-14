
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_allocation; } ;
struct TYPE_8__ {TYPE_1__* dev; } ;
struct rtable {TYPE_4__ dst; } ;
struct TYPE_6__ {int tsflags; int transmit_time; int mark; } ;
struct ipcm_cookie {TYPE_2__ sockc; int priority; int tos; int ttl; int gso_size; int addr; struct ip_options_rcu* opt; } ;
struct TYPE_7__ {scalar_t__ optlen; } ;
struct ip_options_rcu {TYPE_3__ opt; } ;
struct ip_options {int dummy; } ;
struct inet_cork {scalar_t__ tx_flags; int transmit_time; int priority; int mark; int tos; int ttl; scalar_t__ length; TYPE_4__* dst; int gso_size; int fragsize; int addr; int flags; scalar_t__ opt; } ;
struct TYPE_5__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,TYPE_3__*,scalar_t__) ;
 int FUNC_4 (struct sock*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_3, struct inet_cork *VAR_4,
    struct ipcm_cookie *VAR_5, struct rtable **VAR_6)
{
 struct ip_options_rcu *VAR_7;
 struct rtable *VAR_8;

 VAR_8 = *VAR_6;
 if (FUNC_5(!VAR_8))
  return -VAR_0;




 VAR_7 = VAR_5->opt;
 if (VAR_7) {
  if (!VAR_4->opt) {
   VAR_4->opt = FUNC_2(sizeof(struct ip_options) + 40,
         VAR_3->sk_allocation);
   if (FUNC_5(!VAR_4->opt))
    return -VAR_1;
  }
  FUNC_3(VAR_4->opt, &VAR_7->opt, sizeof(struct ip_options) + VAR_7->opt.optlen);
  VAR_4->flags |= VAR_2;
  VAR_4->addr = VAR_5->addr;
 }




 *VAR_6 = ((void*)0);
 VAR_4->fragsize = FUNC_1(VAR_3) ?
    FUNC_0(&VAR_8->dst) : VAR_8->dst.dev->mtu;

 VAR_4->gso_size = VAR_5->gso_size;
 VAR_4->dst = &VAR_8->dst;
 VAR_4->length = 0;
 VAR_4->ttl = VAR_5->ttl;
 VAR_4->tos = VAR_5->tos;
 VAR_4->mark = VAR_5->sockc.mark;
 VAR_4->priority = VAR_5->priority;
 VAR_4->transmit_time = VAR_5->sockc.transmit_time;
 VAR_4->tx_flags = 0;
 FUNC_4(VAR_3, VAR_5->sockc.tsflags, &VAR_4->tx_flags);

 return 0;
}
