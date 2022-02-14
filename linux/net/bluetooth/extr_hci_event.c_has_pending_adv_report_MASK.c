
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discovery_state {int last_adv_addr; } ;
struct hci_dev {struct discovery_state discovery; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static bool FUNC_1(struct hci_dev *VAR_1)
{
 struct discovery_state *VAR_2 = &VAR_1->discovery;

 return FUNC_0(&VAR_2->last_adv_addr, VAR_0);
}
