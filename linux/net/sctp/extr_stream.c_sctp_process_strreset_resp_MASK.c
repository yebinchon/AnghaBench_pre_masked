
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


union sctp_params {TYPE_3__* p; struct sctp_strreset_resp* v; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_transport {int reconf_timer; } ;
struct sctp_strreset_resptsn {int receivers_next_tsn; int senders_next_tsn; } ;
struct sctp_strreset_resp {int result; int response_seq; } ;
struct TYPE_9__ {int length; } ;
struct sctp_strreset_outreq {TYPE_1__ param_hdr; int * list_of_streams; } ;
struct TYPE_10__ {int length; } ;
struct sctp_strreset_inreq {TYPE_2__ param_hdr; int * list_of_streams; } ;
struct sctp_strreset_addstrm {int number_of_streams; } ;
struct sctp_stream_out {void* state; scalar_t__ mid_uo; scalar_t__ mid; } ;
struct sctp_stream {int outcnt; int incnt; TYPE_4__* si; } ;
struct sctp_paramhdr {scalar_t__ type; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_14__ {int out_chunk_list; } ;
struct TYPE_13__ {int tsn_map; } ;
struct sctp_association {TYPE_7__* strreset_chunk; int strreset_outstanding; int strreset_outseq; scalar_t__ ctsn_ack_point; scalar_t__ adv_peer_ack_point; scalar_t__ next_tsn; TYPE_6__ outqueue; TYPE_5__ peer; int ulpq; struct sctp_stream stream; } ;
typedef scalar_t__ __u32 ;
typedef int __u16 ;
typedef int __be16 ;
struct TYPE_16__ {scalar_t__ mid; } ;
struct TYPE_15__ {struct sctp_transport* transport; } ;
struct TYPE_12__ {int (* report_ftsn ) (int *,scalar_t__) ;} ;
struct TYPE_11__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__* FUNC_1 (struct sctp_stream*,int) ;
 struct sctp_stream_out* FUNC_2 (struct sctp_stream*,int) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct sctp_paramhdr* FUNC_7 (struct sctp_association*,int ,int ) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct sctp_transport*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,scalar_t__,int ) ;
 struct sctp_ulpevent* FUNC_13 (struct sctp_association*,int,scalar_t__,scalar_t__,int ) ;
 struct sctp_ulpevent* FUNC_14 (struct sctp_association*,int,int,int,int ) ;
 struct sctp_ulpevent* FUNC_15 (struct sctp_association*,int,int,int *,int ) ;
 int FUNC_16 (int *,scalar_t__) ;
 int VAR_15 ;

struct sctp_chunk *FUNC_17(
    struct sctp_association *VAR_16,
    union sctp_params VAR_17,
    struct sctp_ulpevent **VAR_18)
{
 struct sctp_stream *VAR_19 = &VAR_16->stream;
 struct sctp_strreset_resp *VAR_20 = VAR_17.v;
 struct sctp_transport *VAR_21;
 __u16 VAR_22, VAR_23, VAR_24 = 0;
 struct sctp_paramhdr *VAR_25;
 __u32 VAR_26;

 VAR_25 = FUNC_7(VAR_16, VAR_20->response_seq, 0);
 if (!VAR_25)
  return ((void*)0);

 VAR_26 = FUNC_5(VAR_20->result);
 if (VAR_26 != VAR_13) {

  if (VAR_26 == VAR_12)
   return ((void*)0);
  else if (VAR_26 == VAR_11)
   VAR_24 = VAR_7;
  else
   VAR_24 = VAR_8;
 }

 if (VAR_25->type == VAR_4) {
  struct sctp_strreset_outreq *VAR_27;
  __be16 *VAR_28;

  VAR_27 = (struct sctp_strreset_outreq *)VAR_25;
  VAR_28 = VAR_27->list_of_streams;
  VAR_23 = (FUNC_6(VAR_27->param_hdr.length) - sizeof(*VAR_27)) /
         sizeof(__u16);

  if (VAR_26 == VAR_13) {
   struct sctp_stream_out *VAR_29;
   if (VAR_23) {
    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
     VAR_29 = FUNC_2(VAR_19, FUNC_6(VAR_28[VAR_22]));
     VAR_29->mid = 0;
     VAR_29->mid_uo = 0;
    }
   } else {
    for (VAR_22 = 0; VAR_22 < VAR_19->outcnt; VAR_22++) {
     VAR_29 = FUNC_2(VAR_19, VAR_22);
     VAR_29->mid = 0;
     VAR_29->mid_uo = 0;
    }
   }
  }

  VAR_24 |= VAR_10;

