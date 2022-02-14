
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_subtype {int dummy; } sctp_subtype ;
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
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,int *) ;

enum sctp_disposition FUNC_6(
     struct net *VAR_13,
     const struct sctp_endpoint *VAR_14,
     const struct sctp_association *VAR_15,
     const union sctp_subtype VAR_16,
     void *VAR_17,
     struct sctp_cmd_seq *VAR_18)
{
 struct sctp_chunk *VAR_19;






 VAR_19 = FUNC_5(VAR_15, ((void*)0));
 if (!VAR_19)
  goto nomem;




 FUNC_4(VAR_18, VAR_3, FUNC_0(VAR_19));


 FUNC_4(VAR_18, VAR_5,
   FUNC_3(VAR_10));





 FUNC_4(VAR_18, VAR_4,
   FUNC_3(VAR_11));

 if (VAR_15->timeouts[VAR_9])
  FUNC_4(VAR_18, VAR_6,
    FUNC_3(VAR_9));


 FUNC_4(VAR_18, VAR_1,
   FUNC_2(VAR_12));






 FUNC_4(VAR_18, VAR_0, FUNC_1());

 FUNC_4(VAR_18, VAR_2, FUNC_0(VAR_19));

 return VAR_7;

nomem:
 return VAR_8;
}
