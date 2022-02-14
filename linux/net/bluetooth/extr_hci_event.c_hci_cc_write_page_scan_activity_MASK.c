
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_dev {void* page_scan_window; void* page_scan_interval; int name; } ;
struct hci_cp_write_page_scan_activity {int window; int interval; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 struct hci_cp_write_page_scan_activity* FUNC_2 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_1,
         struct sk_buff *VAR_2)
{
 u8 VAR_3 = *((u8 *) VAR_2->data);
 struct hci_cp_write_page_scan_activity *VAR_4;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3);

 if (VAR_3)
  return;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_4)
  return;

 VAR_1->page_scan_interval = FUNC_1(VAR_4->interval);
 VAR_1->page_scan_window = FUNC_1(VAR_4->window);
}
