
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sctp_ulpq {scalar_t__ pd_mode; struct sctp_association* asoc; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_sock {int pd_mode; scalar_t__ frag_interleave; } ;
struct TYPE_7__ {int tsn_map; } ;
struct TYPE_6__ {int reasm; } ;
struct TYPE_5__ {int sk; } ;
struct sctp_association {TYPE_3__ peer; TYPE_2__ ulpq; TYPE_1__ base; } ;
typedef int gfp_t ;
typedef int __u32 ;
struct TYPE_8__ {int tsn; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff_head*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sctp_ulpevent*) ;
 struct sctp_sock* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 struct sctp_ulpevent* FUNC_7 (struct sctp_ulpq*) ;
 int FUNC_8 (struct sctp_ulpq*) ;
 int FUNC_9 (struct sctp_ulpq*,struct sk_buff_head*) ;
 struct sk_buff* FUNC_10 (int *) ;
 int FUNC_11 (struct sk_buff_head*) ;

void FUNC_12(struct sctp_ulpq *VAR_0,
    gfp_t VAR_1)
{
 struct sctp_ulpevent *VAR_2;
 struct sctp_association *VAR_3;
 struct sctp_sock *VAR_4;
 __u32 VAR_5;
 struct sk_buff *VAR_6;

 VAR_3 = VAR_0->asoc;
 VAR_4 = FUNC_4(VAR_3->base.sk);




 if (VAR_0->pd_mode)
  return;




 VAR_6 = FUNC_10(&VAR_3->ulpq.reasm);
 if (VAR_6 != ((void*)0)) {
  VAR_5 = FUNC_5(VAR_6)->tsn;
  if (!FUNC_0(VAR_5, FUNC_6(&VAR_3->peer.tsn_map)))
   return;
 }






 if (VAR_4->frag_interleave || FUNC_2(&VAR_4->pd_mode) == 0) {

  VAR_2 = FUNC_7(VAR_0);

  if (VAR_2) {
   struct sk_buff_head VAR_7;

   FUNC_11(&VAR_7);
   FUNC_1(&VAR_7, FUNC_3(VAR_2));
   FUNC_9(VAR_0, &VAR_7);
   FUNC_8(VAR_0);
   return;
  }
 }
}
