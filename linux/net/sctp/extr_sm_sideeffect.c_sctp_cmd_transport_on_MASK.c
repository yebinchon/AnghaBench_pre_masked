
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_transport {scalar_t__ state; int rto_pending; scalar_t__ dst; scalar_t__ hb_sent; TYPE_1__* asoc; scalar_t__ error_count; } ;
struct sctp_sender_hb_info {scalar_t__ sent_at; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {TYPE_2__* skb; } ;
struct TYPE_6__ {int transport_count; } ;
struct sctp_association {TYPE_3__ peer; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ overall_error_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sctp_association*,struct sctp_transport*,int ,int ) ;
 int FUNC_1 (struct sctp_transport*) ;
 int FUNC_2 (struct sctp_transport*) ;
 int FUNC_3 (struct sctp_transport*) ;
 int FUNC_4 (struct sctp_transport*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sctp_cmd_seq *VAR_7,
      struct sctp_association *VAR_8,
      struct sctp_transport *VAR_9,
      struct sctp_chunk *VAR_10)
{
 struct sctp_sender_hb_info *VAR_11;
 int VAR_12 = 0;





 VAR_9->error_count = 0;
 if (VAR_9->asoc->state < VAR_3)
  VAR_9->asoc->overall_error_count = 0;




 VAR_9->hb_sent = 0;




 if ((VAR_9->state == VAR_1) || (VAR_9->state == VAR_5)) {
  VAR_12 = 1;
  FUNC_0(VAR_8, VAR_9, VAR_4,
          VAR_0);
 }

 if (VAR_9->state == VAR_2)
  FUNC_0(VAR_8, VAR_9, VAR_4,
          VAR_0);




 if (VAR_9->dst)
  FUNC_1(VAR_9);
 if (VAR_9->rto_pending == 0)
  VAR_9->rto_pending = 1;

 VAR_11 = (struct sctp_sender_hb_info *)VAR_10->skb->data;
 FUNC_4(VAR_9, (VAR_6 - VAR_11->sent_at));


 FUNC_3(VAR_9);

 if (VAR_12 && VAR_8->peer.transport_count == 1)
  FUNC_2(VAR_9);
}
