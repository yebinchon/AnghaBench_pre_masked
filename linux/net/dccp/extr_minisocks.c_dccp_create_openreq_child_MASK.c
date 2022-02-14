
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct inet_connection_sock {int icsk_rto; } ;
struct dccp_sock {int dccps_gsr; int dccps_isr; int dccps_iss; int dccps_gar; int dccps_gss; int dccps_featneg; int dccps_timestamp_time; int dccps_timestamp_echo; int dccps_service; int * dccps_service_list; int * dccps_hc_rx_ackvec; int dccps_role; } ;
struct dccp_request_sock {int dreq_featneg; int dreq_gsr; int dreq_isr; int dreq_gss; int dreq_iss; int dreq_timestamp_time; int dreq_timestamp_echo; int dreq_service; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sock*,int *) ;
 int FUNC_3 (struct sock*) ;
 struct dccp_request_sock* FUNC_4 (struct request_sock const*) ;
 struct dccp_sock* FUNC_5 (struct sock*) ;
 struct inet_connection_sock* FUNC_6 (struct sock*) ;
 struct sock* FUNC_7 (struct sock const*,struct request_sock const*,int ) ;
 int FUNC_8 (struct sock*) ;

struct sock *FUNC_9(const struct sock *VAR_4,
           const struct request_sock *VAR_5,
           const struct sk_buff *VAR_6)
{






 struct sock *VAR_7 = FUNC_7(VAR_4, VAR_5, VAR_3);

 if (VAR_7 != ((void*)0)) {
  struct dccp_request_sock *VAR_8 = FUNC_4(VAR_5);
  struct inet_connection_sock *VAR_9 = FUNC_6(VAR_7);
  struct dccp_sock *VAR_10 = FUNC_5(VAR_7);

  VAR_10->dccps_role = VAR_1;
  VAR_10->dccps_hc_rx_ackvec = ((void*)0);
  VAR_10->dccps_service_list = ((void*)0);
  VAR_10->dccps_service = VAR_8->dreq_service;
  VAR_10->dccps_timestamp_echo = VAR_8->dreq_timestamp_echo;
  VAR_10->dccps_timestamp_time = VAR_8->dreq_timestamp_time;
  VAR_9->icsk_rto = VAR_2;

  FUNC_0(&VAR_10->dccps_featneg);
  VAR_10->dccps_iss = VAR_8->dreq_iss;
  VAR_10->dccps_gss = VAR_8->dreq_gss;
  VAR_10->dccps_gar = VAR_10->dccps_iss;
  VAR_10->dccps_isr = VAR_8->dreq_isr;
  VAR_10->dccps_gsr = VAR_8->dreq_gsr;




  if (FUNC_2(VAR_7, &VAR_8->dreq_featneg)) {
   FUNC_8(VAR_7);
   return ((void*)0);
  }
  FUNC_3(VAR_7);

  FUNC_1(VAR_0);
 }
 return VAR_7;
}
