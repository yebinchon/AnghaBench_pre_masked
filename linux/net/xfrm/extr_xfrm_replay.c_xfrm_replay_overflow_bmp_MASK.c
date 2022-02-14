
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xfrm_state {TYPE_4__* repl; TYPE_1__* type; struct xfrm_replay_state_esn* replay_esn; } ;
struct xfrm_replay_state_esn {scalar_t__ oseq; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_7__ {scalar_t__ low; scalar_t__ hi; } ;
struct TYPE_8__ {TYPE_2__ output; } ;
struct TYPE_10__ {TYPE_3__ seq; } ;
struct TYPE_9__ {int (* notify ) (struct xfrm_state*,int ) ;} ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct xfrm_state*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct net*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = 0;
 struct xfrm_replay_state_esn *VAR_6 = VAR_3->replay_esn;
 struct net *VAR_7 = FUNC_5(VAR_3);

 if (VAR_3->type->flags & VAR_2) {
  FUNC_0(VAR_4)->seq.output.low = ++VAR_6->oseq;
  FUNC_0(VAR_4)->seq.output.hi = 0;
  if (FUNC_2(VAR_6->oseq == 0)) {
   VAR_6->oseq--;
   FUNC_4(VAR_3, VAR_4);
   VAR_5 = -VAR_0;

   return VAR_5;
  }
  if (FUNC_3(VAR_7))
   VAR_3->repl->notify(VAR_3, VAR_1);
 }

 return VAR_5;
}
