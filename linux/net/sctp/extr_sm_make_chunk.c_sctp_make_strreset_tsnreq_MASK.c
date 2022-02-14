
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsnreq ;
struct TYPE_2__ {int length; int type; } ;
struct sctp_strreset_tsnreq {int request_seq; TYPE_1__ param_hdr; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int strreset_outseq; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_strreset_tsnreq*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,int) ;

struct sctp_chunk *FUNC_4(
     const struct sctp_association *VAR_1)
{
 struct sctp_strreset_tsnreq VAR_2;
 __u16 VAR_3 = sizeof(VAR_2);
 struct sctp_chunk *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 VAR_2.param_hdr.type = VAR_0;
 VAR_2.param_hdr.length = FUNC_1(VAR_3);
 VAR_2.request_seq = FUNC_0(VAR_1->strreset_outseq);

 FUNC_2(VAR_4, sizeof(VAR_2), &VAR_2);

 return VAR_4;
}
