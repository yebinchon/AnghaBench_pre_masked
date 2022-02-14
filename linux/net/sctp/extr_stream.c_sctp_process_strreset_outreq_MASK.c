
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union sctp_params {TYPE_2__* p; struct sctp_strreset_outreq* v; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_transport {int reconf_timer; } ;
struct sctp_strreset_outreq {int response_seq; int * list_of_streams; int send_reset_at_tsn; int request_seq; } ;
struct sctp_stream {size_t incnt; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_5__ {int tsn_map; } ;
struct sctp_association {size_t strreset_inseq; size_t* strreset_result; int strreset_enable; TYPE_3__* strreset_chunk; int strreset_outstanding; int strreset_outseq; TYPE_1__ peer; struct sctp_stream stream; } ;
typedef size_t __u32 ;
typedef size_t __u16 ;
typedef int __be16 ;
struct TYPE_8__ {scalar_t__ mid; } ;
struct TYPE_7__ {struct sctp_transport* transport; } ;
struct TYPE_6__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (struct sctp_stream*,size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_association*,int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 struct sctp_chunk* FUNC_7 (struct sctp_association*,size_t,size_t) ;
 int FUNC_8 (struct sctp_transport*) ;
 scalar_t__ FUNC_9 (int *) ;
 struct sctp_ulpevent* FUNC_10 (struct sctp_association*,int ,size_t,int *,int ) ;
 int FUNC_11 (struct sctp_association*,size_t) ;

struct sctp_chunk *FUNC_12(
    struct sctp_association *VAR_10,
    union sctp_params VAR_11,
    struct sctp_ulpevent **VAR_12)
{
 struct sctp_strreset_outreq *VAR_13 = VAR_11.v;
 struct sctp_stream *VAR_14 = &VAR_10->stream;
 __u32 VAR_15 = VAR_4;
 __be16 *VAR_16 = ((void*)0);
 __u32 VAR_17;
 __u16 VAR_18, VAR_19;

 VAR_17 = FUNC_3(VAR_13->request_seq);

 if (FUNC_3(VAR_13->send_reset_at_tsn) >
     FUNC_9(&VAR_10->peer.tsn_map)) {
  VAR_15 = VAR_8;
  goto err;
 }

 if (FUNC_1(VAR_10->strreset_inseq, VAR_17) ||
     FUNC_1(VAR_17, VAR_10->strreset_inseq - 2)) {
  VAR_15 = VAR_5;
  goto err;
 } else if (FUNC_1(VAR_17, VAR_10->strreset_inseq)) {
  VAR_18 = VAR_10->strreset_inseq - VAR_17 - 1;
  VAR_15 = VAR_10->strreset_result[VAR_18];
  goto err;
 }
 VAR_10->strreset_inseq++;





 if (!(VAR_10->strreset_enable & VAR_1))
  goto out;

 VAR_19 = (FUNC_4(VAR_11.p->length) - sizeof(*VAR_13)) / sizeof(__u16);
 VAR_16 = VAR_13->list_of_streams;
 for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++) {
  if (FUNC_4(VAR_16[VAR_18]) >= VAR_14->incnt) {
   VAR_15 = VAR_7;
   goto out;
  }
 }

 if (VAR_10->strreset_chunk) {
  if (!FUNC_5(
    VAR_10, VAR_13->response_seq,
    VAR_2)) {

   VAR_15 = VAR_6;
   goto out;
  }

  VAR_10->strreset_outstanding--;
  VAR_10->strreset_outseq++;

  if (!VAR_10->strreset_outstanding) {
   struct sctp_transport *VAR_20;

   VAR_20 = VAR_10->strreset_chunk->transport;
   if (FUNC_2(&VAR_20->reconf_timer))
    FUNC_8(VAR_20);

   FUNC_6(VAR_10->strreset_chunk);
   VAR_10->strreset_chunk = ((void*)0);
  }
 }

 if (VAR_19)
  for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
   FUNC_0(VAR_14, FUNC_4(VAR_16[VAR_18]))->mid = 0;
 else
  for (VAR_18 = 0; VAR_18 < VAR_14->incnt; VAR_18++)
   FUNC_0(VAR_14, VAR_18)->mid = 0;

 VAR_15 = VAR_9;

 *VAR_12 = FUNC_10(VAR_10,
  VAR_3, VAR_19, VAR_16, VAR_0);

out:
 FUNC_11(VAR_10, VAR_15);
err:
 return FUNC_7(VAR_10, VAR_15, VAR_17);
}
