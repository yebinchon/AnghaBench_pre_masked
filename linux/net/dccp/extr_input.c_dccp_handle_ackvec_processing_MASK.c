
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_ackvec {int dummy; } ;
struct TYPE_4__ {scalar_t__ dccpd_ack_seq; } ;
struct TYPE_3__ {struct dccp_ackvec* dccps_hc_rx_ackvec; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct dccp_ackvec*,scalar_t__) ;
 int FUNC_2 (struct dccp_ackvec*,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct dccp_ackvec *VAR_3 = FUNC_3(VAR_1)->dccps_hc_rx_ackvec;

 if (VAR_3 == ((void*)0))
  return;
 if (FUNC_0(VAR_2)->dccpd_ack_seq != VAR_0)
  FUNC_1(VAR_3, FUNC_0(VAR_2)->dccpd_ack_seq);
 FUNC_2(VAR_3, VAR_2);
}
