
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct nfc_dev {int cur_cmd_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__,int ,int) ;

int FUNC_5(struct sk_buff *VAR_1)
{
 struct nfc_dev *VAR_2 = ((void **)VAR_1->cb)[0];
 void *VAR_3 = ((void **)VAR_1->cb)[1];


 FUNC_4(VAR_1->cb, 0, sizeof(VAR_1->cb));

 if (FUNC_0(!VAR_2->cur_cmd_info)) {
  FUNC_3(VAR_1);
  return -VAR_0;
 }

 FUNC_1(VAR_1, VAR_3);
 return FUNC_2(VAR_1, VAR_2->cur_cmd_info);
}
