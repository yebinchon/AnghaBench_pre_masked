
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;

enum sctp_disposition FUNC_7(
     struct net *VAR_11,
     const struct sctp_endpoint *VAR_12,
     const struct sctp_association *VAR_13,
     const union sctp_subtype VAR_14,
     void *VAR_15,
     struct sctp_cmd_seq *VAR_16)
{
 struct sctp_chunk *VAR_17 = VAR_15;


 FUNC_6(VAR_16, VAR_5,
   FUNC_5(VAR_8));

 if (VAR_17)
  FUNC_6(VAR_16, VAR_3, FUNC_0(VAR_17));

 FUNC_6(VAR_16, VAR_2,
   FUNC_4(VAR_10));

 FUNC_2(VAR_11, VAR_9);





 FUNC_6(VAR_16, VAR_4,
   FUNC_1(VAR_0));

 FUNC_6(VAR_16, VAR_1,
   FUNC_3(VAR_7));

 return VAR_6;
}
