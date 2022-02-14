
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


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_3 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_5 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;

enum sctp_disposition FUNC_6(
     struct net *VAR_6,
     const struct sctp_endpoint *VAR_7,
     const struct sctp_association *VAR_8,
     const union sctp_subtype VAR_9,
     void *VAR_10,
     struct sctp_cmd_seq *VAR_11)
{
 struct sctp_chunk *VAR_12 = VAR_10;
 struct sctp_chunk *VAR_13;


 if (!FUNC_3(VAR_12, sizeof(struct sctp_chunkhdr)))
  return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
        VAR_11);





 VAR_13 = FUNC_4(VAR_8, VAR_12);
 if (((void*)0) == VAR_13)
  goto nomem;




 FUNC_2(VAR_11, VAR_1, FUNC_0(VAR_13));


 FUNC_2(VAR_11, VAR_2,
   FUNC_1(VAR_5));

 FUNC_2(VAR_11, VAR_0, FUNC_0(VAR_13));

 return VAR_3;
nomem:
 return VAR_4;
}
