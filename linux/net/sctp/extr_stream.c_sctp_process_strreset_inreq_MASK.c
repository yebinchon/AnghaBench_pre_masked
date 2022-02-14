
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union sctp_params {TYPE_1__* p; struct sctp_strreset_inreq* v; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_strreset_inreq {int * list_of_streams; int request_seq; } ;
struct sctp_stream {size_t outcnt; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ strreset_inseq; scalar_t__* strreset_result; int strreset_enable; int strreset_outstanding; struct sctp_chunk* strreset_chunk; struct sctp_stream stream; } ;
typedef scalar_t__ __u32 ;
typedef size_t __u16 ;
typedef int __be16 ;
struct TYPE_4__ {void* state; } ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sctp_stream*,size_t) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association*,size_t,int *,int,int ) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct sctp_stream*,size_t,int *) ;
 int FUNC_8 (struct sctp_association*,scalar_t__) ;

struct sctp_chunk *FUNC_9(
    struct sctp_association *VAR_8,
    union sctp_params VAR_9,
    struct sctp_ulpevent **VAR_10)
{
 struct sctp_strreset_inreq *VAR_11 = VAR_9.v;
 struct sctp_stream *VAR_12 = &VAR_8->stream;
 __u32 VAR_13 = VAR_2;
 struct sctp_chunk *VAR_14 = ((void*)0);
 __u32 VAR_15;
 __u16 VAR_16, VAR_17;
 __be16 *VAR_18;

 VAR_15 = FUNC_2(VAR_11->request_seq);
 if (FUNC_1(VAR_8->strreset_inseq, VAR_15) ||
     FUNC_1(VAR_15, VAR_8->strreset_inseq - 2)) {
  VAR_13 = VAR_3;
  goto err;
 } else if (FUNC_1(VAR_15, VAR_8->strreset_inseq)) {
  VAR_16 = VAR_8->strreset_inseq - VAR_15 - 1;
  VAR_13 = VAR_8->strreset_result[VAR_16];
  if (VAR_13 == VAR_7)
   return ((void*)0);
  goto err;
 }
 VAR_8->strreset_inseq++;

 if (!(VAR_8->strreset_enable & VAR_0))
  goto out;

 if (VAR_8->strreset_outstanding) {
  VAR_13 = VAR_4;
  goto out;
 }

 VAR_17 = (FUNC_3(VAR_9.p->length) - sizeof(*VAR_11)) / sizeof(__u16);
 VAR_18 = VAR_11->list_of_streams;
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  if (FUNC_3(VAR_18[VAR_16]) >= VAR_12->outcnt) {
   VAR_13 = VAR_5;
   goto out;
  }
 }

 if (!FUNC_7(VAR_12, VAR_17, VAR_18)) {
  VAR_13 = VAR_6;
  VAR_8->strreset_inseq--;
  goto err;
 }

 VAR_14 = FUNC_5(VAR_8, VAR_17, VAR_18, 1, 0);
 if (!VAR_14)
  goto out;

 if (VAR_17)
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
   FUNC_0(VAR_12, FUNC_3(VAR_18[VAR_16]))->state =
            VAR_1;
 else
  for (VAR_16 = 0; VAR_16 < VAR_12->outcnt; VAR_16++)
   FUNC_0(VAR_12, VAR_16)->state = VAR_1;

 VAR_8->strreset_chunk = VAR_14;
 VAR_8->strreset_outstanding = 1;
 FUNC_4(VAR_8->strreset_chunk);

 VAR_13 = VAR_7;

out:
 FUNC_8(VAR_8, VAR_13);
err:
 if (!VAR_14)
  VAR_14 = FUNC_6(VAR_8, VAR_13, VAR_15);

 return VAR_14;
}
