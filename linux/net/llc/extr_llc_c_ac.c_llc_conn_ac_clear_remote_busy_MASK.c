
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int timer; } ;
struct llc_sock {TYPE_1__ busy_state_timer; scalar_t__ remote_busy_flag; } ;
struct llc_pdu_sn {int dummy; } ;


 int FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*,int ,int ) ;
 struct llc_pdu_sn* FUNC_3 (struct sk_buff*) ;
 struct llc_sock* FUNC_4 (struct sock*) ;

int FUNC_5(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_sock *VAR_2 = FUNC_4(VAR_0);

 if (VAR_2->remote_busy_flag) {
  u8 VAR_3;
  struct llc_pdu_sn *VAR_4 = FUNC_3(VAR_1);

  VAR_2->remote_busy_flag = 0;
  FUNC_1(&VAR_2->busy_state_timer.timer);
  VAR_3 = FUNC_0(VAR_4);
  FUNC_2(VAR_0, VAR_3, 0);
 }
 return 0;
}
