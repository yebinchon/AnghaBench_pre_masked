
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int name; } ;
struct hci_cp_le_ext_create_conn {int filter_policy; int own_addr_type; int peer_addr_type; int peer_addr; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*,int *,int ,int ,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 struct hci_cp_le_ext_create_conn* FUNC_4 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_1, u8 VAR_2)
{
 struct hci_cp_le_ext_create_conn *VAR_3;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_2);





 if (VAR_2)
  return;

 VAR_3 = FUNC_4(VAR_1, VAR_0);
 if (!VAR_3)
  return;

 FUNC_2(VAR_1);

 FUNC_1(VAR_1, &VAR_3->peer_addr, VAR_3->peer_addr_type,
     VAR_3->own_addr_type, VAR_3->filter_policy);

 FUNC_3(VAR_1);
}
