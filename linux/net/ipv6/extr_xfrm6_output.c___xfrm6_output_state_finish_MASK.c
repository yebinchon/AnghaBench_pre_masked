
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state_afinfo {int (* output_finish ) (struct sock*,struct sk_buff*) ;} ;
struct TYPE_2__ {int family; } ;
struct xfrm_state {TYPE_1__ outer_mode; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct xfrm_state_afinfo const*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct xfrm_state_afinfo* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_1, struct sock *VAR_2,
           struct sk_buff *VAR_3)
{
 const struct xfrm_state_afinfo *VAR_4;
 int VAR_5 = -VAR_0;

 FUNC_2();
 VAR_4 = FUNC_5(VAR_1->outer_mode.family);
 if (FUNC_1(VAR_4))
  VAR_5 = VAR_4->output_finish(VAR_2, VAR_3);
 else
  FUNC_0(VAR_3);
 FUNC_3();

 return VAR_5;
}
