
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int* data; } ;
struct nfc_digital_dev {scalar_t__ curr_rf_tech; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct nfc_digital_dev *VAR_2,
        struct sk_buff *VAR_3)
{
 u8 VAR_4;

 if (VAR_3->len < 2)
  return -VAR_0;

 if (VAR_2->curr_rf_tech == VAR_1)
  FUNC_0(VAR_3, sizeof(u8));

 VAR_4 = VAR_3->data[0];
 if (VAR_4 != VAR_3->len)
  return -VAR_0;

 FUNC_0(VAR_3, sizeof(u8));

 return 0;
}
