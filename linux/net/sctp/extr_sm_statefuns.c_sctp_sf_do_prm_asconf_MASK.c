
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;

enum sctp_disposition FUNC_3(struct net *VAR_5,
         const struct sctp_endpoint *VAR_6,
         const struct sctp_association *VAR_7,
         const union sctp_subtype VAR_8,
         void *VAR_9,
         struct sctp_cmd_seq *VAR_10)
{
 struct sctp_chunk *VAR_11 = VAR_9;

 FUNC_2(VAR_10, VAR_1, FUNC_0(VAR_11));
 FUNC_2(VAR_10, VAR_2,
   FUNC_1(VAR_4));
 FUNC_2(VAR_10, VAR_0, FUNC_0(VAR_11));
 return VAR_3;
}
