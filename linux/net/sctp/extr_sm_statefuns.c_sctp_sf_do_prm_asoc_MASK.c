
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dummy; } ;
struct TYPE_2__ {int bind_addr; } ;
struct sctp_association {TYPE_1__ base; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 int VAR_0 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,int *,int ,int ) ;

enum sctp_disposition FUNC_6(struct net *VAR_10,
       const struct sctp_endpoint *VAR_11,
       const struct sctp_association *VAR_12,
       const union sctp_subtype VAR_13,
       void *VAR_14,
       struct sctp_cmd_seq *VAR_15)
{
 struct sctp_association *VAR_16;
 struct sctp_chunk *VAR_17;





 FUNC_4(VAR_15, VAR_3,
   FUNC_2(VAR_9));
 VAR_17 = FUNC_5(VAR_12, &VAR_12->base.bind_addr, VAR_0, 0);
 if (!VAR_17)
  goto nomem;


 FUNC_4(VAR_15, VAR_1,
   FUNC_1(VAR_17));




 VAR_16 = (struct sctp_association *)VAR_12;
 FUNC_4(VAR_15, VAR_2, FUNC_0(VAR_16));




 FUNC_4(VAR_15, VAR_5,
   FUNC_3(VAR_8));
 FUNC_4(VAR_15, VAR_4, FUNC_1(VAR_17));
 return VAR_6;

nomem:
 return VAR_7;
}
