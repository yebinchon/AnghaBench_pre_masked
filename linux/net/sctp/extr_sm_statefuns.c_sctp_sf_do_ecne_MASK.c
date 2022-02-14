
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_endpoint {int dummy; } ;
struct sctp_ecnehdr {int lowest_tsn; } ;
struct sctp_ecne_chunk {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {TYPE_1__* skb; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_3 (struct sctp_chunk*,int) ;
 int FUNC_4 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_5 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_6 (struct sctp_chunk*,struct sctp_association const*) ;
 int FUNC_7 (TYPE_1__*,int) ;

enum sctp_disposition FUNC_8(struct net *VAR_2,
          const struct sctp_endpoint *VAR_3,
          const struct sctp_association *VAR_4,
          const union sctp_subtype VAR_5,
          void *VAR_6, struct sctp_cmd_seq *VAR_7)
{
 struct sctp_chunk *VAR_8 = VAR_6;
 struct sctp_ecnehdr *VAR_9;

 if (!FUNC_6(VAR_8, VAR_4))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if (!FUNC_3(VAR_8, sizeof(struct sctp_ecne_chunk)))
  return FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);

 VAR_9 = (struct sctp_ecnehdr *)VAR_8->skb->data;
 FUNC_7(VAR_8->skb, sizeof(*VAR_9));


 FUNC_2(VAR_7, VAR_0,
   FUNC_0(FUNC_1(VAR_9->lowest_tsn)));

 return VAR_1;
}
