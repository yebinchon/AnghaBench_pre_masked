
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfrm_state_afinfo {int (* output_finish ) (struct sock*,struct sk_buff*) ;} ;
struct TYPE_4__ {int family; } ;
struct xfrm_state {TYPE_1__ outer_mode; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {struct xfrm_state* xfrm; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct xfrm_state_afinfo const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct xfrm_state_afinfo* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_2, struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct xfrm_state *VAR_5 = FUNC_6(VAR_4)->xfrm;
 const struct xfrm_state_afinfo *VAR_6;
 int VAR_7 = -VAR_0;
 FUNC_4();
 VAR_6 = FUNC_8(VAR_5->outer_mode.family);
 if (FUNC_3(VAR_6))
  VAR_7 = VAR_6->output_finish(VAR_3, VAR_4);
 else
  FUNC_2(VAR_4);
 FUNC_5();

 return VAR_7;
}
