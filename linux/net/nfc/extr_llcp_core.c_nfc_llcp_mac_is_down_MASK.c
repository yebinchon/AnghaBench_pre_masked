
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llcp_local {int remote_lto; int remote_miu; } ;
struct nfc_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfc_llcp_local* FUNC_0 (struct nfc_dev*) ;
 int FUNC_1 (struct nfc_llcp_local*,int,int ) ;

void FUNC_2(struct nfc_dev *VAR_2)
{
 struct nfc_llcp_local *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == ((void*)0))
  return;

 VAR_3->remote_miu = VAR_1;
 VAR_3->remote_lto = VAR_0;


 FUNC_1(VAR_3, 1, 0);
}
