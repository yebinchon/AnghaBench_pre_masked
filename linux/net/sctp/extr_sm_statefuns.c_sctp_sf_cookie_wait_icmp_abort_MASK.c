
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_transport {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct sctp_cmd_seq*,int ,int ,struct sctp_association const*,struct sctp_transport*) ;

enum sctp_disposition FUNC_1(
     struct net *VAR_2,
     const struct sctp_endpoint *VAR_3,
     const struct sctp_association *VAR_4,
     const union sctp_subtype VAR_5,
     void *VAR_6,
     struct sctp_cmd_seq *VAR_7)
{
 return FUNC_0(VAR_2, VAR_7, VAR_1,
          VAR_0, VAR_4,
          (struct sctp_transport *)VAR_6);
}
