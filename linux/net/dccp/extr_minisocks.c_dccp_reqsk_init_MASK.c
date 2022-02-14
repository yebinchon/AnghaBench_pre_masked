
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct dccp_sock {int dccps_featneg; } ;
struct dccp_request_sock {int dreq_featneg; scalar_t__ dreq_timestamp_echo; int dreq_lock; } ;
struct TYPE_4__ {int dccph_dport; int dccph_sport; } ;
struct TYPE_3__ {scalar_t__ acked; int ir_num; int ir_rmt_port; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (struct sk_buff const*) ;
 struct dccp_request_sock* FUNC_2 (struct request_sock*) ;
 TYPE_1__* FUNC_3 (struct request_sock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct request_sock *VAR_0,
      struct dccp_sock const *VAR_1, struct sk_buff const *VAR_2)
{
 struct dccp_request_sock *VAR_3 = FUNC_2(VAR_0);

 FUNC_5(&VAR_3->dreq_lock);
 FUNC_3(VAR_0)->ir_rmt_port = FUNC_1(VAR_2)->dccph_sport;
 FUNC_3(VAR_0)->ir_num = FUNC_4(FUNC_1(VAR_2)->dccph_dport);
 FUNC_3(VAR_0)->acked = 0;
 VAR_3->dreq_timestamp_echo = 0;


 return FUNC_0(&VAR_1->dccps_featneg, &VAR_3->dreq_featneg);
}
