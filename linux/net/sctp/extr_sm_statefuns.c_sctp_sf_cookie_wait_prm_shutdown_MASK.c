
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;

enum sctp_disposition FUNC_5(
     struct net *VAR_7,
     const struct sctp_endpoint *VAR_8,
     const struct sctp_association *VAR_9,
     const union sctp_subtype VAR_10,
     void *VAR_11,
     struct sctp_cmd_seq *VAR_12)
{
 FUNC_4(VAR_12, VAR_2,
   FUNC_3(VAR_4));

 FUNC_4(VAR_12, VAR_1,
   FUNC_2(VAR_6));

 FUNC_0(VAR_7, VAR_5);

 FUNC_4(VAR_12, VAR_0, FUNC_1());

 return VAR_3;
}
