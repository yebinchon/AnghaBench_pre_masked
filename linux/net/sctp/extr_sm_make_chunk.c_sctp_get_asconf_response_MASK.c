
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_errhdr {int cause; } ;
struct sctp_chunkhdr {int dummy; } ;
struct sctp_chunk {TYPE_2__* skb; TYPE_1__* chunk_hdr; } ;
struct sctp_addiphdr {int dummy; } ;
struct TYPE_6__ {int type; int length; } ;
struct sctp_addip_param {scalar_t__ crr_id; TYPE_3__ param_hdr; } ;
typedef int __be16 ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static __be16 FUNC_1(struct sctp_chunk *VAR_3,
           struct sctp_addip_param *VAR_4,
           int VAR_5)
{
 struct sctp_addip_param *VAR_6;
 struct sctp_errhdr *VAR_7;
 int VAR_8;
 __be16 VAR_9;
 int VAR_10;

 if (VAR_5)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_8 = FUNC_0(VAR_3->chunk_hdr->length) -
    sizeof(struct sctp_chunkhdr);




 VAR_10 = sizeof(struct sctp_addiphdr);
 VAR_6 = (struct sctp_addip_param *)(VAR_3->skb->data +
             VAR_10);
 VAR_8 -= VAR_10;

 while (VAR_8 > 0) {
  if (VAR_6->crr_id == VAR_4->crr_id) {
   switch (VAR_6->param_hdr.type) {
   case 128:
    return VAR_1;
   case 129:
    VAR_10 = sizeof(*VAR_6);
    VAR_7 = (void *)VAR_6 + VAR_10;
    VAR_8 -= VAR_10;
    if (VAR_8 > 0)
     return VAR_7->cause;
    else
     return VAR_0;
    break;
   default:
    return VAR_0;
   }
  }

  VAR_10 = FUNC_0(VAR_6->param_hdr.length);
  VAR_6 = (void *)VAR_6 + VAR_10;
  VAR_8 -= VAR_10;
 }

 return VAR_9;
}
