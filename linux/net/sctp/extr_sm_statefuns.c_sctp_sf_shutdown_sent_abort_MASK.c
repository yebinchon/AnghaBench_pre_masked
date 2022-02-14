
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {int dest; } ;
struct TYPE_2__ {int bind_addr; } ;
struct sctp_association {TYPE_1__ base; } ;
struct sctp_abort_chunk {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sctp_chunk*,int) ;
 int FUNC_5 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_6 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_7 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_8(
     struct net *VAR_4,
     const struct sctp_endpoint *VAR_5,
     const struct sctp_association *VAR_6,
     const union sctp_subtype VAR_7,
     void *VAR_8,
     struct sctp_cmd_seq *VAR_9)
{
 struct sctp_chunk *VAR_10 = VAR_8;

 if (!FUNC_7(VAR_10, VAR_6))
  return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (!FUNC_4(VAR_10, sizeof(struct sctp_abort_chunk)))
  return FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);






 if (VAR_0 ==
      FUNC_3(&VAR_6->base.bind_addr, &VAR_10->dest))
  return FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);


 FUNC_2(VAR_9, VAR_1,
   FUNC_0(VAR_2));


 FUNC_2(VAR_9, VAR_1,
   FUNC_0(VAR_3));

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
