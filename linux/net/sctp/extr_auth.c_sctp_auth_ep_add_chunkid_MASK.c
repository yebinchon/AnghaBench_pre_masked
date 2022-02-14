
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_paramhdr {int dummy; } ;
struct sctp_endpoint {struct sctp_chunks_param* auth_chunk_list; } ;
struct TYPE_2__ {int length; } ;
struct sctp_chunks_param {TYPE_1__ param_hdr; int * chunks; } ;
typedef int __u8 ;
typedef size_t __u16 ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct sctp_chunks_param*) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;

int FUNC_3(struct sctp_endpoint *VAR_2, __u8 VAR_3)
{
 struct sctp_chunks_param *VAR_4 = VAR_2->auth_chunk_list;
 __u16 VAR_5;
 __u16 VAR_6;


 if (FUNC_0(VAR_3, VAR_4))
  return 0;


 VAR_6 = FUNC_2(VAR_4->param_hdr.length);
 VAR_5 = VAR_6 - sizeof(struct sctp_paramhdr);
 if (VAR_5 == VAR_1)
  return -VAR_0;

 VAR_4->chunks[VAR_5] = VAR_3;
 VAR_4->param_hdr.length = FUNC_1(VAR_6 + 1);
 return 0;
}
