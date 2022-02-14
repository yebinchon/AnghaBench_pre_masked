
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int replay_window; } ;
struct xfrm_state {TYPE_3__ stats; } ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;
struct TYPE_5__ {scalar_t__ hi; } ;
struct TYPE_6__ {TYPE_1__ input; } ;
struct TYPE_8__ {TYPE_2__ seq; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xfrm_state*,struct sk_buff*,int ) ;
 int FUNC_4 (struct xfrm_state*,int ) ;

__attribute__((used)) static int FUNC_5(struct xfrm_state *VAR_1,
       struct sk_buff *VAR_2, __be32 VAR_3)
{
 if (FUNC_2(FUNC_0(VAR_2)->seq.input.hi !=
       FUNC_1(FUNC_4(VAR_1, VAR_3)))) {
   VAR_1->stats.replay_window++;
   return -VAR_0;
 }

 return FUNC_3(VAR_1, VAR_2, VAR_3);
}
