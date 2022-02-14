
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int * sk_send_head; int sk_write_queue; } ;
struct dccp_sock {int dccps_featneg; int * dccps_hc_rx_ccid; int * dccps_hc_rx_ackvec; int * dccps_service_list; } ;
struct TYPE_2__ {int * icsk_bind_hash; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct dccp_sock* FUNC_4 (struct sock*) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct sock *VAR_0)
{
 struct dccp_sock *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(&VAR_0->sk_write_queue);
 if (VAR_0->sk_send_head != ((void*)0)) {
  FUNC_8(VAR_0->sk_send_head);
  VAR_0->sk_send_head = ((void*)0);
 }


 if (FUNC_5(VAR_0)->icsk_bind_hash != ((void*)0))
  FUNC_6(VAR_0);

 FUNC_7(VAR_1->dccps_service_list);
 VAR_1->dccps_service_list = ((void*)0);

 if (VAR_1->dccps_hc_rx_ackvec != ((void*)0)) {
  FUNC_2(VAR_1->dccps_hc_rx_ackvec);
  VAR_1->dccps_hc_rx_ackvec = ((void*)0);
 }
 FUNC_1(VAR_1->dccps_hc_rx_ccid, VAR_0);
 VAR_1->dccps_hc_rx_ccid = ((void*)0);


 FUNC_3(&VAR_1->dccps_featneg);
}
