
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {int dummy; } ;
struct hci_cp_read_local_amp_assoc {int max_len; } ;
struct hci_dev {int amp_assoc_size; struct hci_cp_read_local_amp_assoc loc_assoc; } ;
struct amp_mgr {int state; } ;
struct amp_assoc {int dummy; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_request*,int ,int,struct hci_cp_read_local_amp_assoc*) ;
 int FUNC_3 (struct hci_request*,struct hci_dev*) ;
 int FUNC_4 (struct hci_request*,int ) ;
 int FUNC_5 (struct hci_cp_read_local_amp_assoc*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *) ;

void FUNC_7(struct hci_dev *VAR_4, struct amp_mgr *VAR_5)
{
 struct hci_cp_read_local_amp_assoc VAR_6;
 struct hci_request VAR_7;
 int VAR_8;

 FUNC_5(&VAR_4->loc_assoc, 0, sizeof(struct amp_assoc));
 FUNC_5(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.max_len = FUNC_1(VAR_4->amp_assoc_size);

 FUNC_6(VAR_2, &VAR_5->state);
 FUNC_3(&VAR_7, VAR_4);
 FUNC_2(&VAR_7, VAR_1, sizeof(VAR_6), &VAR_6);
 VAR_8 = FUNC_4(&VAR_7, VAR_3);
 if (VAR_8 < 0)
  FUNC_0(VAR_4, VAR_0);
}
