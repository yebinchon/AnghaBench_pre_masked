
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_association {int outqueue; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;

enum sctp_disposition FUNC_5(
     struct net *VAR_4,
     const struct sctp_endpoint *VAR_5,
     const struct sctp_association *VAR_6,
     const union sctp_subtype VAR_7,
     void *VAR_8,
     struct sctp_cmd_seq *VAR_9)
{
 enum sctp_disposition VAR_10;

 FUNC_0(VAR_4, VAR_2);
 FUNC_2(VAR_9, VAR_0,
   FUNC_1(VAR_3));

 VAR_10 = VAR_1;
 if (FUNC_3(&VAR_6->outqueue)) {
  VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7,
           VAR_8, VAR_9);
 }

 return VAR_10;
}
