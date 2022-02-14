
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sctp_cmd_seq*,int ,int ) ;

enum sctp_disposition FUNC_2(struct net *VAR_2,
         const struct sctp_endpoint *VAR_3,
         const struct sctp_association *VAR_4,
         const union sctp_subtype VAR_5,
         void *VAR_6,
         struct sctp_cmd_seq *VAR_7)
{
 struct sctp_chunk *VAR_8 = VAR_6;

 FUNC_1(VAR_7, VAR_0, FUNC_0(VAR_8));
 return VAR_1;
}
