
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;
struct hci_cp_le_set_ext_adv_enable {int enable; int num_of_sets; int duration; int handle; scalar_t__ data; } ;
struct hci_cp_ext_adv_set {int enable; int num_of_sets; int duration; int handle; scalar_t__ data; } ;
struct adv_info {int duration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct adv_info* FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_request*,int ,int,int *) ;
 int FUNC_3 (struct hci_cp_le_set_ext_adv_enable*,int ,int) ;

int FUNC_4(struct hci_request *VAR_3, u8 VAR_4)
{
 struct hci_dev *VAR_5 = VAR_3->hdev;
 struct hci_cp_le_set_ext_adv_enable *VAR_6;
 struct hci_cp_ext_adv_set *VAR_7;
 u8 VAR_8[sizeof(*VAR_6) + sizeof(*VAR_7) * 1];
 struct adv_info *VAR_9;

 if (VAR_4 > 0) {
  VAR_9 = FUNC_1(VAR_5, VAR_4);
  if (!VAR_9)
   return -VAR_0;
 } else {
  VAR_9 = ((void*)0);
 }

 VAR_6 = (void *) VAR_8;
 VAR_7 = (void *) VAR_6->data;

 FUNC_3(VAR_6, 0, sizeof(*VAR_6));

 VAR_6->enable = 0x01;
 VAR_6->num_of_sets = 0x01;

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->handle = VAR_4;




 if (VAR_9 && VAR_9->duration) {
  u16 VAR_10 = VAR_9->duration * VAR_2;


  VAR_7->duration = FUNC_0(VAR_10 / 10);
 }

 FUNC_2(VAR_3, VAR_1,
      sizeof(*VAR_6) + sizeof(*VAR_7) * VAR_6->num_of_sets,
      VAR_8);

 return 0;
}
