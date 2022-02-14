
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
 int FUNC_0 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sctp_chunk*,int) ;
 int FUNC_3 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_4 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_5 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_6(
     struct net *VAR_1,
     const struct sctp_endpoint *VAR_2,
     const struct sctp_association *VAR_3,
     const union sctp_subtype VAR_4,
     void *VAR_5,
     struct sctp_cmd_seq *VAR_6)
{
 struct sctp_chunk *VAR_7 = VAR_5;

 if (!FUNC_5(VAR_7, VAR_3))
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (!FUNC_2(VAR_7, sizeof(struct sctp_abort_chunk)))
  return FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);






 if (VAR_0 ==
      FUNC_1(&VAR_3->base.bind_addr, &VAR_7->dest))
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
