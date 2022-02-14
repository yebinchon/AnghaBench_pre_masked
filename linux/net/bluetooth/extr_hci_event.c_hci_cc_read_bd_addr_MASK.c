
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_bd_addr {int bdaddr; scalar_t__ status; } ;
struct hci_dev {int setup_addr; int bdaddr; int flags; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_rp_read_bd_addr *VAR_4 = (void *) VAR_3->data;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4->status);

 if (VAR_4->status)
  return;

 if (FUNC_3(VAR_0, &VAR_2->flags))
  FUNC_1(&VAR_2->bdaddr, &VAR_4->bdaddr);

 if (FUNC_2(VAR_2, VAR_1))
  FUNC_1(&VAR_2->setup_addr, &VAR_4->bdaddr);
}
