
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {TYPE_1__* dev; } ;
struct llc_xid_info {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *,TYPE_1__*,int ,int) ;
 int FUNC_3 (struct sk_buff*,int ,int *) ;
 int FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_4)
{
 u8 VAR_5[VAR_0], VAR_6;
 int VAR_7 = 1;
 struct sk_buff *VAR_8 = FUNC_2(((void*)0), VAR_4->dev, VAR_2,
            sizeof(struct llc_xid_info));

 if (!VAR_8)
  goto out;
 VAR_7 = 0;
 FUNC_4(VAR_4, VAR_5);
 FUNC_5(VAR_4, &VAR_6);
 FUNC_6(VAR_8, VAR_2, 0, VAR_6, VAR_1);
 FUNC_7(VAR_8, VAR_3, 127);
 VAR_7 = FUNC_3(VAR_8, VAR_4->dev->dev_addr, VAR_5);
 if (FUNC_8(VAR_7))
  goto free;
 FUNC_0(VAR_8);
out:
 return VAR_7;
free:
 FUNC_1(VAR_8);
 goto out;
}
