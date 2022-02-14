
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_paramhdr {int length; } ;
struct sctp_heartbeathdr {int dummy; } ;
struct sctp_heartbeat_chunk {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_4__ {struct sctp_heartbeathdr* hb_hdr; } ;
struct sctp_chunk {TYPE_3__* skb; TYPE_2__* chunk_hdr; TYPE_1__ subh; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {int length; } ;


 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_4 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_5 (struct sctp_association const*,struct sctp_chunk*,struct sctp_paramhdr*,size_t) ;
 int FUNC_6 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_7 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_8 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_paramhdr*,struct sctp_cmd_seq*) ;
 int FUNC_9 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_10(struct net *VAR_3,
           const struct sctp_endpoint *VAR_4,
           const struct sctp_association *VAR_5,
           const union sctp_subtype VAR_6,
           void *VAR_7, struct sctp_cmd_seq *VAR_8)
{
 struct sctp_paramhdr *VAR_9;
 struct sctp_chunk *VAR_10 = VAR_7;
 struct sctp_chunk *VAR_11;
 size_t VAR_12 = 0;

 if (!FUNC_9(VAR_10, VAR_5))
  return FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);


 if (!FUNC_4(VAR_10,
         sizeof(struct sctp_heartbeat_chunk)))
  return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8);





 VAR_10->subh.hb_hdr = (struct sctp_heartbeathdr *)VAR_10->skb->data;
 VAR_9 = (struct sctp_paramhdr *)VAR_10->subh.hb_hdr;
 VAR_12 = FUNC_1(VAR_10->chunk_hdr->length) - sizeof(struct sctp_chunkhdr);

 if (FUNC_1(VAR_9->length) > VAR_12)
  return FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_9, VAR_8);

 if (!FUNC_2(VAR_10->skb, VAR_12))
  goto nomem;

 VAR_11 = FUNC_5(VAR_5, VAR_10, VAR_9, VAR_12);
 if (!VAR_11)
  goto nomem;

 FUNC_3(VAR_8, VAR_0, FUNC_0(VAR_11));
 return VAR_1;

nomem:
 return VAR_2;
}
