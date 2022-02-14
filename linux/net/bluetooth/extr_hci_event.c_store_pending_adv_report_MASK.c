
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct discovery_state {void* last_adv_data_len; int last_adv_data; int last_adv_flags; int last_adv_rssi; void* last_adv_addr_type; int last_adv_addr; } ;
struct hci_dev {struct discovery_state discovery; } ;
typedef int s8 ;
typedef int bdaddr_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,void**,void*) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_0, bdaddr_t *VAR_1,
         u8 VAR_2, s8 VAR_3, u32 VAR_4,
         u8 *VAR_5, u8 VAR_6)
{
 struct discovery_state *VAR_7 = &VAR_0->discovery;

 FUNC_0(&VAR_7->last_adv_addr, VAR_1);
 VAR_7->last_adv_addr_type = VAR_2;
 VAR_7->last_adv_rssi = VAR_3;
 VAR_7->last_adv_flags = VAR_4;
 FUNC_1(VAR_7->last_adv_data, VAR_5, VAR_6);
 VAR_7->last_adv_data_len = VAR_6;
}
