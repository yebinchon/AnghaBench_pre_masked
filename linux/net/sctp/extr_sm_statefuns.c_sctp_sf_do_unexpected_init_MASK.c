
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
struct sctp_unrecognized_param {int dummy; } ;
struct sctp_packet {int dummy; } ;
struct sctp_inithdr {int dummy; } ;
struct sctp_init_chunk {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunkhdr {int dummy; } ;
struct TYPE_9__ {int v; } ;
struct TYPE_8__ {struct sctp_inithdr* init_hdr; } ;
struct sctp_chunk {TYPE_4__* chunk_hdr; TYPE_5__* skb; TYPE_3__ param_hdr; TYPE_2__ subh; TYPE_1__* sctp_hdr; int singleton; } ;
struct sctp_association {int dummy; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int __u8 ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {int length; int type; } ;
struct TYPE_7__ {scalar_t__ vtag; } ;


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
 int FUNC_2 (struct net*,int ) ;
 int VAR_8 ;
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
 int FUNC_17 (struct sctp_association*,struct sctp_association const*,struct sctp_chunk*,struct sctp_cmd_seq*) ;
 int FUNC_18 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_19 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_20 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,union sctp_subtype const,void*,struct sctp_cmd_seq*) ;
 int FUNC_21 (struct sctp_chunk*) ;
 int FUNC_22 (struct sctp_association const*,int ) ;
 int FUNC_23 (struct sctp_association*,struct sctp_association const*) ;
 int FUNC_24 (struct net*,struct sctp_endpoint const*,struct sctp_association const*,int ,struct sctp_init_chunk*,struct sctp_chunk*,struct sctp_chunk**) ;
 scalar_t__ FUNC_25 (struct sctp_endpoint*,TYPE_5__*) ;
 int FUNC_26 (TYPE_5__*,int) ;

__attribute__((used)) static enum sctp_disposition FUNC_27(
     struct net *VAR_9,
     const struct sctp_endpoint *VAR_10,
     const struct sctp_association *VAR_11,
     const union sctp_subtype VAR_12,
     void *VAR_13,
     struct sctp_cmd_seq *VAR_14)
{
 struct sctp_chunk *VAR_15 = VAR_13, *VAR_16, *VAR_17;
 struct sctp_unrecognized_param *VAR_18;
 struct sctp_association *VAR_19;
 enum sctp_disposition VAR_20;
 struct sctp_packet *VAR_21;
 int VAR_22;


 if (FUNC_25((struct sctp_endpoint *)VAR_10,
     VAR_15->skb))
  return FUNC_18(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
 if (!VAR_15->singleton)
  return FUNC_18(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);




 if (VAR_15->sctp_hdr->vtag != 0)
  return FUNC_19(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);





 if (!FUNC_12(VAR_15, sizeof(struct sctp_init_chunk)))
  return FUNC_20(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
        VAR_14);

 VAR_15->subh.init_hdr = (struct sctp_inithdr *)VAR_15->skb->data;


 VAR_15->param_hdr.v = FUNC_26(VAR_15->skb, sizeof(struct sctp_inithdr));


 VAR_17 = ((void*)0);
 if (!FUNC_24(VAR_9, VAR_10, VAR_11, VAR_15->chunk_hdr->type,
         (struct sctp_init_chunk *)VAR_15->chunk_hdr, VAR_15,
         &VAR_17)) {



  if (VAR_17) {
   VAR_21 = FUNC_6(VAR_9, VAR_10, VAR_11, VAR_13,
     (__u8 *)(VAR_17->chunk_hdr) +
     sizeof(struct sctp_chunkhdr),
     FUNC_5(VAR_17->chunk_hdr->length) -
     sizeof(struct sctp_chunkhdr));

   if (VAR_21) {
    FUNC_7(VAR_14, VAR_5,
      FUNC_4(VAR_21));
    FUNC_2(VAR_9, VAR_8);
    VAR_20 = VAR_6;
   } else {
    VAR_20 = VAR_7;
   }
   goto cleanup;
  } else {
   return FUNC_19(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
          VAR_14);
  }
 }
 VAR_19 = FUNC_14(VAR_10, VAR_15, VAR_1);
 if (!VAR_19)
  goto nomem;

 if (FUNC_9(VAR_19,
    FUNC_16(FUNC_21(VAR_15)), VAR_1) < 0)
  goto nomem;





 if (!FUNC_15(VAR_19, VAR_15, FUNC_21(VAR_15),
          (struct sctp_init_chunk *)VAR_15->chunk_hdr,
          VAR_1))
  goto nomem;






 if (!FUNC_22(VAR_11, VAR_0)) {
  if (!FUNC_17(VAR_19, VAR_11, VAR_15,
       VAR_14)) {
   VAR_20 = VAR_6;
   goto nomem_retval;
  }
 }

 FUNC_23(VAR_19, VAR_11);






 VAR_22 = 0;
 if (VAR_17) {
  VAR_22 = FUNC_5(VAR_17->chunk_hdr->length) -
        sizeof(struct sctp_chunkhdr);
 }

 VAR_16 = FUNC_13(VAR_19, VAR_15, VAR_1, VAR_22);
 if (!VAR_16)
  goto nomem;





 if (VAR_17) {







  VAR_18 = (struct sctp_unrecognized_param *)
       ((__u8 *)(VAR_17->chunk_hdr) +
       sizeof(struct sctp_chunkhdr));



  FUNC_8(VAR_16, VAR_22, VAR_18);
 }

 FUNC_7(VAR_14, VAR_3, FUNC_0(VAR_19));
 FUNC_7(VAR_14, VAR_4, FUNC_1(VAR_16));






 FUNC_7(VAR_14, VAR_2, FUNC_3());
 VAR_20 = VAR_6;

 return VAR_20;

nomem:
 VAR_20 = VAR_7;
nomem_retval:
 if (VAR_19)
  FUNC_10(VAR_19);
cleanup:
 if (VAR_17)
  FUNC_11(VAR_17);
 return VAR_20;
}
