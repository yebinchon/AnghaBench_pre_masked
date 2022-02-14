
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsnresp ;
struct TYPE_2__ {int length; int type; } ;
struct sctp_strreset_resptsn {void* receivers_next_tsn; void* senders_next_tsn; void* result; void* response_seq; TYPE_1__ param_hdr; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_strreset_resptsn*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association*,int) ;

struct sctp_chunk *FUNC_4(struct sctp_association *VAR_1,
           __u32 VAR_2, __u32 VAR_3,
           __u32 VAR_4,
           __u32 VAR_5)
{
 struct sctp_strreset_resptsn VAR_6;
 __u16 VAR_7 = sizeof(VAR_6);
 struct sctp_chunk *VAR_8;

 VAR_8 = FUNC_3(VAR_1, VAR_7);
 if (!VAR_8)
  return ((void*)0);

 VAR_6.param_hdr.type = VAR_0;
 VAR_6.param_hdr.length = FUNC_1(VAR_7);

 VAR_6.response_seq = FUNC_0(VAR_3);
 VAR_6.result = FUNC_0(VAR_2);
 VAR_6.senders_next_tsn = FUNC_0(VAR_4);
 VAR_6.receivers_next_tsn = FUNC_0(VAR_5);

 FUNC_2(VAR_8, sizeof(VAR_6), &VAR_6);

 return VAR_8;
}
