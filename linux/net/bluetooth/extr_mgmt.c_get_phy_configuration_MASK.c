
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_get_phy_confguration {void* configurable_phys; void* selected_phys; void* supported_phys; } ;
struct hci_dev {int id; int name; } ;
typedef int rp ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct mgmt_rp_get_phy_confguration*,int ,int) ;
 int FUNC_8 (struct sock*,int ,int ,int ,struct mgmt_rp_get_phy_confguration*,int) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_1, struct hci_dev *VAR_2,
     void *VAR_3, u16 VAR_4)
{
 struct mgmt_rp_get_phy_confguration VAR_5;

 FUNC_0("sock %p %s", VAR_1, VAR_2->name);

 FUNC_5(VAR_2);

 FUNC_7(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.supported_phys = FUNC_1(FUNC_4(VAR_2));
 VAR_5.selected_phys = FUNC_1(FUNC_3(VAR_2));
 VAR_5.configurable_phys = FUNC_1(FUNC_2(VAR_2));

 FUNC_6(VAR_2);

 return FUNC_8(VAR_1, VAR_2->id, VAR_0, 0,
     &VAR_5, sizeof(VAR_5));
}
