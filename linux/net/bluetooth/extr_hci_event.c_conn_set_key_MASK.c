
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_conn {int pin_length; int key_type; void* pending_sec_level; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;


 int VAR_3 ;







__attribute__((used)) static void FUNC_0(struct hci_conn *VAR_4, u8 VAR_5, u8 VAR_6)
{
 if (VAR_5 == VAR_3)
  return;

 VAR_4->pin_length = VAR_6;
 VAR_4->key_type = VAR_5;

 switch (VAR_5) {
 case 131:
 case 130:
 case 132:
  return;
 case 133:
  if (VAR_6 == 16)
   VAR_4->pending_sec_level = VAR_1;
  else
   VAR_4->pending_sec_level = VAR_2;
  break;
 case 129:
 case 128:
  VAR_4->pending_sec_level = VAR_2;
  break;
 case 135:
  VAR_4->pending_sec_level = VAR_1;
  break;
 case 134:
  VAR_4->pending_sec_level = VAR_0;
  break;
 }
}
