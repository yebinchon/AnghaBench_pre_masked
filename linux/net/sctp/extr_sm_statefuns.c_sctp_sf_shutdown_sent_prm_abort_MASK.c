
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_2 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;

enum sctp_disposition FUNC_3(
     struct net *VAR_3,
     const struct sctp_endpoint *VAR_4,
     const struct sctp_association *VAR_5,
     const union sctp_subtype VAR_6,
     void *VAR_7,
     struct sctp_cmd_seq *VAR_8)
{

 FUNC_1(VAR_8, VAR_0,
   FUNC_0(VAR_1));


 FUNC_1(VAR_8, VAR_0,
   FUNC_0(VAR_2));

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
