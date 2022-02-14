
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union sctp_params {struct sctp_strreset_tsnreq* v; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_strreset_tsnreq {int request_seq; } ;
struct sctp_stream {size_t outcnt; size_t incnt; TYPE_1__* si; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_6__ {int tsn_map; } ;
struct sctp_association {scalar_t__ strreset_inseq; scalar_t__* strreset_result; scalar_t__ ctsn_ack_point; int strreset_enable; scalar_t__ next_tsn; scalar_t__ adv_peer_ack_point; int outqueue; TYPE_2__ peer; int ulpq; struct sctp_stream stream; scalar_t__ strreset_outstanding; } ;
typedef scalar_t__ __u32 ;
typedef size_t __u16 ;
struct TYPE_8__ {scalar_t__ mid; } ;
struct TYPE_7__ {scalar_t__ mid_uo; scalar_t__ mid; } ;
struct TYPE_5__ {int (* report_ftsn ) (int *,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sctp_stream*,size_t) ;
 TYPE_3__* FUNC_1 (struct sctp_stream*,size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,scalar_t__,int ) ;
 struct sctp_ulpevent* FUNC_10 (struct sctp_association*,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (struct sctp_association*,scalar_t__) ;
 int FUNC_12 (int *,scalar_t__) ;

struct sctp_chunk *FUNC_13(
    struct sctp_association *VAR_8,
    union sctp_params VAR_9,
    struct sctp_ulpevent **VAR_10)
{
 __u32 VAR_11 = 0, VAR_12 = 0, VAR_13;
 struct sctp_strreset_tsnreq *VAR_14 = VAR_9.v;
 struct sctp_stream *VAR_15 = &VAR_8->stream;
 __u32 VAR_16 = VAR_2;
 __u32 VAR_17;
 __u16 VAR_18;

 VAR_17 = FUNC_3(VAR_14->request_seq);
 if (FUNC_2(VAR_8->strreset_inseq, VAR_17) ||
     FUNC_2(VAR_17, VAR_8->strreset_inseq - 2)) {
  VAR_16 = VAR_3;
  goto err;
 } else if (FUNC_2(VAR_17, VAR_8->strreset_inseq)) {
  VAR_18 = VAR_8->strreset_inseq - VAR_17 - 1;
  VAR_16 = VAR_8->strreset_result[VAR_18];
  if (VAR_16 == VAR_6) {
   VAR_12 = VAR_8->ctsn_ack_point + 1;
   VAR_11 =
    FUNC_7(&VAR_8->peer.tsn_map) + 1;
  }
  goto err;
 }

 if (!FUNC_6(&VAR_8->outqueue)) {
  VAR_16 = VAR_5;
  goto err;
 }

 VAR_8->strreset_inseq++;

 if (!(VAR_8->strreset_enable & VAR_1))
  goto out;

 if (VAR_8->strreset_outstanding) {
  VAR_16 = VAR_4;
  goto out;
 }






 VAR_13 = FUNC_8(&VAR_8->peer.tsn_map);
 VAR_8->stream.si->report_ftsn(&VAR_8->ulpq, VAR_13);






 VAR_11 = FUNC_7(&VAR_8->peer.tsn_map) + (1 << 31);
 FUNC_9(&VAR_8->peer.tsn_map, VAR_7,
    VAR_11, VAR_0);





 FUNC_5(&VAR_8->outqueue);






 VAR_12 = VAR_8->next_tsn;
 VAR_8->ctsn_ack_point = VAR_12 - 1;
 VAR_8->adv_peer_ack_point = VAR_8->ctsn_ack_point;




 for (VAR_18 = 0; VAR_18 < VAR_15->outcnt; VAR_18++) {
  FUNC_1(VAR_15, VAR_18)->mid = 0;
  FUNC_1(VAR_15, VAR_18)->mid_uo = 0;
 }
 for (VAR_18 = 0; VAR_18 < VAR_15->incnt; VAR_18++)
  FUNC_0(VAR_15, VAR_18)->mid = 0;

 VAR_16 = VAR_6;

 *VAR_10 = FUNC_10(VAR_8, 0, VAR_11,
          VAR_12, VAR_0);

out:
 FUNC_11(VAR_8, VAR_16);
err:
 return FUNC_4(VAR_8, VAR_16, VAR_17,
       VAR_12, VAR_11);
}
