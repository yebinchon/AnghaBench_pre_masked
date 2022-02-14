
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_set_scan_enable {void* filter_dup; void* enable; } ;
struct hci_cp_le_set_ext_scan_enable {void* filter_dup; void* enable; } ;
typedef int ext_enable_cp ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_le_set_scan_enable*) ;
 int FUNC_2 (struct hci_request*) ;
 int FUNC_3 (struct hci_cp_le_set_scan_enable*,int ,int) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_5(struct hci_request *VAR_5, unsigned long VAR_6)
{
 struct hci_dev *VAR_7 = VAR_5->hdev;


 if (!FUNC_0(VAR_7, VAR_0))
  return 0;

 FUNC_2(VAR_5);

 if (FUNC_4(VAR_7)) {
  struct hci_cp_le_set_ext_scan_enable VAR_8;

  FUNC_3(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.enable = VAR_3;
  VAR_8.filter_dup = VAR_4;

  FUNC_1(VAR_5, VAR_1,
       sizeof(VAR_8), &VAR_8);
 } else {
  struct hci_cp_le_set_scan_enable VAR_9;

  FUNC_3(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.enable = VAR_3;
  VAR_9.filter_dup = VAR_4;
  FUNC_1(VAR_5, VAR_2, sizeof(VAR_9), &VAR_9);
 }

 return 0;
}
