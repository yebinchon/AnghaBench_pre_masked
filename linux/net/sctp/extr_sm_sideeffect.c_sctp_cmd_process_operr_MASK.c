
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_ulpevent {int dummy; } ;
struct sctp_errhdr {int cause; scalar_t__ variable; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int type; } ;
struct sctp_chunk {scalar_t__ chunk_end; TYPE_1__* skb; } ;
struct TYPE_8__ {int asconf_capable; } ;
struct TYPE_7__ {TYPE_2__* si; } ;
struct sctp_association {TYPE_4__ peer; int ulpq; TYPE_3__ stream; } ;
struct TYPE_6__ {int (* enqueue_event ) (int *,struct sctp_ulpevent*) ;} ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_ulpevent* FUNC_2 (struct sctp_association*,struct sctp_chunk*,int ,int ) ;
 int FUNC_3 (int *,struct sctp_ulpevent*) ;

__attribute__((used)) static void FUNC_4(struct sctp_cmd_seq *VAR_3,
       struct sctp_association *VAR_4,
       struct sctp_chunk *VAR_5)
{
 struct sctp_errhdr *VAR_6;
 struct sctp_ulpevent *VAR_7;

 while (VAR_5->chunk_end > VAR_5->skb->data) {
  VAR_6 = (struct sctp_errhdr *)(VAR_5->skb->data);

  VAR_7 = FUNC_2(VAR_4, VAR_5, 0,
           VAR_0);
  if (!VAR_7)
   return;

  VAR_4->stream.si->enqueue_event(&VAR_4->ulpq, VAR_7);

  switch (VAR_6->cause) {
  case 128:
  {
   struct sctp_chunkhdr *VAR_8;

   VAR_8 = (struct sctp_chunkhdr *)
       VAR_6->variable;
   switch (VAR_8->type) {






   case 129:
    if (VAR_4->peer.asconf_capable == 0)
     break;

    VAR_4->peer.asconf_capable = 0;
    FUNC_1(VAR_3, VAR_1,
     FUNC_0(VAR_2));
    break;
   default:
    break;
   }
   break;
  }
  default:
   break;
  }
 }
}
