
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_packet {int vtag; } ;
struct TYPE_6__ {int sk; } ;
struct sctp_endpoint {TYPE_3__ base; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {TYPE_2__* skb; TYPE_1__* sctp_hdr; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_5__ {int sk; } ;
struct TYPE_4__ {int vtag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct sctp_packet*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sctp_cmd_seq*,int ,int ) ;
 struct sctp_chunk* FUNC_4 (struct sctp_association const*,struct sctp_chunk*,int ) ;
 int FUNC_5 (struct sctp_packet*) ;
 struct sctp_packet* FUNC_6 (struct net*,struct sctp_association const*,struct sctp_chunk*) ;
 int FUNC_7 (struct sctp_packet*,struct sctp_chunk*) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 scalar_t__ FUNC_9 (struct sctp_chunk*) ;

__attribute__((used)) static enum sctp_disposition FUNC_10(
     struct net *VAR_4,
     const struct sctp_endpoint *VAR_5,
     const struct sctp_association *VAR_6,
     const union sctp_subtype VAR_7,
     void *VAR_8,
     struct sctp_cmd_seq *VAR_9)
{
 struct sctp_packet *VAR_10 = ((void*)0);
 struct sctp_chunk *VAR_11 = VAR_8;
 struct sctp_chunk *VAR_12;

 VAR_10 = FUNC_6(VAR_4, VAR_6, VAR_11);
 if (!VAR_10)
  return VAR_2;




 VAR_12 = FUNC_4(VAR_6, VAR_11, 0);
 if (!VAR_12) {
  FUNC_5(VAR_10);
  return VAR_2;
 }


 if (FUNC_9(VAR_12))
  VAR_10->vtag = FUNC_2(VAR_11->sctp_hdr->vtag);


 VAR_12->skb->sk = VAR_5->base.sk;

 FUNC_7(VAR_10, VAR_12);

 FUNC_3(VAR_9, VAR_0,
   FUNC_1(VAR_10));

 FUNC_0(VAR_4, VAR_3);

 FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 return VAR_1;
}
