
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*,int) ;
 int FUNC_1 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;

enum sctp_disposition FUNC_2(struct net *VAR_1,
     const struct sctp_endpoint *VAR_2,
     const struct sctp_association *VAR_3,
     const union sctp_subtype VAR_4,
     void *VAR_5,
     struct sctp_cmd_seq *VAR_6)
{
 struct sctp_chunk *VAR_7 = VAR_5;


 if (!FUNC_0(VAR_7, sizeof(struct sctp_chunkhdr)))
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6);

 return VAR_0;
}
