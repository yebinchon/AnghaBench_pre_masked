
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
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
 int FUNC_1 (struct net*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 int FUNC_4 (int ) ;
 int VAR_13 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_ulpevent*) ;
 int FUNC_7 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_8 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_9 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_10 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_11 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_12 (struct sctp_ulpevent*) ;
 struct sctp_ulpevent* FUNC_13 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_14 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_15(struct net *VAR_14,
        const struct sctp_endpoint *VAR_15,
        const struct sctp_association *VAR_16,
        const union sctp_subtype VAR_17,
        void *VAR_18,
        struct sctp_cmd_seq *VAR_19)
{
 struct sctp_chunk *VAR_20 = VAR_18;
 struct sctp_chunk *VAR_21;
 struct sctp_ulpevent *VAR_22;

 if (!FUNC_14(VAR_20, VAR_16))
  return FUNC_10(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);


 if (!FUNC_8(VAR_20, sizeof(struct sctp_chunkhdr)))
  return FUNC_11(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_19);





 VAR_22 = FUNC_13(VAR_16, 0, VAR_12,
          0, 0, 0, ((void*)0), VAR_0);
 if (!VAR_22)
  goto nomem;


 VAR_21 = FUNC_9(VAR_16, VAR_20);
 if (!VAR_21)
  goto nomem_chunk;




 FUNC_7(VAR_19, VAR_2, FUNC_6(VAR_22));




 FUNC_7(VAR_19, VAR_5,
   FUNC_5(VAR_8));

 FUNC_7(VAR_19, VAR_5,
   FUNC_5(VAR_9));

 FUNC_7(VAR_19, VAR_3,
   FUNC_4(VAR_13));
 FUNC_2(VAR_14, VAR_11);
 FUNC_1(VAR_14, VAR_10);
 FUNC_7(VAR_19, VAR_4, FUNC_0(VAR_21));


 FUNC_7(VAR_19, VAR_1, FUNC_3());
 return VAR_6;

nomem_chunk:
 FUNC_12(VAR_22);
nomem:
 return VAR_7;
}
