
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfc_target {scalar_t__ nfcid1_len; scalar_t__ sensb_res_len; scalar_t__ sensf_res_len; int iso15693_uid; int iso15693_dsfid; scalar_t__ is_iso15693; int sensf_res; int sensb_res; int nfcid1; int sel_res; int sens_res; int supported_protocols; int idx; } ;
struct netlink_callback {TYPE_1__* nlh; int skb; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct netlink_callback*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_12, struct nfc_target *VAR_13,
    struct netlink_callback *VAR_14, int VAR_15)
{
 void *VAR_16;

 VAR_16 = FUNC_4(VAR_12, FUNC_0(VAR_14->skb).portid, VAR_14->nlh->nlmsg_seq,
     &VAR_11, VAR_15, VAR_10);
 if (!VAR_16)
  return -VAR_0;

 FUNC_1(VAR_14, VAR_16);

 if (FUNC_7(VAR_12, VAR_2, VAR_13->idx) ||
     FUNC_7(VAR_12, VAR_1, VAR_13->supported_protocols) ||
     FUNC_6(VAR_12, VAR_9, VAR_13->sens_res) ||
     FUNC_8(VAR_12, VAR_6, VAR_13->sel_res))
  goto nla_put_failure;
 if (VAR_13->nfcid1_len > 0 &&
     FUNC_5(VAR_12, VAR_5, VAR_13->nfcid1_len,
      VAR_13->nfcid1))
  goto nla_put_failure;
 if (VAR_13->sensb_res_len > 0 &&
     FUNC_5(VAR_12, VAR_7, VAR_13->sensb_res_len,
      VAR_13->sensb_res))
  goto nla_put_failure;
 if (VAR_13->sensf_res_len > 0 &&
     FUNC_5(VAR_12, VAR_8, VAR_13->sensf_res_len,
      VAR_13->sensf_res))
  goto nla_put_failure;

 if (VAR_13->is_iso15693) {
  if (FUNC_8(VAR_12, VAR_3,
          VAR_13->iso15693_dsfid) ||
      FUNC_5(VAR_12, VAR_4,
       sizeof(VAR_13->iso15693_uid), VAR_13->iso15693_uid))
   goto nla_put_failure;
 }

 FUNC_3(VAR_12, VAR_16);
 return 0;

nla_put_failure:
 FUNC_2(VAR_12, VAR_16);
 return -VAR_0;
}
