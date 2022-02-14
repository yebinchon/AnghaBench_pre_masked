
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct adv_info {int scan_rsp_len; } ;


 struct adv_info* FUNC_0 (struct hci_dev*,int) ;

__attribute__((used)) static u8 FUNC_1(struct hci_dev *VAR_0, u8 VAR_1)
{
 struct adv_info *VAR_2;


 if (VAR_1 == 0x00)
  return 0;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;




 return VAR_2->scan_rsp_len;
}
