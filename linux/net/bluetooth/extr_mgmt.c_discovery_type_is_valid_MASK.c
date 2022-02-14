
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hci_dev {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;

__attribute__((used)) static bool FUNC_2(struct hci_dev *VAR_1, uint8_t VAR_2,
        uint8_t *VAR_3)
{
 switch (VAR_2) {
 case 128:
  *VAR_3 = FUNC_1(VAR_1);
  if (*VAR_3)
   return 0;
  break;
 case 129:
  *VAR_3 = FUNC_1(VAR_1);
  if (*VAR_3)
   return 0;

 case 130:
  *VAR_3 = FUNC_0(VAR_1);
  if (*VAR_3)
   return 0;
  break;
 default:
  *VAR_3 = VAR_0;
  return 0;
 }

 return 1;
}
