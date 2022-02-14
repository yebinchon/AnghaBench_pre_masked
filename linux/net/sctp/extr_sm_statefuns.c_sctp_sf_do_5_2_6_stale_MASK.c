
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union sctp_subtype {int dummy; } sctp_subtype ;
typedef int u8 ;
typedef int u32 ;
struct sctp_errhdr {int dummy; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_6__ {int length; int type; } ;
struct sctp_cookie_preserve_param {int lifespan_increment; TYPE_2__ param_hdr; } ;
struct sctp_cmd_seq {int dummy; } ;
struct sctp_chunk {TYPE_1__* skb; } ;
struct sctp_bind_addr {int dummy; } ;
struct TYPE_8__ {int primary_path; } ;
struct TYPE_7__ {int bind_addr; } ;
struct sctp_association {int init_err_counter; int max_init_attempts; TYPE_4__ peer; TYPE_3__ base; } ;
struct net {int dummy; } ;
typedef enum sctp_disposition { ____Placeholder_sctp_disposition } sctp_disposition ;
typedef int bht ;
typedef int __be32 ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_chunk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 () ;
 int VAR_20 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_21 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sctp_cmd_seq*,int ,int ) ;
 int FUNC_11 (struct sctp_chunk*,int,struct sctp_cookie_preserve_param*) ;
 struct sctp_chunk* FUNC_12 (struct sctp_association const*,struct sctp_bind_addr*,int ,int) ;

__attribute__((used)) static enum sctp_disposition FUNC_13(
     struct net *VAR_22,
     const struct sctp_endpoint *VAR_23,
     const struct sctp_association *VAR_24,
     const union sctp_subtype VAR_25,
     void *VAR_26,
     struct sctp_cmd_seq *VAR_27)
{
 int VAR_28 = VAR_24->init_err_counter + 1;
 struct sctp_chunk *VAR_29 = VAR_26, *VAR_30;
 struct sctp_cookie_preserve_param VAR_31;
 struct sctp_bind_addr *VAR_32;
 struct sctp_errhdr *VAR_33;
 u32 VAR_34;

 if (VAR_28 > VAR_24->max_init_attempts) {
  FUNC_10(VAR_27, VAR_9,
    FUNC_1(VAR_0));
  FUNC_10(VAR_27, VAR_6,
    FUNC_3(VAR_17));
  return VAR_15;
 }

 VAR_33 = (struct sctp_errhdr *)(VAR_29->skb->data);
 VAR_34 = FUNC_9(*(__be32 *)((u8 *)VAR_33 + sizeof(*VAR_33)));
 VAR_34 = (VAR_34 * 2) / 1000;

 VAR_31.param_hdr.type = VAR_20;
 VAR_31.param_hdr.length = FUNC_8(sizeof(VAR_31));
 VAR_31.lifespan_increment = FUNC_7(VAR_34);


 VAR_32 = (struct sctp_bind_addr *) &VAR_24->base.bind_addr;
 VAR_30 = FUNC_12(VAR_24, VAR_32, VAR_1, sizeof(VAR_31));
 if (!VAR_30)
  goto nomem;

 FUNC_11(VAR_30, sizeof(VAR_31), &VAR_31);


 FUNC_10(VAR_27, VAR_2, FUNC_2());


 FUNC_10(VAR_27, VAR_11, FUNC_2());
 FUNC_10(VAR_27, VAR_4, FUNC_2());




 FUNC_10(VAR_27, VAR_3, FUNC_2());




 FUNC_10(VAR_27, VAR_10,
   FUNC_6(VAR_24->peer.primary_path));




 FUNC_10(VAR_27, VAR_5, FUNC_2());

 FUNC_10(VAR_27, VAR_13,
   FUNC_5(VAR_18));
 FUNC_10(VAR_27, VAR_7,
   FUNC_4(VAR_21));
 FUNC_10(VAR_27, VAR_12,
   FUNC_5(VAR_19));

 FUNC_10(VAR_27, VAR_8, FUNC_0(VAR_30));

 return VAR_14;

nomem:
 return VAR_16;
}
