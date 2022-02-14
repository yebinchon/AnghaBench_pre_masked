
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_page_scan_activity {int window; int interval; scalar_t__ status; } ;
struct hci_dev {void* page_scan_window; void* page_scan_interval; int flags; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_1,
        struct sk_buff *VAR_2)
{
 struct hci_rp_read_page_scan_activity *VAR_3 = (void *) VAR_2->data;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 if (FUNC_2(VAR_0, &VAR_1->flags)) {
  VAR_1->page_scan_interval = FUNC_1(VAR_3->interval);
  VAR_1->page_scan_window = FUNC_1(VAR_3->window);
 }
}