  for (VAR_22 = 0; VAR_22 < VAR_19->outcnt; VAR_22++)
   FUNC_2(VAR_19, VAR_22)->state = VAR_6;

  *VAR_18 = FUNC_15(VAR_16, VAR_24,
   VAR_23, VAR_28, VAR_0);
 } else if (VAR_25->type == VAR_3) {
  struct sctp_strreset_inreq *VAR_30;
  __be16 *VAR_31;


  if (VAR_26 == VAR_13)
   return ((void*)0);

  VAR_30 = (struct sctp_strreset_inreq *)VAR_25;
  VAR_31 = VAR_30->list_of_streams;
  VAR_23 = (FUNC_6(VAR_30->param_hdr.length) - sizeof(*VAR_30)) /
         sizeof(__u16);

  VAR_24 |= VAR_9;

  *VAR_18 = FUNC_15(VAR_16, VAR_24,
   VAR_23, VAR_31, VAR_0);
 } else if (VAR_25->type == VAR_5) {
  struct sctp_strreset_resptsn *VAR_32;
  __u32 VAR_33, VAR_34;


  if (FUNC_6(VAR_17.p->length) != sizeof(*VAR_32))
   return ((void*)0);

  VAR_32 = (struct sctp_strreset_resptsn *)VAR_20;
  VAR_33 = FUNC_5(VAR_32->senders_next_tsn);
  VAR_34 = FUNC_5(VAR_32->receivers_next_tsn);

  if (VAR_26 == VAR_13) {
   __u32 VAR_35 = FUNC_11(
      &VAR_16->peer.tsn_map);
   FUNC_0(VAR_15);

   VAR_16->stream.si->report_ftsn(&VAR_16->ulpq, VAR_35);

   FUNC_12(&VAR_16->peer.tsn_map,
      VAR_14,
      VAR_33, VAR_0);





   FUNC_4(&VAR_16->outqueue.out_chunk_list, &VAR_15);
   FUNC_9(&VAR_16->outqueue);
   FUNC_4(&VAR_15, &VAR_16->outqueue.out_chunk_list);

   VAR_16->next_tsn = VAR_34;
   VAR_16->ctsn_ack_point = VAR_16->next_tsn - 1;
   VAR_16->adv_peer_ack_point = VAR_16->ctsn_ack_point;

   for (VAR_22 = 0; VAR_22 < VAR_19->outcnt; VAR_22++) {
    FUNC_2(VAR_19, VAR_22)->mid = 0;
    FUNC_2(VAR_19, VAR_22)->mid_uo = 0;
   }
   for (VAR_22 = 0; VAR_22 < VAR_19->incnt; VAR_22++)
    FUNC_1(VAR_19, VAR_22)->mid = 0;
  }

  for (VAR_22 = 0; VAR_22 < VAR_19->outcnt; VAR_22++)
   FUNC_2(VAR_19, VAR_22)->state = VAR_6;

  *VAR_18 = FUNC_13(VAR_16, VAR_24,
   VAR_33, VAR_34, VAR_0);
 } else if (VAR_25->type == VAR_2) {
  struct sctp_strreset_addstrm *VAR_36;
  __u16 VAR_37;

  VAR_36 = (struct sctp_strreset_addstrm *)VAR_25;
  VAR_23 = FUNC_6(VAR_36->number_of_streams);
  VAR_37 = VAR_19->outcnt - VAR_23;

  if (VAR_26 == VAR_13)
   for (VAR_22 = VAR_37; VAR_22 < VAR_19->outcnt; VAR_22++)
    FUNC_2(VAR_19, VAR_22)->state = VAR_6;
  else
   VAR_19->outcnt = VAR_37;

  *VAR_18 = FUNC_14(VAR_16, VAR_24,
   0, VAR_23, VAR_0);
 } else if (VAR_25->type == VAR_1) {
  struct sctp_strreset_addstrm *VAR_38;




  if (VAR_26 == VAR_13)
   return ((void*)0);

  VAR_38 = (struct sctp_strreset_addstrm *)VAR_25;
  VAR_23 = FUNC_6(VAR_38->number_of_streams);

  *VAR_18 = FUNC_14(VAR_16, VAR_24,
   VAR_23, 0, VAR_0);
 }

 VAR_16->strreset_outstanding--;
 VAR_16->strreset_outseq++;


 if (!VAR_16->strreset_outstanding) {
  VAR_21 = VAR_16->strreset_chunk->transport;
  if (FUNC_3(&VAR_21->reconf_timer))
   FUNC_10(VAR_21);

  FUNC_8(VAR_16->strreset_chunk);
  VAR_16->strreset_chunk = ((void*)0);
 }

 return ((void*)0);
}
