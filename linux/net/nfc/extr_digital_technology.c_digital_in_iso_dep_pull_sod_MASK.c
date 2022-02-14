
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int len; scalar_t__* data; } ;
struct nfc_digital_dev {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sk_buff*,int) ;

int FUNC_4(struct nfc_digital_dev *VAR_2,
    struct sk_buff *VAR_3)
{
 u8 VAR_4;
 u8 VAR_5;

 if (VAR_3->len < 1)
  return -VAR_1;

 VAR_4 = *VAR_3->data;
 VAR_5 = FUNC_1(VAR_4);


 if (VAR_5 != VAR_0) {
  FUNC_2("ISO_DEP R-block and S-block not supported\n");
  return -VAR_1;
 }

 if (FUNC_0(VAR_4)) {
  FUNC_2("DID field in ISO_DEP PCB not supported\n");
  return -VAR_1;
 }

 FUNC_3(VAR_3, 1);

 return 0;
}
