
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int type; } ;
struct sctp_strreset_resp {void* result; void* response_seq; TYPE_1__ param_hdr; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
typedef int resp ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sctp_chunk*,int,struct sctp_strreset_resp*) ;
 struct sctp_chunk* FUNC_3 (struct sctp_association const*,int) ;

struct sctp_chunk *FUNC_4(const struct sctp_association *VAR_1,
        __u32 VAR_2, __u32 VAR_3)
{
 struct sctp_strreset_resp VAR_4;
 __u16 VAR_5 = sizeof(VAR_4);
 struct sctp_chunk *VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 VAR_4.param_hdr.type = VAR_0;
 VAR_4.param_hdr.length = FUNC_1(VAR_5);
 VAR_4.response_seq = FUNC_0(VAR_3);
 VAR_4.result = FUNC_0(VAR_2);

 FUNC_2(VAR_6, sizeof(VAR_4), &VAR_4);

 return VAR_6;
}
