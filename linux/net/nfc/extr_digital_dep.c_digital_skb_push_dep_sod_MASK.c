
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int * data; } ;
struct nfc_digital_dev {scalar_t__ curr_rf_tech; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_1(struct nfc_digital_dev *VAR_2,
         struct sk_buff *VAR_3)
{
 FUNC_0(VAR_3, sizeof(u8));

 VAR_3->data[0] = VAR_3->len;

 if (VAR_2->curr_rf_tech == VAR_1)
  *(u8 *)FUNC_0(VAR_3, sizeof(u8)) = VAR_0;
}
