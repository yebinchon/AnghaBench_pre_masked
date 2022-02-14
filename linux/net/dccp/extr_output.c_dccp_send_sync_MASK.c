
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sock {TYPE_1__* sk_prot; } ;
struct sk_buff {int dummy; } ;
typedef enum dccp_pkt_type { ____Placeholder_dccp_pkt_type } dccp_pkt_type ;
struct TYPE_6__ {int dccpd_type; int dccpd_ack_seq; } ;
struct TYPE_5__ {scalar_t__ dccps_sync_scheduled; } ;
struct TYPE_4__ {int max_header; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 int FUNC_3 (int const) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

void FUNC_7(struct sock *VAR_1, const u64 VAR_2,
      const enum dccp_pkt_type VAR_3)
{





 struct sk_buff *VAR_4 = FUNC_2(VAR_1->sk_prot->max_header, VAR_0);

 if (VAR_4 == ((void*)0)) {

  FUNC_0("could not send %s", FUNC_3(VAR_3));
  return;
 }


 FUNC_6(VAR_4, VAR_1->sk_prot->max_header);
 FUNC_1(VAR_4)->dccpd_type = VAR_3;
 FUNC_1(VAR_4)->dccpd_ack_seq = VAR_2;





 FUNC_4(VAR_1)->dccps_sync_scheduled = 0;

 FUNC_5(VAR_1, VAR_4);
}
