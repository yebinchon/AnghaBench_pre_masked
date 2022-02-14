
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {TYPE_2__* sap; } ;
struct llc_conn_state_ev {int prim_type; int prim; int type; } ;
struct llc_addr {int mac; int lsap; } ;
struct TYPE_3__ {int lsap; } ;
struct TYPE_4__ {TYPE_1__ laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 struct llc_conn_state_ev* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_3 (TYPE_2__*,struct llc_addr*,struct llc_addr*) ;
 struct llc_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;

int FUNC_9(struct sock *VAR_7, u8 *VAR_8, u8 *VAR_9, u8 VAR_10)
{
 int VAR_11 = -VAR_0;
 struct llc_addr VAR_12, VAR_13;
 struct sk_buff *VAR_14;
 struct llc_sock *VAR_15 = FUNC_4(VAR_7);
 struct sock *VAR_16;

 VAR_12.lsap = VAR_15->sap->laddr.lsap;
 VAR_13.lsap = VAR_10;
 FUNC_5(VAR_13.mac, VAR_9, sizeof(VAR_13.mac));
 FUNC_5(VAR_12.mac, VAR_8, sizeof(VAR_12.mac));
 VAR_16 = FUNC_3(VAR_15->sap, &VAR_13, &VAR_12);
 if (VAR_16) {
  if (VAR_16->sk_state == VAR_6) {
   VAR_7 = VAR_16;
   goto out_put;
  } else
   FUNC_8(VAR_16);
 }
 FUNC_7(VAR_7);
 VAR_11 = -VAR_1;
 VAR_14 = FUNC_0(0, VAR_2);
 if (VAR_14) {
  struct llc_conn_state_ev *VAR_17 = FUNC_1(VAR_14);

  VAR_17->type = VAR_3;
  VAR_17->prim = VAR_4;
  VAR_17->prim_type = VAR_5;
  FUNC_6(VAR_14, VAR_7);
  VAR_11 = FUNC_2(VAR_7, VAR_14);
 }
out_put:
 FUNC_8(VAR_7);
 return VAR_11;
}
