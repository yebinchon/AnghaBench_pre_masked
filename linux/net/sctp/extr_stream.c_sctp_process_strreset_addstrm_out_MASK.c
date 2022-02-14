
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union sctp_params {struct sctp_strreset_addstrm* v; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_transport {int reconf_timer; } ;
struct sctp_strreset_addstrm {int number_of_streams; int request_seq; } ;
struct sctp_stream {size_t incnt; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ strreset_inseq; scalar_t__* strreset_result; int strreset_enable; TYPE_1__* strreset_chunk; int strreset_outstanding; int strreset_outseq; struct sctp_stream stream; } ;
typedef scalar_t__ __u32 ;
typedef size_t __u16 ;
struct TYPE_2__ {struct sctp_transport* transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_association*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sctp_stream*,scalar_t__,int ) ;
 int FUNC_8 (struct sctp_transport*) ;
 struct sctp_ulpevent* FUNC_9 (struct sctp_association*,int ,size_t,int ,int ) ;
 int FUNC_10 (struct sctp_association*,scalar_t__) ;

struct sctp_chunk *FUNC_11(
    struct sctp_association *VAR_8,
    union sctp_params VAR_9,
    struct sctp_ulpevent **VAR_10)
{
 struct sctp_strreset_addstrm *VAR_11 = VAR_9.v;
 struct sctp_stream *VAR_12 = &VAR_8->stream;
 __u32 VAR_13 = VAR_4;
 __u32 VAR_14, VAR_15;
 __u16 VAR_16, VAR_17;

 VAR_14 = FUNC_2(VAR_11->request_seq);
 if (FUNC_0(VAR_8->strreset_inseq, VAR_14) ||
     FUNC_0(VAR_14, VAR_8->strreset_inseq - 2)) {
  VAR_13 = VAR_5;
  goto err;
 } else if (FUNC_0(VAR_14, VAR_8->strreset_inseq)) {
  VAR_17 = VAR_8->strreset_inseq - VAR_14 - 1;
  VAR_13 = VAR_8->strreset_result[VAR_17];
  goto err;
 }
 VAR_8->strreset_inseq++;

 if (!(VAR_8->strreset_enable & VAR_1))
  goto out;

 VAR_16 = FUNC_3(VAR_11->number_of_streams);
 VAR_15 = VAR_12->incnt + VAR_16;
 if (!VAR_16 || VAR_15 > VAR_2)
  goto out;

 if (FUNC_7(VAR_12, VAR_15, VAR_0))
  goto out;

 if (VAR_8->strreset_chunk) {
  if (!FUNC_4(
   VAR_8, 0, VAR_3)) {

   VAR_13 = VAR_6;
   goto out;
  }

  VAR_8->strreset_outstanding--;
  VAR_8->strreset_outseq++;

  if (!VAR_8->strreset_outstanding) {
   struct sctp_transport *VAR_18;

   VAR_18 = VAR_8->strreset_chunk->transport;
   if (FUNC_1(&VAR_18->reconf_timer))
    FUNC_8(VAR_18);

   FUNC_5(VAR_8->strreset_chunk);
   VAR_8->strreset_chunk = ((void*)0);
  }
 }

 VAR_12->incnt = VAR_15;

 VAR_13 = VAR_7;

 *VAR_10 = FUNC_9(VAR_8,
  0, FUNC_3(VAR_11->number_of_streams), 0, VAR_0);

out:
 FUNC_10(VAR_8, VAR_13);
err:
 return FUNC_6(VAR_8, VAR_13, VAR_14);
}
