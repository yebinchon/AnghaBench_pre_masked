
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sctp_transport {int state; int send_ready; int packet; int ipaddr; } ;
struct sctp_flush_ctx {struct sctp_transport* transport; TYPE_4__* asoc; int * packet; int transport_list; } ;
struct sctp_chunk {TYPE_1__* chunk_hdr; int dest; struct sctp_transport* transport; } ;
typedef int __u8 ;
struct TYPE_6__ {int init_tag; } ;
struct TYPE_7__ {int ecn_capable; TYPE_2__ i; struct sctp_transport* active_path; } ;
struct TYPE_8__ {TYPE_3__ peer; } ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct sctp_transport* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (struct sctp_chunk*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct sctp_transport*) ;

__attribute__((used)) static void FUNC_7(struct sctp_flush_ctx *VAR_3,
           struct sctp_chunk *VAR_4)
{
 struct sctp_transport *VAR_5 = VAR_4->transport;

 if (!VAR_5) {
  if (!FUNC_3(VAR_4)) {
   if (VAR_3->transport && FUNC_4(&VAR_4->dest,
       &VAR_3->transport->ipaddr))
    VAR_5 = VAR_3->transport;
   else
    VAR_5 = FUNC_2(VAR_3->asoc,
          &VAR_4->dest);
  }




  if (!VAR_5)
   VAR_5 = VAR_3->asoc->peer.active_path;
 } else {
  __u8 VAR_6;

  switch (VAR_5->state) {
  case 130:
  case 128:
  case 129:
   VAR_6 = VAR_4->chunk_hdr->type;
   if (VAR_6 != VAR_1 &&
       VAR_6 != VAR_2 &&
       VAR_6 != VAR_0)
    VAR_5 = VAR_3->asoc->peer.active_path;
   break;
  default:
   break;
  }
 }


 if (VAR_5 != VAR_3->transport) {
  VAR_3->transport = VAR_5;
  VAR_3->packet = &VAR_3->transport->packet;

  if (FUNC_1(&VAR_3->transport->send_ready))
   FUNC_0(&VAR_3->transport->send_ready,
          &VAR_3->transport_list);

  FUNC_5(VAR_3->packet,
       VAR_3->asoc->peer.i.init_tag,
       VAR_3->asoc->peer.ecn_capable);



  FUNC_6(VAR_3->transport);
 }
}
