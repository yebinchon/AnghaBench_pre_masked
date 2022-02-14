
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {int dummy; } ;
struct dn_scp {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct dn_scp *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->state == VAR_0) {
  VAR_6->state = VAR_1;
  VAR_4->sk_state = VAR_3;
  if (!FUNC_2(VAR_4, VAR_2))
   VAR_4->sk_state_change(VAR_4);
 }

 FUNC_1(VAR_5);
}
