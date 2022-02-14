
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int dummy; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nfc_llcp_local* FUNC_2 (struct nfc_dev*) ;

int FUNC_3(struct nfc_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct nfc_llcp_local *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2);
  return -VAR_0;
 }

 FUNC_0(VAR_3, VAR_2);

 return 0;
}
