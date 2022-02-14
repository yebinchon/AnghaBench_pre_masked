
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int mac; int lsap; } ;
struct llc_sock {TYPE_2__ daddr; TYPE_3__* dev; int vR; struct llc_sap* sap; } ;
struct TYPE_4__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;
struct llc_pdu_sn {int dummy; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct llc_pdu_sn*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (struct sock*,TYPE_3__*,int ,int ) ;
 int FUNC_4 (struct sock*,int ,int ) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 struct llc_pdu_sn* FUNC_9 (struct sk_buff*) ;
 struct llc_sock* FUNC_10 (struct sock*) ;

int FUNC_11(struct sock *VAR_3,
      struct sk_buff *VAR_4)
{
 u8 VAR_5;
 struct llc_pdu_sn *VAR_6 = FUNC_9(VAR_4);
 int VAR_7 = -VAR_0;
 struct llc_sock *VAR_8 = FUNC_10(VAR_3);
 struct sk_buff *VAR_9 = FUNC_3(VAR_3, VAR_8->dev, VAR_2, 0);

 if (VAR_9) {
  struct llc_sap *VAR_10 = VAR_8->sap;

  FUNC_7(VAR_9, VAR_2, VAR_10->laddr.lsap,
        VAR_8->daddr.lsap, VAR_1);
  FUNC_8(VAR_9, 0, VAR_8->vR);
  VAR_7 = FUNC_6(VAR_9, VAR_8->dev->dev_addr, VAR_8->daddr.mac);
  if (FUNC_2(!VAR_7))
   FUNC_5(VAR_3, VAR_9);
  else
   FUNC_1(VAR_4);
 }
 if (VAR_7) {
  VAR_5 = FUNC_0(VAR_6);
  VAR_7 = 0;
  FUNC_4(VAR_3, VAR_5, 0);
 }
 return VAR_7;
}
