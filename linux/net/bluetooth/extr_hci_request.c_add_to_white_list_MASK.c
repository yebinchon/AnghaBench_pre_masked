
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {int dummy; } ;
struct hci_cp_le_add_to_white_list {int bdaddr; int bdaddr_type; } ;
struct hci_conn_params {int addr; int addr_type; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct hci_request*,int ,int,struct hci_cp_le_add_to_white_list*) ;

__attribute__((used)) static void FUNC_2(struct hci_request *VAR_1,
         struct hci_conn_params *VAR_2)
{
 struct hci_cp_le_add_to_white_list VAR_3;

 VAR_3.bdaddr_type = VAR_2->addr_type;
 FUNC_0(&VAR_3.bdaddr, &VAR_2->addr);

 FUNC_1(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
