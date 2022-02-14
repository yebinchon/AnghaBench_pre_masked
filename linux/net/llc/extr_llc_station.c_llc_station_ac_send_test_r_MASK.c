
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_4__ {int h_proto; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,int ,int *) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct sk_buff*,int *) ;
 int FUNC_7 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_8 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_3)
{
 u8 VAR_4[VAR_0], VAR_5;
 int VAR_6 = 1;
 u32 VAR_7;
 struct sk_buff *VAR_8;


 VAR_7 = FUNC_9(FUNC_1(VAR_3)->h_proto) - 3;
 VAR_8 = FUNC_3(((void*)0), VAR_3->dev, VAR_2, VAR_7);

 if (!VAR_8)
  goto out;
 VAR_6 = 0;
 FUNC_5(VAR_3, VAR_4);
 FUNC_6(VAR_3, &VAR_5);
 FUNC_7(VAR_8, VAR_2, 0, VAR_5, VAR_1);
 FUNC_8(VAR_8, VAR_3);
 VAR_6 = FUNC_4(VAR_8, VAR_3->dev->dev_addr, VAR_4);
 if (FUNC_10(VAR_6))
  goto free;
 FUNC_0(VAR_8);
out:
 return VAR_6;
free:
 FUNC_2(VAR_8);
 goto out;
}
