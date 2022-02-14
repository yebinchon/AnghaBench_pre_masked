
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_conn {int disc_reason; } ;
struct hci_conn {struct l2cap_conn* l2cap_data; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;

int FUNC_1(struct hci_conn *VAR_1)
{
 struct l2cap_conn *VAR_2 = VAR_1->l2cap_data;

 FUNC_0("hcon %p", VAR_1);

 if (!VAR_2)
  return VAR_0;
 return VAR_2->disc_reason;
}
