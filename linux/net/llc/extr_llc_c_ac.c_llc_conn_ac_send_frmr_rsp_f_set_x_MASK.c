
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int mac; int lsap; } ;
struct llc_sock {TYPE_2__ daddr; TYPE_3__* dev; int vR; int vS; struct llc_sap* sap; int rx_pdu_hdr; } ;
struct TYPE_4__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;
struct llc_pdu_sn {int dummy; } ;
struct llc_frmr_info {int dummy; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct llc_pdu_sn*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sock*,TYPE_3__*,int ,int) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,scalar_t__*) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct llc_pdu_sn*,scalar_t__,int ,int ,int ) ;
 struct llc_pdu_sn* FUNC_8 (struct sk_buff*) ;
 struct llc_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 u8 VAR_6;
 int VAR_7 = -VAR_0;
 struct sk_buff *VAR_8;
 struct llc_pdu_sn *VAR_9 = FUNC_8(VAR_5);
 struct llc_sock *VAR_10 = FUNC_9(VAR_4);

 VAR_10->rx_pdu_hdr = *((u32 *)VAR_9);
 if (FUNC_0(VAR_9))
  FUNC_5(VAR_5, &VAR_6);
 else
  VAR_6 = 0;
 VAR_8 = FUNC_2(VAR_4, VAR_10->dev, VAR_3,
          sizeof(struct llc_frmr_info));
 if (VAR_8) {
  struct llc_sap *VAR_11 = VAR_10->sap;

  FUNC_6(VAR_8, VAR_3, VAR_11->laddr.lsap,
        VAR_10->daddr.lsap, VAR_2);
  FUNC_7(VAR_8, VAR_9, VAR_6, VAR_10->vS,
      VAR_10->vR, VAR_1);
  VAR_7 = FUNC_4(VAR_8, VAR_10->dev->dev_addr, VAR_10->daddr.mac);
  if (FUNC_10(VAR_7))
   goto free;
  FUNC_3(VAR_4, VAR_8);
 }
out:
 return VAR_7;
free:
 FUNC_1(VAR_8);
 goto out;
}
