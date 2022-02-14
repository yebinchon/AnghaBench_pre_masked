
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_llcp_local {size_t gb_len; int * gb; } ;
struct nfc_dev {int dummy; } ;


 int FUNC_0 (struct nfc_llcp_local*) ;
 struct nfc_llcp_local* FUNC_1 (struct nfc_dev*) ;

u8 *FUNC_2(struct nfc_dev *VAR_0, size_t *VAR_1)
{
 struct nfc_llcp_local *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == ((void*)0)) {
  *VAR_1 = 0;
  return ((void*)0);
 }

 FUNC_0(VAR_2);

 *VAR_1 = VAR_2->gb_len;

 return VAR_2->gb;
}
