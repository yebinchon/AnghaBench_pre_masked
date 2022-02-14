
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sctp_params {struct sctp_strreset_addstrm* v; } ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_strreset_addstrm {int number_of_streams; int request_seq; } ;
struct sctp_stream {size_t outcnt; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ strreset_inseq; scalar_t__* strreset_result; int strreset_enable; int strreset_outstanding; struct sctp_chunk* strreset_chunk; struct sctp_stream stream; } ;
typedef scalar_t__ __u32 ;
typedef size_t __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_chunk*) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association*,size_t,int ) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct sctp_stream*,scalar_t__,int ) ;
 int FUNC_7 (struct sctp_association*,scalar_t__) ;

struct sctp_chunk *FUNC_8(
    struct sctp_association *VAR_7,
    union sctp_params VAR_8,
    struct sctp_ulpevent **VAR_9)
{
 struct sctp_strreset_addstrm *VAR_10 = VAR_8.v;
 struct sctp_stream *VAR_11 = &VAR_7->stream;
 __u32 VAR_12 = VAR_3;
 struct sctp_chunk *VAR_13 = ((void*)0);
 __u32 VAR_14, VAR_15;
 __u16 VAR_16, VAR_17;
 int VAR_18;

 VAR_14 = FUNC_1(VAR_10->request_seq);
 if (FUNC_0(VAR_7->strreset_inseq, VAR_14) ||
     FUNC_0(VAR_14, VAR_7->strreset_inseq - 2)) {
  VAR_12 = VAR_4;
  goto err;
 } else if (FUNC_0(VAR_14, VAR_7->strreset_inseq)) {
  VAR_17 = VAR_7->strreset_inseq - VAR_14 - 1;
  VAR_12 = VAR_7->strreset_result[VAR_17];
  if (VAR_12 == VAR_6)
   return ((void*)0);
  goto err;
 }
 VAR_7->strreset_inseq++;

 if (!(VAR_7->strreset_enable & VAR_1))
  goto out;

 if (VAR_7->strreset_outstanding) {
  VAR_12 = VAR_5;
  goto out;
 }

 VAR_16 = FUNC_2(VAR_10->number_of_streams);
 VAR_15 = VAR_11->outcnt + VAR_16;
 if (!VAR_16 || VAR_15 > VAR_2)
  goto out;

 VAR_18 = FUNC_6(VAR_11, VAR_15, VAR_0);
 if (VAR_18)
  goto out;

 VAR_13 = FUNC_4(VAR_7, VAR_16, 0);
 if (!VAR_13)
  goto out;

 VAR_7->strreset_chunk = VAR_13;
 VAR_7->strreset_outstanding = 1;
 FUNC_3(VAR_7->strreset_chunk);

 VAR_11->outcnt = VAR_15;

 VAR_12 = VAR_6;

out:
 FUNC_7(VAR_7, VAR_12);
err:
 if (!VAR_13)
  VAR_13 = FUNC_5(VAR_7, VAR_12, VAR_14);

 return VAR_13;
}
