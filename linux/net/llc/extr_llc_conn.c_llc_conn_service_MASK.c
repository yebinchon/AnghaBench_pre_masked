
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct llc_sock {scalar_t__ state; } ;
struct llc_conn_state_trans {scalar_t__ next_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sock*,struct llc_conn_state_trans*,struct sk_buff*) ;
 struct llc_conn_state_trans* FUNC_2 (struct sock*,struct sk_buff*) ;
 struct llc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = 1;
 struct llc_sock *VAR_5 = FUNC_3(VAR_2);
 struct llc_conn_state_trans *VAR_6;

 if (VAR_5->state > VAR_0)
  goto out;
 VAR_4 = 0;
 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6) {
  VAR_4 = FUNC_1(VAR_2, VAR_6, VAR_3);
  if (!VAR_4 && VAR_6->next_state != VAR_1) {
   VAR_5->state = VAR_6->next_state;
   if (!FUNC_0(VAR_5->state))
    VAR_2->sk_state_change(VAR_2);
  }
 }
out:
 return VAR_4;
}
