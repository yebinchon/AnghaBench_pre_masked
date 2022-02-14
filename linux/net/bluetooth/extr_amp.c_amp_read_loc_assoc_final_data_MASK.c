
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {int dummy; } ;
struct hci_dev {int amp_assoc_size; } ;
struct hci_cp_read_local_amp_assoc {void* max_len; void* len_so_far; int phy_handle; } ;
struct hci_conn {int handle; struct amp_mgr* amp_mgr; } ;
struct amp_mgr {int state; } ;
typedef int cp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hci_request*,int ,int,struct hci_cp_read_local_amp_assoc*) ;
 int FUNC_3 (struct hci_request*,struct hci_dev*) ;
 int FUNC_4 (struct hci_request*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct hci_dev *VAR_4,
       struct hci_conn *VAR_5)
{
 struct hci_cp_read_local_amp_assoc VAR_6;
 struct amp_mgr *VAR_7 = VAR_5->amp_mgr;
 struct hci_request VAR_8;
 int VAR_9;

 VAR_6.phy_handle = VAR_5->handle;
 VAR_6.len_so_far = FUNC_1(0);
 VAR_6.max_len = FUNC_1(VAR_4->amp_assoc_size);

 FUNC_5(VAR_2, &VAR_7->state);


 FUNC_3(&VAR_8, VAR_4);
 FUNC_2(&VAR_8, VAR_1, sizeof(VAR_6), &VAR_6);
 VAR_9 = FUNC_4(&VAR_8, VAR_3);
 if (VAR_9 < 0)
  FUNC_0(VAR_4, VAR_0);
}
