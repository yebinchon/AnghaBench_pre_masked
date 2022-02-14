
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_digital_dev {int curr_rf_tech; int skb_check_crc; int skb_add_crc; } ;


 scalar_t__ FUNC_0 (struct nfc_digital_dev*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct nfc_digital_dev *VAR_6, u8 VAR_7)
{
 VAR_6->curr_rf_tech = VAR_7;

 VAR_6->skb_add_crc = VAR_2;
 VAR_6->skb_check_crc = VAR_5;

 if (FUNC_0(VAR_6))
  return;

 switch (VAR_6->curr_rf_tech) {
 case 130:
  VAR_6->skb_add_crc = VAR_0;
  VAR_6->skb_check_crc = VAR_3;
  break;

 case 129:
 case 128:
  VAR_6->skb_add_crc = VAR_1;
  VAR_6->skb_check_crc = VAR_4;
  break;

 default:
  break;
 }
}
