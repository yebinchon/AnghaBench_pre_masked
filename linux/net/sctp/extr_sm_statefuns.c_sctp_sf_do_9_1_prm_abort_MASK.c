
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


 int VAR_0 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_cmd_seq*,int ,int ) ;

enum sctp_disposition FUNC_6(
     struct net *VAR_8,
     const struct sctp_endpoint *VAR_9,
     const struct sctp_association *VAR_10,
     const union sctp_subtype VAR_11,
     void *VAR_12,
     struct sctp_cmd_seq *VAR_13)
{
 struct sctp_chunk *VAR_14 = VAR_12;

 if (VAR_14)
  FUNC_5(VAR_13, VAR_2, FUNC_0(VAR_14));





 FUNC_5(VAR_13, VAR_3,
   FUNC_2(VAR_0));

 FUNC_5(VAR_13, VAR_1,
   FUNC_4(VAR_5));

 FUNC_3(VAR_8, VAR_6);
 FUNC_1(VAR_8, VAR_7);

 return VAR_4;
}
