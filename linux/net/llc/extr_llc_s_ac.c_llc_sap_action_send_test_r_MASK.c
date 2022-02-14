
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dev; } ;
struct TYPE_3__ {int lsap; } ;
struct llc_sap {TYPE_1__ laddr; } ;
struct TYPE_4__ {int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (int *,int ,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int *,int *) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct sk_buff*,int *) ;
 int FUNC_7 (struct sk_buff*,int *) ;
 int FUNC_8 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct llc_sap *VAR_3, struct sk_buff *VAR_4)
{
 u8 VAR_5[VAR_0], VAR_6[VAR_0], VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9 = 1;
 u32 VAR_10;

 FUNC_6(VAR_4, VAR_5);
 FUNC_5(VAR_4, VAR_6);
 FUNC_7(VAR_4, &VAR_7);


 VAR_10 = FUNC_10(FUNC_1(VAR_4)->h_proto) - 3;
 VAR_8 = FUNC_3(((void*)0), VAR_4->dev, VAR_2, VAR_10);
 if (!VAR_8)
  goto out;
 FUNC_8(VAR_8, VAR_2, VAR_3->laddr.lsap, VAR_7,
       VAR_1);
 FUNC_9(VAR_8, VAR_4);
 VAR_9 = FUNC_4(VAR_8, VAR_6, VAR_5);
 if (FUNC_2(!VAR_9))
  VAR_9 = FUNC_0(VAR_8);
out:
 return VAR_9;
}
