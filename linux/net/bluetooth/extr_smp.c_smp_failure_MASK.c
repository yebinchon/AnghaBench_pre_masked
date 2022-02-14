
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct l2cap_conn {struct l2cap_chan* smp; struct hci_conn* hcon; } ;
struct l2cap_chan {scalar_t__ data; } ;
struct hci_conn {int dummy; } ;
typedef int reason ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_conn*,int ) ;
 int FUNC_1 (struct l2cap_conn*) ;
 int FUNC_2 (struct l2cap_conn*,int ,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_conn *VAR_2, u8 VAR_3)
{
 struct hci_conn *VAR_4 = VAR_2->hcon;
 struct l2cap_chan *VAR_5 = VAR_2->smp;

 if (VAR_3)
  FUNC_2(VAR_2, VAR_1, sizeof(VAR_3),
        &VAR_3);

 FUNC_0(VAR_4, VAR_0);

 if (VAR_5->data)
  FUNC_1(VAR_2);
}
