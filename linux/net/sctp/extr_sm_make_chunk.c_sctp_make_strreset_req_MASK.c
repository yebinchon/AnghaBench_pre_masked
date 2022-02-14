
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; int type; } ;
struct sctp_strreset_outreq {void* request_seq; TYPE_1__ param_hdr; void* send_reset_at_tsn; void* response_seq; } ;
struct sctp_strreset_inreq {void* request_seq; TYPE_1__ param_hdr; void* send_reset_at_tsn; void* response_seq; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ strreset_outseq; scalar_t__ next_tsn; scalar_t__ strreset_inseq; } ;
typedef int outreq ;
typedef int inreq ;
typedef int __u16 ;
typedef struct sctp_strreset_outreq __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_strreset_outreq*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,int) ;

struct sctp_chunk *FUNC_4(
     const struct sctp_association *VAR_2,
     __u16 VAR_3, __be16 *VAR_4,
     bool VAR_5, bool VAR_6)
{
 __u16 VAR_7 = VAR_3 * sizeof(__u16);
 struct sctp_strreset_outreq VAR_8;
 struct sctp_strreset_inreq VAR_9;
 struct sctp_chunk *VAR_10;
 __u16 VAR_11, VAR_12;

 VAR_11 = (sizeof(VAR_8) + VAR_7) * VAR_5;
 VAR_12 = (sizeof(VAR_9) + VAR_7) * VAR_6;

 VAR_10 = FUNC_3(VAR_2, VAR_11 + VAR_12);
 if (!VAR_10)
  return ((void*)0);

 if (VAR_11) {
  VAR_8.param_hdr.type = VAR_1;
  VAR_8.param_hdr.length = FUNC_1(VAR_11);
  VAR_8.request_seq = FUNC_0(VAR_2->strreset_outseq);
  VAR_8.response_seq = FUNC_0(VAR_2->strreset_inseq - 1);
  VAR_8.send_reset_at_tsn = FUNC_0(VAR_2->next_tsn - 1);

  FUNC_2(VAR_10, sizeof(VAR_8), &VAR_8);

  if (VAR_7)
   FUNC_2(VAR_10, VAR_7, VAR_4);
 }

 if (VAR_12) {
  VAR_9.param_hdr.type = VAR_0;
  VAR_9.param_hdr.length = FUNC_1(VAR_12);
  VAR_9.request_seq = FUNC_0(VAR_2->strreset_outseq + VAR_5);

  FUNC_2(VAR_10, sizeof(VAR_9), &VAR_9);

  if (VAR_7)
   FUNC_2(VAR_10, VAR_7, VAR_4);
 }

 return VAR_10;
}
