
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
struct sctp_chunk {TYPE_1__* skb; scalar_t__ chunk_end; TYPE_2__* chunk_hdr; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __be16 ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_6 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_7 (struct sctp_errhdr*,TYPE_2__*) ;

__attribute__((used)) static enum sctp_disposition FUNC_8(
     struct net *VAR_7,
     const struct sctp_endpoint *VAR_8,
     const struct sctp_association *VAR_9,
     const union sctp_subtype VAR_10,
     void *VAR_11,
     struct sctp_cmd_seq *VAR_12)
{
 __be16 VAR_13 = VAR_4;
 struct sctp_chunk *VAR_14 = VAR_11;
 unsigned int VAR_15;


 VAR_15 = FUNC_4(VAR_14->chunk_hdr->length);
 if (VAR_15 >= sizeof(struct sctp_chunkhdr) + sizeof(struct sctp_errhdr)) {
  struct sctp_errhdr *VAR_16;

  FUNC_7(VAR_16, VAR_14->chunk_hdr);
  if ((void *)VAR_16 != (void *)VAR_14->chunk_end)
   return FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_12);

  VAR_13 = ((struct sctp_errhdr *)VAR_14->skb->data)->cause;
 }

 FUNC_5(VAR_12, VAR_2, FUNC_1(VAR_0));

 FUNC_5(VAR_12, VAR_1, FUNC_3(VAR_13));
 FUNC_2(VAR_7, VAR_5);
 FUNC_0(VAR_7, VAR_6);

 return VAR_3;
}
