
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct hci_rp_read_clock {int accuracy; int clock; int handle; scalar_t__ status; } ;
struct hci_dev {void* clock; int name; } ;
struct hci_cp_read_clock {int which; } ;
struct hci_conn {int clock_accuracy; void* clock; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 struct hci_cp_read_clock* FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_rp_read_clock *VAR_3 = (void *) VAR_2->data;
 struct hci_cp_read_clock *VAR_4;
 struct hci_conn *VAR_5;

 FUNC_0("%s", VAR_1->name);

 if (VAR_2->len < sizeof(*VAR_3))
  return;

 if (VAR_3->status)
  return;

 FUNC_3(VAR_1);

 VAR_4 = FUNC_5(VAR_1, VAR_0);
 if (!VAR_4)
  goto unlock;

 if (VAR_4->which == 0x00) {
  VAR_1->clock = FUNC_7(VAR_3->clock);
  goto unlock;
 }

 VAR_5 = FUNC_2(VAR_1, FUNC_1(VAR_3->handle));
 if (VAR_5) {
  VAR_5->clock = FUNC_7(VAR_3->clock);
  VAR_5->clock_accuracy = FUNC_6(VAR_3->accuracy);
 }

unlock:
 FUNC_4(VAR_1);
}
