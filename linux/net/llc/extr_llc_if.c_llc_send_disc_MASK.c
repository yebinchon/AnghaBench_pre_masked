
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct llc_conn_state_ev {int prim_type; int prim; int type; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 struct llc_conn_state_ev* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*,struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

int FUNC_7(struct sock *VAR_9)
{
 u16 VAR_10 = 1;
 struct llc_conn_state_ev *VAR_11;
 struct sk_buff *VAR_12;

 FUNC_5(VAR_9);
 if (VAR_9->sk_type != VAR_6 || VAR_9->sk_state != VAR_8 ||
     FUNC_3(VAR_9)->state == VAR_3 ||
     FUNC_3(VAR_9)->state == VAR_2)
  goto out;




 VAR_12 = FUNC_0(0, VAR_0);
 if (!VAR_12)
  goto out;
 FUNC_4(VAR_12, VAR_9);
 VAR_9->sk_state = VAR_7;
 VAR_11 = FUNC_1(VAR_12);
 VAR_11->type = VAR_1;
 VAR_11->prim = VAR_4;
 VAR_11->prim_type = VAR_5;
 VAR_10 = FUNC_2(VAR_9, VAR_12);
out:
 FUNC_6(VAR_9);
 return VAR_10;
}
