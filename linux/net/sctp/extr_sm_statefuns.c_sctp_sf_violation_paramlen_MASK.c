
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_paramhdr {int dummy; } ;
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
 int FUNC_1 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (struct net*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,struct sctp_association const*) ;
 struct sctp_chunk* FUNC_8 (struct sctp_association const*,struct sctp_chunk*,struct sctp_paramhdr*) ;
 int FUNC_9 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,void*,struct sctp_cmd_seq*) ;

__attribute__((used)) static enum sctp_disposition FUNC_10(
     struct net *VAR_11,
     const struct sctp_endpoint *VAR_12,
     const struct sctp_association *VAR_13,
     const union sctp_subtype VAR_14,
     void *VAR_15, void *VAR_16,
     struct sctp_cmd_seq *VAR_17)
{
 struct sctp_paramhdr *VAR_18 = VAR_16;
 struct sctp_chunk *VAR_19 = ((void*)0);
 struct sctp_chunk *VAR_20 = VAR_15;

 if (FUNC_7(VAR_1, VAR_13))
  goto discard;


 VAR_19 = FUNC_8(VAR_13, VAR_20, VAR_18);
 if (!VAR_19)
  goto nomem;

 FUNC_6(VAR_17, VAR_3, FUNC_0(VAR_19));
 FUNC_3(VAR_11, VAR_10);

 FUNC_6(VAR_17, VAR_4,
   FUNC_2(VAR_0));
 FUNC_6(VAR_17, VAR_2,
   FUNC_4(VAR_7));
 FUNC_1(VAR_11, VAR_9);
 FUNC_3(VAR_11, VAR_8);

discard:
 FUNC_9(VAR_11, VAR_12, VAR_13, FUNC_5(0), VAR_15, VAR_17);
 return VAR_5;
nomem:
 return VAR_6;
}
