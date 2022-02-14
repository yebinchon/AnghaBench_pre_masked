
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_errhdr {int cause; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {int transport; TYPE_2__* skb; TYPE_1__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
struct sctp_abort_chunk {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __be16 ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_chunk*,int) ;
 int FUNC_2 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_3 (struct net*,struct sctp_cmd_seq*,int ,int ,struct sctp_association const*,int ) ;
 int FUNC_4 (struct sctp_chunk*,struct sctp_association const*) ;

enum sctp_disposition FUNC_5(
     struct net *VAR_2,
     const struct sctp_endpoint *VAR_3,
     const struct sctp_association *VAR_4,
     const union sctp_subtype VAR_5,
     void *VAR_6,
     struct sctp_cmd_seq *VAR_7)
{
 __be16 VAR_8 = VAR_1;
 struct sctp_chunk *VAR_9 = VAR_6;
 unsigned int VAR_10;

 if (!FUNC_4(VAR_9, VAR_4))
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!FUNC_1(VAR_9, sizeof(struct sctp_abort_chunk)))
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);


 VAR_10 = FUNC_0(VAR_9->chunk_hdr->length);
 if (VAR_10 >= sizeof(struct sctp_chunkhdr) + sizeof(struct sctp_errhdr))
  VAR_8 = ((struct sctp_errhdr *)VAR_9->skb->data)->cause;

 return FUNC_3(VAR_2, VAR_7, VAR_8, VAR_0, VAR_4,
          VAR_9->transport);
}
