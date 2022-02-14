
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct mgmt_ev_phy_configuration_changed {int selected_phys; } ;
struct hci_dev {int dummy; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct mgmt_ev_phy_configuration_changed*,int ,int) ;
 int FUNC_3 (int ,struct hci_dev*,struct mgmt_ev_phy_configuration_changed*,int,struct sock*) ;

int FUNC_4(struct hci_dev *VAR_1, struct sock *VAR_2)
{
 struct mgmt_ev_phy_configuration_changed VAR_3;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.selected_phys = FUNC_0(FUNC_1(VAR_1));

 return FUNC_3(VAR_0, VAR_1, &VAR_3,
     sizeof(VAR_3), VAR_2);
}
