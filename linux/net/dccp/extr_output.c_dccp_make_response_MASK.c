
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct dccp_request_sock {int dreq_service; int dreq_gsr; int dreq_gss; } ;
struct dccp_hdr_response {int dummy; } ;
struct dccp_hdr_ext {int dummy; } ;
struct dccp_hdr {int dccph_doff; int dccph_x; void* dccph_type; int dccph_dport; int dccph_sport; } ;
struct TYPE_6__ {int const dccpd_opt_len; int dccpd_seq; void* dccpd_type; } ;
struct TYPE_5__ {int dccph_resp_service; } ;
struct TYPE_4__ {int acked; int ir_rmt_port; int ir_num; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct dccp_request_sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct dccp_hdr*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct dccp_request_sock*,struct sk_buff*) ;
 struct dccp_request_sock* FUNC_10 (struct request_sock*) ;
 struct dccp_hdr* FUNC_11 (struct sk_buff*,int const) ;
 int FUNC_12 (struct dst_entry*) ;
 int FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 (struct request_sock*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_18 (struct sock*,int ,int,int ) ;

struct sk_buff *FUNC_19(const struct sock *VAR_4, struct dst_entry *VAR_5,
       struct request_sock *VAR_6)
{
 struct dccp_hdr *VAR_7;
 struct dccp_request_sock *VAR_8;
 const u32 VAR_9 = sizeof(struct dccp_hdr) +
         sizeof(struct dccp_hdr_ext) +
         sizeof(struct dccp_hdr_response);
 struct sk_buff *VAR_10;





 VAR_10 = FUNC_18((struct sock *)VAR_4, VAR_3, 1,
      VAR_2);
 if (!VAR_10)
  return ((void*)0);

 FUNC_17(VAR_10, VAR_3);

 FUNC_16(VAR_10, FUNC_12(VAR_5));

 VAR_8 = FUNC_10(VAR_6);
 if (FUNC_14(VAR_6)->acked)
  FUNC_8(&VAR_8->dreq_gss);
 FUNC_1(VAR_10)->dccpd_type = VAR_1;
 FUNC_1(VAR_10)->dccpd_seq = VAR_8->dreq_gss;


 if (FUNC_3(VAR_8))
  goto response_failed;

 if (FUNC_9(VAR_8, VAR_10))
  goto response_failed;


 VAR_7 = FUNC_11(VAR_10, VAR_9);

 VAR_7->dccph_sport = FUNC_13(FUNC_14(VAR_6)->ir_num);
 VAR_7->dccph_dport = FUNC_14(VAR_6)->ir_rmt_port;
 VAR_7->dccph_doff = (VAR_9 +
      FUNC_1(VAR_10)->dccpd_opt_len) / 4;
 VAR_7->dccph_type = VAR_1;
 VAR_7->dccph_x = 1;
 FUNC_7(VAR_7, VAR_8->dreq_gss);
 FUNC_6(FUNC_4(VAR_10), VAR_8->dreq_gsr);
 FUNC_5(VAR_10)->dccph_resp_service = VAR_8->dreq_service;

 FUNC_2(VAR_10);


 FUNC_14(VAR_6)->acked = 1;
 FUNC_0(VAR_0);
 return VAR_10;
response_failed:
 FUNC_15(VAR_10);
 return ((void*)0);
}
