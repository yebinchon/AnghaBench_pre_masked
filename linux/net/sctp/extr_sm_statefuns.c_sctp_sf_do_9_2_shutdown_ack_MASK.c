
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_shutdown_chunk {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct sctp_association {scalar_t__* timeouts; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_5 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_6 (struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_7 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_9 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_10(
     struct net *VAR_11,
     const struct sctp_endpoint *VAR_12,
     const struct sctp_association *VAR_13,
     const union sctp_subtype VAR_14,
     void *VAR_15,
     struct sctp_cmd_seq *VAR_16)
{
 struct sctp_chunk *VAR_17 = VAR_15;
 struct sctp_chunk *VAR_18;
 if (VAR_17) {
  if (!FUNC_9(VAR_17, VAR_13))
   return FUNC_7(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
      VAR_16);


  if (!FUNC_5(
    VAR_17, sizeof(struct sctp_shutdown_chunk)))
   return FUNC_8(VAR_11, VAR_12, VAR_13, VAR_14,
         VAR_15, VAR_16);
 }




 VAR_18 = FUNC_6(VAR_13, VAR_17);
 if (!VAR_18)
  goto nomem;




 FUNC_4(VAR_16, VAR_3, FUNC_0(VAR_18));


 FUNC_4(VAR_16, VAR_4,
   FUNC_3(VAR_9));

 if (VAR_13->timeouts[VAR_8])
  FUNC_4(VAR_16, VAR_5,
    FUNC_3(VAR_8));


 FUNC_4(VAR_16, VAR_1,
   FUNC_2(VAR_10));






 FUNC_4(VAR_16, VAR_0, FUNC_1());

 FUNC_4(VAR_16, VAR_2, FUNC_0(VAR_18));

 return VAR_6;

nomem:
 return VAR_7;
}
