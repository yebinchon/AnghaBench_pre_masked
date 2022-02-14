
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sctp_ulpevent*) ;
 int FUNC_1 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_ulpevent* FUNC_2 (struct sctp_association const*,int ) ;

enum sctp_disposition FUNC_3(
     struct net *VAR_4,
     const struct sctp_endpoint *VAR_5,
     const struct sctp_association *VAR_6,
     const union sctp_subtype VAR_7,
     void *VAR_8,
     struct sctp_cmd_seq *VAR_9)
{
 struct sctp_ulpevent *VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_0);
 if (!VAR_10)
  return VAR_3;

 FUNC_1(VAR_9, VAR_1, FUNC_0(VAR_10));

 return VAR_2;
}
