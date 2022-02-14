
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int* data; } ;
struct nfc_hci_dev {int sw_romlib; int sw_patch; int sw_flashlib_major; int sw_flashlib_minor; int hw_derivative; int hw_version; int hw_mpw; int hw_software; int hw_bsid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,struct sk_buff**) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct nfc_hci_dev *VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7;

 VAR_6 = FUNC_1(VAR_5, VAR_2,
         VAR_4, &VAR_7);
 if (VAR_6 == -VAR_1) {
  FUNC_2("Software/Hardware info not available\n");
  return 0;
 }
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_7->len != 3) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }

 VAR_5->sw_romlib = (VAR_7->data[0] & 0xf0) >> 4;
 VAR_5->sw_patch = VAR_7->data[0] & 0x0f;
 VAR_5->sw_flashlib_major = VAR_7->data[1];
 VAR_5->sw_flashlib_minor = VAR_7->data[2];

 FUNC_0(VAR_7);

 VAR_6 = FUNC_1(VAR_5, VAR_2,
         VAR_3, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_7->len != 3) {
  FUNC_0(VAR_7);
  return -VAR_0;
 }

 VAR_5->hw_derivative = (VAR_7->data[0] & 0xe0) >> 5;
 VAR_5->hw_version = VAR_7->data[0] & 0x1f;
 VAR_5->hw_mpw = (VAR_7->data[1] & 0xc0) >> 6;
 VAR_5->hw_software = VAR_7->data[1] & 0x3f;
 VAR_5->hw_bsid = VAR_7->data[2];

 FUNC_0(VAR_7);

 FUNC_2("SOFTWARE INFO:\n");
 FUNC_2("RomLib         : %d\n", VAR_5->sw_romlib);
 FUNC_2("Patch          : %d\n", VAR_5->sw_patch);
 FUNC_2("FlashLib Major : %d\n", VAR_5->sw_flashlib_major);
 FUNC_2("FlashLib Minor : %d\n", VAR_5->sw_flashlib_minor);
 FUNC_2("HARDWARE INFO:\n");
 FUNC_2("Derivative     : %d\n", VAR_5->hw_derivative);
 FUNC_2("HW Version     : %d\n", VAR_5->hw_version);
 FUNC_2("#MPW           : %d\n", VAR_5->hw_mpw);
 FUNC_2("Software       : %d\n", VAR_5->hw_software);
 FUNC_2("BSID Version   : %d\n", VAR_5->hw_bsid);

 return 0;
}
