
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; int type; } ;
struct sctp_strreset_addstrm {scalar_t__ reserved; void* request_seq; void* number_of_streams; TYPE_1__ param_hdr; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__ strreset_outseq; } ;
typedef int addstrm ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_strreset_addstrm*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,int) ;

struct sctp_chunk *FUNC_4(
     const struct sctp_association *VAR_2,
     __u16 VAR_3, __u16 VAR_4)
{
 struct sctp_strreset_addstrm VAR_5;
 __u16 VAR_6 = sizeof(VAR_5);
 struct sctp_chunk *VAR_7;

 VAR_7 = FUNC_3(VAR_2, (!!VAR_3 + !!VAR_4) * VAR_6);
 if (!VAR_7)
  return ((void*)0);

 if (VAR_3) {
  VAR_5.param_hdr.type = VAR_1;
  VAR_5.param_hdr.length = FUNC_1(VAR_6);
  VAR_5.number_of_streams = FUNC_1(VAR_3);
  VAR_5.request_seq = FUNC_0(VAR_2->strreset_outseq);
  VAR_5.reserved = 0;

  FUNC_2(VAR_7, VAR_6, &VAR_5);
 }

 if (VAR_4) {
  VAR_5.param_hdr.type = VAR_0;
  VAR_5.param_hdr.length = FUNC_1(VAR_6);
  VAR_5.number_of_streams = FUNC_1(VAR_4);
  VAR_5.request_seq = FUNC_0(VAR_2->strreset_outseq + !!VAR_3);
  VAR_5.reserved = 0;

  FUNC_2(VAR_7, VAR_6, &VAR_5);
 }

 return VAR_7;
}
