
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hci_request {int dummy; } ;
struct hci_dev {int cur_adv_instance; } ;
struct adv_info {int flags; int instance; } ;


 int FUNC_0 (struct hci_request*,int ,int) ;
 int FUNC_1 (struct hci_dev*) ;
 struct adv_info* FUNC_2 (struct hci_dev*,int ) ;
 struct adv_info* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_request*,struct hci_dev*) ;
 int FUNC_5 (struct hci_request*,int *) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_0, u32 VAR_1)
{
 struct adv_info *VAR_2;
 struct hci_request VAR_3;
 int VAR_4;

 VAR_2 = FUNC_2(VAR_0, VAR_0->cur_adv_instance);
 if (!VAR_2)
  return;


 if (!(VAR_2->flags & VAR_1))
  return;

 FUNC_1(VAR_0);

 VAR_2 = FUNC_3(VAR_0, VAR_2->instance);
 if (!VAR_2)
  return;

 FUNC_4(&VAR_3, VAR_0);
 VAR_4 = FUNC_0(&VAR_3, VAR_2->instance,
           1);
 if (VAR_4)
  return;

 FUNC_5(&VAR_3, ((void*)0));
}
