
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct llc_sock {scalar_t__ state; int failed_data_req; int dev; scalar_t__ p_flag; } ;
struct llc_conn_state_ev {int prim_type; int prim; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 struct llc_conn_state_ev* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 struct llc_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct llc_conn_state_ev *VAR_8;
 int VAR_9 = -VAR_1;
 struct llc_sock *VAR_10 = FUNC_4(VAR_6);

 if (FUNC_5(VAR_10->state == VAR_3))
  goto out_free;
 VAR_9 = -VAR_0;
 if (FUNC_5(FUNC_3(VAR_10->state) ||
       VAR_10->p_flag)) {
  VAR_10->failed_data_req = 1;
  goto out_free;
 }
 VAR_8 = FUNC_1(VAR_7);
 VAR_8->type = VAR_2;
 VAR_8->prim = VAR_4;
 VAR_8->prim_type = VAR_5;
 VAR_7->dev = VAR_10->dev;
 return FUNC_2(VAR_6, VAR_7);

out_free:
 FUNC_0(VAR_7);
 return VAR_9;
}
