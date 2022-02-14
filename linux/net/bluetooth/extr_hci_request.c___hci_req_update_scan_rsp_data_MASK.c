
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {void* scan_rsp_data_len; int scan_rsp_data; } ;
struct hci_cp_le_set_scan_rsp_data {void* length; int data; int frag_pref; int operation; scalar_t__ handle; } ;
struct hci_cp_le_set_ext_scan_rsp_data {void* length; int data; int frag_pref; int operation; scalar_t__ handle; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct hci_dev*,int ) ;
 void* FUNC_1 (struct hci_dev*,void*,int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_request*,int ,int,struct hci_cp_le_set_scan_rsp_data*) ;
 int FUNC_5 (int ,int ,void*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct hci_cp_le_set_scan_rsp_data*,int ,int) ;

void FUNC_8(struct hci_request *VAR_5, u8 VAR_6)
{
 struct hci_dev *VAR_7 = VAR_5->hdev;
 u8 VAR_8;

 if (!FUNC_3(VAR_7, VAR_0))
  return;

 if (FUNC_2(VAR_7)) {
  struct hci_cp_le_set_ext_scan_rsp_data VAR_9;

  FUNC_7(&VAR_9, 0, sizeof(VAR_9));

  if (VAR_6)
   VAR_8 = FUNC_1(VAR_7, VAR_6,
           VAR_9.data);
  else
   VAR_8 = FUNC_0(VAR_7, VAR_9.data);

  if (VAR_7->scan_rsp_data_len == VAR_8 &&
      !FUNC_5(VAR_9.data, VAR_7->scan_rsp_data, VAR_8))
   return;

  FUNC_6(VAR_7->scan_rsp_data, VAR_9.data, sizeof(VAR_9.data));
  VAR_7->scan_rsp_data_len = VAR_8;

  VAR_9.handle = 0;
  VAR_9.length = VAR_8;
  VAR_9.operation = VAR_4;
  VAR_9.frag_pref = VAR_3;

  FUNC_4(VAR_5, VAR_1, sizeof(VAR_9),
       &VAR_9);
 } else {
  struct hci_cp_le_set_scan_rsp_data VAR_10;

  FUNC_7(&VAR_10, 0, sizeof(VAR_10));

  if (VAR_6)
   VAR_8 = FUNC_1(VAR_7, VAR_6,
           VAR_10.data);
  else
   VAR_8 = FUNC_0(VAR_7, VAR_10.data);

  if (VAR_7->scan_rsp_data_len == VAR_8 &&
      !FUNC_5(VAR_10.data, VAR_7->scan_rsp_data, VAR_8))
   return;

  FUNC_6(VAR_7->scan_rsp_data, VAR_10.data, sizeof(VAR_10.data));
  VAR_7->scan_rsp_data_len = VAR_8;

  VAR_10.length = VAR_8;

  FUNC_4(VAR_5, VAR_2, sizeof(VAR_10), &VAR_10);
 }
}
