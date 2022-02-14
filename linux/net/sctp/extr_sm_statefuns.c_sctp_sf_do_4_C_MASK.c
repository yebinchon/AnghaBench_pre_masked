
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_ulpevent {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {int singleton; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct net*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_7 (struct sctp_chunk*,int) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_9 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_10 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 struct sctp_ulpevent* FUNC_11 (struct sctp_association const*,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_12 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_13(struct net *VAR_12,
         const struct sctp_endpoint *VAR_13,
         const struct sctp_association *VAR_14,
         const union sctp_subtype VAR_15,
         void *VAR_16, struct sctp_cmd_seq *VAR_17)
{
 struct sctp_chunk *VAR_18 = VAR_16;
 struct sctp_ulpevent *VAR_19;

 if (!FUNC_12(VAR_18, VAR_14))
  return FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);






 if (!VAR_18->singleton)
  return FUNC_9(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);


 if (!FUNC_7(VAR_18, sizeof(struct sctp_chunkhdr)))
  return FUNC_10(VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
        VAR_17);
 VAR_19 = FUNC_11(VAR_14, 0, VAR_10,
          0, 0, 0, ((void*)0), VAR_0);
 if (VAR_19)
  FUNC_6(VAR_17, VAR_2,
    FUNC_5(VAR_19));
 FUNC_6(VAR_17, VAR_4,
   FUNC_4(VAR_6));

 FUNC_6(VAR_17, VAR_4,
   FUNC_4(VAR_7));

 FUNC_6(VAR_17, VAR_3,
   FUNC_3(VAR_11));

 FUNC_1(VAR_12, VAR_9);
 FUNC_0(VAR_12, VAR_8);

 FUNC_6(VAR_17, VAR_1, FUNC_2());

 return VAR_5;
}
