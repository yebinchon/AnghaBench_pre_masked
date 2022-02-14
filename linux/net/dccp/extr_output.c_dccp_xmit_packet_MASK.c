
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int len; } ;
struct dccp_sock {int dccps_mss_cache; int dccps_gsr; scalar_t__ dccps_sync_scheduled; int dccps_hc_tx_ccid; int dccps_featneg; } ;
struct TYPE_4__ {void* dccpd_type; } ;
struct TYPE_3__ {int icsk_rto; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int) ;
 int VAR_6 ;
 int FUNC_2 (int ,struct sock*,int) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 struct sk_buff* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ,int ) ;
 struct dccp_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ,int ,int ) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(struct sock *VAR_7)
{
 int VAR_8, VAR_9;
 struct dccp_sock *VAR_10 = FUNC_9(VAR_7);
 struct sk_buff *VAR_11 = FUNC_6(VAR_7);

 if (FUNC_15(VAR_11 == ((void*)0)))
  return;
 VAR_9 = VAR_11->len;

 if (VAR_7->sk_state == VAR_1) {
  const u32 VAR_12 = VAR_10->dccps_mss_cache - VAR_0;







  if (!FUNC_14(&VAR_10->dccps_featneg) && VAR_9 > VAR_12) {
   FUNC_1("Payload too large (%d) for featneg.\n", VAR_9);
   FUNC_7(VAR_7);
   FUNC_4(&VAR_10->dccps_featneg);
  }

  FUNC_13(VAR_7);
  FUNC_12(VAR_7, VAR_6,
           FUNC_11(VAR_7)->icsk_rto,
           VAR_5);
  FUNC_0(VAR_11)->dccpd_type = VAR_3;
 } else if (FUNC_3(VAR_7)) {
  FUNC_0(VAR_11)->dccpd_type = VAR_3;
 } else {
  FUNC_0(VAR_11)->dccpd_type = VAR_2;
 }

 VAR_8 = FUNC_10(VAR_7, VAR_11);
 if (VAR_8)
  FUNC_5("transmit_skb() returned err=%d\n", VAR_8);





 FUNC_2(VAR_10->dccps_hc_tx_ccid, VAR_7, VAR_9);







 if (VAR_10->dccps_sync_scheduled)
  FUNC_8(VAR_7, VAR_10->dccps_gsr, VAR_4);
}
