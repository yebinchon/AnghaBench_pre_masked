
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_unrecognized_param {int dummy; } ;
struct sctp_packet {int dummy; } ;
struct sctp_inithdr {int dummy; } ;
struct sctp_init_chunk {int dummy; } ;
struct TYPE_12__ {int sk; } ;
struct sctp_endpoint {TYPE_3__ base; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_14__ {int v; } ;
struct TYPE_13__ {struct sctp_inithdr* init_hdr; } ;
struct sctp_chunk {TYPE_6__* chunk_hdr; TYPE_7__* skb; TYPE_5__ param_hdr; TYPE_4__ subh; TYPE_2__* sctp_hdr; int singleton; } ;
struct sctp_association {int dummy; } ;
struct TYPE_10__ {int ctl_sock; } ;
struct net {TYPE_1__ sctp; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __u8 ;
struct TYPE_17__ {struct sctp_endpoint const* ep; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int length; int type; } ;
struct TYPE_11__ {scalar_t__ vtag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_association*) ;
 int FUNC_1 (struct sctp_chunk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct net*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (struct sctp_packet*) ;
 int FUNC_5 (int ) ;
 struct sctp_packet* FUNC_6 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,void*,int *,int) ;
 int FUNC_7 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_8 (struct sctp_chunk*,int,struct sctp_unrecognized_param*) ;
 scalar_t__ FUNC_9 (struct sctp_association*,int ,int ) ;
 int FUNC_10 (struct sctp_association*) ;
 int FUNC_11 (struct sctp_chunk*) ;
 int FUNC_12 (struct sctp_chunk*,int) ;
 struct sctp_chunk* FUNC_13 (struct sctp_association*,struct sctp_chunk*,int ,int) ;
 struct sctp_association* FUNC_14 (struct sctp_endpoint const*,struct sctp_chunk*,int ) ;
 int FUNC_15 (struct sctp_association*,struct sctp_chunk*,int ,struct sctp_init_chunk*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_18 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 TYPE_9__* FUNC_19 (int ) ;
 int FUNC_20 (struct sctp_chunk*) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,struct sctp_init_chunk*,struct sctp_chunk*,struct sctp_chunk**) ;
 scalar_t__ FUNC_23 (struct sctp_endpoint*,TYPE_7__*) ;
 int FUNC_24 (TYPE_7__*,int) ;

enum sctp_disposition FUNC_25(struct net *VAR_11,
        const struct sctp_endpoint *VAR_12,
        const struct sctp_association *VAR_13,
        const union sctp_subtype VAR_14,
        void *VAR_15,
        struct sctp_cmd_seq *VAR_16)
{
 struct sctp_chunk *VAR_17 = VAR_15, *VAR_18, *VAR_19;
 struct sctp_unrecognized_param *VAR_20;
 struct sctp_association *VAR_21;
 struct sctp_packet *VAR_22;
 int VAR_23;


 if (FUNC_23((struct sctp_endpoint *)VAR_12,
     VAR_17->skb))
  return FUNC_17(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 if (!VAR_17->singleton)
  return FUNC_17(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);




 if (VAR_12 == FUNC_19(VAR_11->sctp.ctl_sock)->ep) {
  FUNC_2(VAR_11, VAR_10);
  return FUNC_18(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
 }




 if (VAR_17->sctp_hdr->vtag != 0)
  return FUNC_18(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);






 if (!FUNC_12(VAR_17, sizeof(struct sctp_init_chunk)))
  return FUNC_17(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);







 if (FUNC_21(VAR_12->base.sk, VAR_0))
  return FUNC_18(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);


 VAR_19 = ((void*)0);
 if (!FUNC_22(VAR_11, VAR_12, VAR_13, VAR_17->chunk_hdr->type,
         (struct sctp_init_chunk *)VAR_17->chunk_hdr, VAR_17,
         &VAR_19)) {



  if (VAR_19) {
   VAR_22 = FUNC_6(VAR_11, VAR_12, VAR_13, VAR_15,
     (__u8 *)(VAR_19->chunk_hdr) +
     sizeof(struct sctp_chunkhdr),
     FUNC_5(VAR_19->chunk_hdr->length) -
     sizeof(struct sctp_chunkhdr));

   FUNC_11(VAR_19);

   if (VAR_22) {
    FUNC_7(VAR_16, VAR_5,
      FUNC_4(VAR_22));
    FUNC_2(VAR_11, VAR_9);
    return VAR_6;
   } else {
    return VAR_8;
   }
  } else {
   return FUNC_18(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
          VAR_16);
  }
 }


 VAR_17->subh.init_hdr = (struct sctp_inithdr *)VAR_17->skb->data;


 VAR_17->param_hdr.v = FUNC_24(VAR_17->skb, sizeof(struct sctp_inithdr));

 VAR_21 = FUNC_14(VAR_12, VAR_17, VAR_1);
 if (!VAR_21)
  goto nomem;

 if (FUNC_9(VAR_21,
          FUNC_16(FUNC_20(VAR_17)),
          VAR_1) < 0)
  goto nomem_init;


 if (!FUNC_15(VAR_21, VAR_17, FUNC_20(VAR_17),
          (struct sctp_init_chunk *)VAR_17->chunk_hdr,
          VAR_1))
  goto nomem_init;






 VAR_23 = 0;
 if (VAR_19)
  VAR_23 = FUNC_5(VAR_19->chunk_hdr->length) -
        sizeof(struct sctp_chunkhdr);

 VAR_18 = FUNC_13(VAR_21, VAR_17, VAR_1, VAR_23);
 if (!VAR_18)
  goto nomem_init;





 if (VAR_19) {







  VAR_20 = (struct sctp_unrecognized_param *)
       ((__u8 *)(VAR_19->chunk_hdr) +
       sizeof(struct sctp_chunkhdr));



  FUNC_8(VAR_18, VAR_23, VAR_20);
  FUNC_11(VAR_19);
 }

 FUNC_7(VAR_16, VAR_3, FUNC_0(VAR_21));

 FUNC_7(VAR_16, VAR_4, FUNC_1(VAR_18));







 FUNC_7(VAR_16, VAR_2, FUNC_3());

 return VAR_7;

nomem_init:
 FUNC_10(VAR_21);
nomem:
 if (VAR_19)
  FUNC_11(VAR_19);
 return VAR_8;
}
