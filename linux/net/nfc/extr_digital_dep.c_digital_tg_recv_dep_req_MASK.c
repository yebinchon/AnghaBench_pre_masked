
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {size_t len; scalar_t__* data; } ;
struct nfc_digital_dev {int (* skb_check_crc ) (struct sk_buff*) ;size_t local_payload_max; scalar_t__ did; struct sk_buff* saved_skb; scalar_t__ atn_count; struct sk_buff* chaining_skb; int nfc_dev; int curr_nfc_dep_pni; } ;
struct digital_dep_req_res {scalar_t__ dir; scalar_t__ cmd; int pfb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

 int FUNC_3 (int ) ;

 int FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct nfc_digital_dev*,int ,struct sk_buff*,int ,int *) ;
 int FUNC_11 (struct nfc_digital_dev*,struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_12 (struct nfc_digital_dev*) ;
 int FUNC_13 (struct nfc_digital_dev*,struct sk_buff*) ;
 int FUNC_14 (struct nfc_digital_dev*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ,struct sk_buff*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct sk_buff*,size_t) ;
 int FUNC_19 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_20(struct nfc_digital_dev *VAR_6, void *VAR_7,
        struct sk_buff *VAR_8)
{
 int VAR_9;
 struct digital_dep_req_res *VAR_10;
 u8 VAR_11;
 size_t VAR_12;

 if (FUNC_6(VAR_8)) {
  VAR_9 = FUNC_8(VAR_8);
  VAR_8 = ((void*)0);
  goto exit;
 }

 VAR_9 = VAR_6->skb_check_crc(VAR_8);
 if (VAR_9) {
  FUNC_7("14.4.1.6");
  goto exit;
 }

 VAR_9 = FUNC_11(VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_7("14.4.1.2");
  goto exit;
 }

 if (VAR_8->len > VAR_6->local_payload_max) {
  VAR_9 = -VAR_4;
  goto exit;
 }

 VAR_12 = sizeof(struct digital_dep_req_res);
 VAR_10 = (struct digital_dep_req_res *)VAR_8->data;

 if (VAR_8->len < VAR_12 || VAR_10->dir != VAR_1 ||
     VAR_10->cmd != VAR_0) {
  VAR_9 = -VAR_3;
  goto exit;
 }

 VAR_11 = VAR_10->pfb;

 if (FUNC_0(VAR_11)) {
  if (VAR_6->did && (VAR_6->did == VAR_8->data[3])) {
   VAR_12++;
  } else {
   VAR_9 = -VAR_3;
   goto exit;
  }
 } else if (VAR_6->did) {
  VAR_9 = -VAR_3;
  goto exit;
 }

 if (FUNC_2(VAR_11)) {
  VAR_9 = -VAR_3;
  goto exit;
 }

 if (VAR_12 > VAR_8->len) {
  VAR_9 = -VAR_3;
  goto exit;
 }

 FUNC_18(VAR_8, VAR_12);

 switch (FUNC_5(VAR_11)) {
 case 129:
  FUNC_17("DIGITAL_NFC_DEP_PFB_I_PDU\n");

  if (VAR_6->atn_count) {



   VAR_6->atn_count = 0;







   if (FUNC_4(VAR_11) ==
     FUNC_4(VAR_6->curr_nfc_dep_pni - 1)) {
    VAR_9 = FUNC_14(VAR_6);
    if (VAR_9)
     goto exit;

    goto free_resp;
   }






  }

  if (FUNC_4(VAR_11) != VAR_6->curr_nfc_dep_pni) {
   FUNC_7("14.12.3.4");
   VAR_9 = -VAR_3;
   goto exit;
  }

  FUNC_15(VAR_6->saved_skb);
  VAR_6->saved_skb = ((void*)0);

  VAR_8 = FUNC_10(VAR_6, VAR_11, VAR_8,
          VAR_5, ((void*)0));
  if (FUNC_6(VAR_8)) {
   VAR_9 = FUNC_8(VAR_8);
   VAR_8 = ((void*)0);
   goto exit;
  }





  if (!VAR_8)
   return;

  VAR_9 = 0;
  break;
 case 130:
  if (FUNC_1(VAR_11)) {
   if (FUNC_4(VAR_11 + 1) !=
      VAR_6->curr_nfc_dep_pni) {
    VAR_9 = -VAR_3;
    goto exit;
   }

   VAR_6->atn_count = 0;

   VAR_9 = FUNC_14(VAR_6);
   if (VAR_9)
    goto exit;

   goto free_resp;
  }


  if (VAR_6->atn_count) {



   VAR_6->atn_count = 0;





   if (FUNC_4(VAR_11 + 1) ==
      VAR_6->curr_nfc_dep_pni) {
    VAR_9 = FUNC_14(VAR_6);
    if (VAR_9)
     goto exit;

    goto free_resp;
   }





  }


  if (!VAR_6->chaining_skb ||
      FUNC_4(VAR_11) !=
     VAR_6->curr_nfc_dep_pni) {
   VAR_9 = -VAR_3;
   goto exit;
  }

  FUNC_15(VAR_6->saved_skb);
  VAR_6->saved_skb = ((void*)0);

  VAR_9 = FUNC_13(VAR_6, VAR_6->chaining_skb);
  if (VAR_9)
   goto exit;

  goto free_resp;
 case 128:
  if (FUNC_3(VAR_11)) {
   VAR_9 = -VAR_2;
   goto exit;
  }

  VAR_9 = FUNC_12(VAR_6);
  if (VAR_9)
   goto exit;

  VAR_6->atn_count++;

  goto free_resp;
 }

 VAR_9 = FUNC_16(VAR_6->nfc_dev, VAR_8);

exit:
 FUNC_15(VAR_6->chaining_skb);
 VAR_6->chaining_skb = ((void*)0);

 VAR_6->atn_count = 0;

 FUNC_15(VAR_6->saved_skb);
 VAR_6->saved_skb = ((void*)0);

 if (VAR_9)
  FUNC_15(VAR_8);

 return;

free_resp:
 FUNC_9(VAR_8);
}
