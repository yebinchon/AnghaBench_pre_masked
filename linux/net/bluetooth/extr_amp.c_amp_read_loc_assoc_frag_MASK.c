
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {int dummy; } ;
struct amp_assoc {int offset; } ;
struct hci_dev {int amp_assoc_size; int name; struct amp_assoc loc_assoc; } ;
struct hci_cp_read_local_amp_assoc {void* len_so_far; void* max_len; int phy_handle; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct hci_request*,int ,int,struct hci_cp_read_local_amp_assoc*) ;
 int FUNC_4 (struct hci_request*,struct hci_dev*) ;
 int FUNC_5 (struct hci_request*,int ) ;
 int VAR_2 ;

void FUNC_6(struct hci_dev *VAR_3, u8 VAR_4)
{
 struct hci_cp_read_local_amp_assoc VAR_5;
 struct amp_assoc *VAR_6 = &VAR_3->loc_assoc;
 struct hci_request VAR_7;
 int VAR_8;

 FUNC_0("%s handle %d", VAR_3->name, VAR_4);

 VAR_5.phy_handle = VAR_4;
 VAR_5.max_len = FUNC_2(VAR_3->amp_assoc_size);
 VAR_5.len_so_far = FUNC_2(VAR_6->offset);

 FUNC_4(&VAR_7, VAR_3);
 FUNC_3(&VAR_7, VAR_1, sizeof(VAR_5), &VAR_5);
 VAR_8 = FUNC_5(&VAR_7, VAR_2);
 if (VAR_8 < 0)
  FUNC_1(VAR_3, VAR_0);
}
