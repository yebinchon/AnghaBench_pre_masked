
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ oseq; } ;
struct xfrm_state {TYPE_4__* repl; TYPE_3__ replay; TYPE_5__* type; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_7__ {scalar_t__ low; scalar_t__ hi; } ;
struct TYPE_8__ {TYPE_1__ output; } ;
struct TYPE_12__ {TYPE_2__ seq; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int (* notify ) (struct xfrm_state*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct xfrm_state*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct net*) ;
 int FUNC_4 (struct xfrm_state*,struct sk_buff*) ;
 struct net* FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_3, struct sk_buff *VAR_4)
{
 int VAR_5 = 0;
 struct net *VAR_6 = FUNC_5(VAR_3);

 if (VAR_3->type->flags & VAR_2) {
  FUNC_0(VAR_4)->seq.output.low = ++VAR_3->replay.oseq;
  FUNC_0(VAR_4)->seq.output.hi = 0;
  if (FUNC_2(VAR_3->replay.oseq == 0)) {
   VAR_3->replay.oseq--;
   FUNC_4(VAR_3, VAR_4);
   VAR_5 = -VAR_0;

   return VAR_5;
  }
  if (FUNC_3(VAR_6))
   VAR_3->repl->notify(VAR_3, VAR_1);
 }

 return VAR_5;
}
