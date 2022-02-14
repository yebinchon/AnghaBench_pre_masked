
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mgmt_rp_get_clock_info {int accuracy; void* piconet_clock; void* local_clock; int addr; } ;
struct mgmt_pending_cmd {int opcode; int index; int sk; int param; struct hci_conn* user_data; } ;
struct hci_dev {int clock; } ;
struct hci_conn {int clock_accuracy; int clock; } ;
typedef int rp ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 struct hci_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct mgmt_rp_get_clock_info*,int ,int) ;
 int FUNC_8 (int ,int ,int ,scalar_t__,struct mgmt_rp_get_clock_info*,int) ;

__attribute__((used)) static int FUNC_9(struct mgmt_pending_cmd *VAR_0, u8 VAR_1)
{
 struct hci_conn *VAR_2 = VAR_0->user_data;
 struct mgmt_rp_get_clock_info VAR_3;
 struct hci_dev *VAR_4;
 int VAR_5;

 FUNC_7(&VAR_3, 0, sizeof(VAR_3));
 FUNC_6(&VAR_3.addr, VAR_0->param, sizeof(VAR_3.addr));

 if (VAR_1)
  goto complete;

 VAR_4 = FUNC_4(VAR_0->index);
 if (VAR_4) {
  VAR_3.local_clock = FUNC_1(VAR_4->clock);
  FUNC_5(VAR_4);
 }

 if (VAR_2) {
  VAR_3.piconet_clock = FUNC_1(VAR_2->clock);
  VAR_3.accuracy = FUNC_0(VAR_2->clock_accuracy);
 }

complete:
 VAR_5 = FUNC_8(VAR_0->sk, VAR_0->index, VAR_0->opcode, VAR_1, &VAR_3,
    sizeof(VAR_3));

 if (VAR_2) {
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 }

 return VAR_5;
}
