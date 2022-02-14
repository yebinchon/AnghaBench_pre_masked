
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ expire; int timer; } ;
struct llc_sock {scalar_t__ failed_data_req; TYPE_2__ ack_timer; scalar_t__ retry_count; TYPE_1__* dev; int last_nr; } ;
struct llc_pdu_sn {int dummy; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct llc_pdu_sn*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*,int ,scalar_t__*) ;
 int FUNC_4 (struct sk_buff*,int*) ;
 struct llc_pdu_sn* FUNC_5 (struct sk_buff*) ;
 struct llc_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (int *,scalar_t__) ;

int FUNC_8(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;
 u16 VAR_5 = 0;
 struct llc_pdu_sn *VAR_6 = FUNC_5(VAR_3);
 struct llc_sock *VAR_7 = FUNC_6(VAR_2);

 VAR_7->last_nr = FUNC_0(VAR_6);
 VAR_4 = FUNC_3(VAR_2, VAR_7->last_nr, &VAR_5);

 if (VAR_4 > 0 || (VAR_7->dev->flags & VAR_0)) {
  VAR_7->retry_count = 0;
  FUNC_1(&VAR_7->ack_timer.timer);
  if (VAR_7->failed_data_req) {




   VAR_7->failed_data_req = 0;
   FUNC_2(VAR_2, VAR_3);
  }
  if (VAR_5)
   FUNC_7(&VAR_7->ack_timer.timer,
      VAR_1 + VAR_7->ack_timer.expire);
 } else if (VAR_7->failed_data_req) {
  u8 VAR_8;

  FUNC_4(VAR_3, &VAR_8);
  if (VAR_8 == 1) {
   VAR_7->failed_data_req = 0;
   FUNC_2(VAR_2, VAR_3);
  }
 }
 return 0;
}
