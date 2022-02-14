
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dev; } ;
struct llc_xid_info {int dummy; } ;
struct TYPE_2__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (struct sk_buff*,int *,int *) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct sk_buff*,int *) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;

int FUNC_9(struct llc_sap *VAR_4, struct sk_buff *VAR_5)
{
 u8 VAR_6[VAR_0], VAR_7[VAR_0], VAR_8;
 int VAR_9 = 1;
 struct sk_buff *VAR_10;

 FUNC_5(VAR_5, VAR_6);
 FUNC_4(VAR_5, VAR_7);
 FUNC_6(VAR_5, &VAR_8);
 VAR_10 = FUNC_2(((void*)0), VAR_5->dev, VAR_2,
          sizeof(struct llc_xid_info));
 if (!VAR_10)
  goto out;
 FUNC_7(VAR_10, VAR_2, VAR_4->laddr.lsap, VAR_8,
       VAR_1);
 FUNC_8(VAR_10, VAR_3, 0);
 VAR_9 = FUNC_3(VAR_10, VAR_7, VAR_6);
 if (FUNC_1(!VAR_9))
  VAR_9 = FUNC_0(VAR_10);
out:
 return VAR_9;
}
