
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct nfc_digital_dev {int (* skb_check_crc ) (struct sk_buff*) ;int local_payload_max; void* curr_nfc_dep_pni; struct sk_buff* saved_skb; struct sk_buff* chaining_skb; scalar_t__ nack_count; scalar_t__ atn_count; int data_exch; } ;
struct digital_dep_req_res {scalar_t__ dir; scalar_t__ cmd; int pfb; } ;
struct digital_data_exch {int cb_context; int (* cb ) (int ,struct sk_buff*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_3 (int ) ;

 void* FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_11 (struct nfc_digital_dev*,struct digital_data_exch*) ;
 int FUNC_12 (struct nfc_digital_dev*,int *,struct sk_buff*,int ) ;
 int FUNC_13 (struct nfc_digital_dev*,struct digital_data_exch*) ;
 int FUNC_14 (struct nfc_digital_dev*,struct digital_data_exch*,int ) ;
 int FUNC_15 (struct nfc_digital_dev*,struct digital_data_exch*) ;
 struct sk_buff* FUNC_16 (struct nfc_digital_dev*,int ,struct sk_buff*,int ,struct digital_data_exch*) ;
 int FUNC_17 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_18 (struct digital_data_exch*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (int ,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_23(struct nfc_digital_dev *VAR_9, void *VAR_10,
        struct sk_buff *VAR_11)
{
 struct digital_data_exch *VAR_12 = VAR_10;
 struct digital_dep_req_res *VAR_13;
 u8 VAR_14;
 uint VAR_15;
 int VAR_16;
 u8 VAR_17;

 if (FUNC_7(VAR_11)) {
  VAR_16 = FUNC_9(VAR_11);
  VAR_11 = ((void*)0);

  if ((VAR_16 == -VAR_5 || (VAR_16 == -VAR_7 && VAR_9->nack_count)) &&
      (VAR_9->nack_count++ < VAR_3)) {
   VAR_9->atn_count = 0;

   VAR_16 = FUNC_13(VAR_9, VAR_12);
   if (VAR_16)
    goto error;

   return;
  } else if ((VAR_16 == -VAR_7) &&
      (VAR_9->atn_count++ < VAR_2)) {
   VAR_9->nack_count = 0;

   VAR_16 = FUNC_11(VAR_9, VAR_12);
   if (VAR_16)
    goto error;

   return;
  }

  goto exit;
 }

 VAR_16 = FUNC_17(VAR_9, VAR_11);
 if (VAR_16) {
  FUNC_8("14.4.1.2");
  goto exit;
 }

 VAR_16 = VAR_9->skb_check_crc(VAR_11);
 if (VAR_16) {
  if ((VAR_11->len >= 4) &&
      (VAR_9->nack_count++ < VAR_3)) {
   VAR_9->atn_count = 0;

   VAR_16 = FUNC_13(VAR_9, VAR_12);
   if (VAR_16)
    goto error;

   FUNC_19(VAR_11);

   return;
  }

  FUNC_8("14.4.1.6");
  goto error;
 }

 VAR_9->atn_count = 0;
 VAR_9->nack_count = 0;

 if (VAR_11->len > VAR_9->local_payload_max) {
  VAR_16 = -VAR_6;
  goto exit;
 }

 VAR_15 = sizeof(struct digital_dep_req_res);
 VAR_13 = (struct digital_dep_req_res *)VAR_11->data;

 if (VAR_11->len < VAR_15 || VAR_13->dir != VAR_1 ||
     VAR_13->cmd != VAR_0) {
  VAR_16 = -VAR_5;
  goto error;
 }

 VAR_14 = VAR_13->pfb;

 if (FUNC_0(VAR_14)) {
  FUNC_8("14.8.2.1");
  VAR_16 = -VAR_5;
  goto error;
 }

 if (FUNC_2(VAR_14)) {
  VAR_16 = -VAR_5;
  goto exit;
 }

 if (VAR_15 > VAR_11->len) {
  VAR_16 = -VAR_5;
  goto error;
 }

 FUNC_20(VAR_11, VAR_15);

 switch (FUNC_5(VAR_14)) {
 case 129:
  if (FUNC_4(VAR_14) != VAR_9->curr_nfc_dep_pni) {
   FUNC_8("14.12.3.3");
   VAR_16 = -VAR_5;
   goto error;
  }

  VAR_9->curr_nfc_dep_pni =
   FUNC_4(VAR_9->curr_nfc_dep_pni + 1);

  FUNC_19(VAR_9->saved_skb);
  VAR_9->saved_skb = ((void*)0);

  VAR_11 = FUNC_16(VAR_9, VAR_14, VAR_11,
          VAR_8,
          VAR_12);
  if (FUNC_7(VAR_11)) {
   VAR_16 = FUNC_9(VAR_11);
   VAR_11 = ((void*)0);
   goto error;
  }





  if (!VAR_11)
   return;

  VAR_16 = 0;
  break;

 case 130:
  if (FUNC_1(VAR_14)) {
   FUNC_8("14.12.4.5");
   VAR_16 = -VAR_5;
   goto exit;
  }

  if (FUNC_4(VAR_14) != VAR_9->curr_nfc_dep_pni) {
   FUNC_8("14.12.3.3");
   VAR_16 = -VAR_5;
   goto exit;
  }

  VAR_9->curr_nfc_dep_pni =
   FUNC_4(VAR_9->curr_nfc_dep_pni + 1);

  if (!VAR_9->chaining_skb) {
   FUNC_8("14.12.4.3");
   VAR_16 = -VAR_5;
   goto exit;
  }




  FUNC_19(VAR_9->saved_skb);
  VAR_9->saved_skb = ((void*)0);

  VAR_16 = FUNC_12(VAR_9, ((void*)0),
          VAR_9->chaining_skb,
          VAR_9->data_exch);
  if (VAR_16)
   goto error;

  goto free_resp;

 case 128:
  if (!FUNC_3(VAR_14)) {
   VAR_16 = FUNC_15(VAR_9, VAR_12);
   if (VAR_16)
    goto error;

   goto free_resp;
  }

  if (VAR_9->atn_count || VAR_9->nack_count) {
   FUNC_8("14.12.4.4");
   VAR_16 = -VAR_5;
   goto error;
  }

  VAR_17 = FUNC_6(VAR_11->data[0]);
  if (!VAR_17 || VAR_17 > VAR_4) {
   FUNC_8("14.8.4.1");
   VAR_16 = -VAR_5;
   goto error;
  }

  VAR_16 = FUNC_14(VAR_9, VAR_12, VAR_17);
  if (VAR_16)
   goto error;

  goto free_resp;
 }

exit:
 VAR_12->cb(VAR_12->cb_context, VAR_11, VAR_16);

error:
 FUNC_18(VAR_12);

 FUNC_19(VAR_9->chaining_skb);
 VAR_9->chaining_skb = ((void*)0);

 FUNC_19(VAR_9->saved_skb);
 VAR_9->saved_skb = ((void*)0);

 if (VAR_16)
  FUNC_19(VAR_11);

 return;

free_resp:
 FUNC_10(VAR_11);
}
