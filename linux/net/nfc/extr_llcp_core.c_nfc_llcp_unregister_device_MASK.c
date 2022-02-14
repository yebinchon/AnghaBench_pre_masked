
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llcp_local {int dummy; } ;
struct nfc_dev {int dummy; } ;


 int FUNC_0 (struct nfc_llcp_local*) ;
 struct nfc_llcp_local* FUNC_1 (struct nfc_dev*) ;
 int FUNC_2 (struct nfc_llcp_local*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct nfc_dev *VAR_0)
{
 struct nfc_llcp_local *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 == ((void*)0)) {
  FUNC_3("No such device\n");
  return;
 }

 FUNC_0(VAR_1);

 FUNC_2(VAR_1);
}
