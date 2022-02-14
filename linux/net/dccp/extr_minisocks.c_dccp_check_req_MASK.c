
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {TYPE_2__* rsk_ops; } ;
struct dccp_request_sock {int dreq_lock; scalar_t__ dreq_gss; scalar_t__ dreq_iss; int dreq_gsr; } ;
struct TYPE_10__ {int dccpd_reset_code; scalar_t__ dccpd_ack_seq; int dccpd_seq; } ;
struct TYPE_9__ {scalar_t__ dccph_type; } ;
struct TYPE_8__ {TYPE_1__* icsk_af_ops; } ;
struct TYPE_7__ {int (* send_reset ) (struct sock*,struct sk_buff*) ;} ;
struct TYPE_6__ {struct sock* (* syn_recv_sock ) (struct sock*,struct sk_buff*,struct request_sock*,int *,struct request_sock*,int*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_4__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sock*,struct dccp_request_sock*,struct sk_buff*) ;
 int FUNC_5 (char*,...) ;
 struct dccp_request_sock* FUNC_6 (struct request_sock*) ;
 TYPE_3__* FUNC_7 (struct sock*) ;
 struct sock* FUNC_8 (struct sock*,struct sock*,struct request_sock*,int) ;
 int FUNC_9 (struct sock*,struct request_sock*) ;
 int FUNC_10 (struct sock*,struct request_sock*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct sock* FUNC_13 (struct sock*,struct sk_buff*,struct request_sock*,int *,struct request_sock*,int*) ;
 int FUNC_14 (struct sock*,struct sk_buff*) ;

struct sock *FUNC_15(struct sock *VAR_6, struct sk_buff *VAR_7,
       struct request_sock *VAR_8)
{
 struct sock *VAR_9 = ((void*)0);
 struct dccp_request_sock *VAR_10 = FUNC_6(VAR_8);
 bool VAR_11;






 FUNC_11(&VAR_10->dreq_lock);


 if (FUNC_3(VAR_7)->dccph_type == VAR_2) {

  if (FUNC_1(FUNC_0(VAR_7)->dccpd_seq, VAR_10->dreq_gsr)) {
   FUNC_5("Retransmitted REQUEST\n");
   VAR_10->dreq_gsr = FUNC_0(VAR_7)->dccpd_seq;





   FUNC_10(VAR_6, VAR_8);
  }

  goto out;
 }

 FUNC_0(VAR_7)->dccpd_reset_code = VAR_4;

 if (FUNC_3(VAR_7)->dccph_type != VAR_0 &&
     FUNC_3(VAR_7)->dccph_type != VAR_1)
  goto drop;


 if (!FUNC_2(FUNC_0(VAR_7)->dccpd_ack_seq,
    VAR_10->dreq_iss, VAR_10->dreq_gss)) {
  FUNC_5("Invalid ACK number: ack_seq=%llu, "
         "dreq_iss=%llu, dreq_gss=%llu\n",
         (unsigned long long)
         FUNC_0(VAR_7)->dccpd_ack_seq,
         (unsigned long long) VAR_10->dreq_iss,
         (unsigned long long) VAR_10->dreq_gss);
  goto drop;
 }

 if (FUNC_4(VAR_6, VAR_10, VAR_7))
   goto drop;

 VAR_9 = FUNC_7(VAR_6)->icsk_af_ops->syn_recv_sock(VAR_6, VAR_7, VAR_8, ((void*)0),
        VAR_8, &VAR_11);
 if (VAR_9) {
  VAR_9 = FUNC_8(VAR_6, VAR_9, VAR_8, VAR_11);
  goto out;
 }

 FUNC_0(VAR_7)->dccpd_reset_code = VAR_5;
drop:
 if (FUNC_3(VAR_7)->dccph_type != VAR_3)
  VAR_8->rsk_ops->send_reset(VAR_6, VAR_7);

 FUNC_9(VAR_6, VAR_8);
out:
 FUNC_12(&VAR_10->dreq_lock);
 return VAR_9;
}
