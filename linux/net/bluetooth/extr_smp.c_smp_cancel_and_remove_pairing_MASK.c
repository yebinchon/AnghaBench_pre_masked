
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_chan {int flags; int * remote_irk; int * slave_ltk; int * ltk; } ;
struct l2cap_conn {struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {struct l2cap_conn* l2cap_data; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct hci_conn* FUNC_0 (struct hci_dev*,int *,int ) ;
 int FUNC_1 (struct hci_dev*,int *,int ) ;
 int FUNC_2 (struct hci_dev*,int *,int ) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_conn*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct hci_dev *VAR_2, bdaddr_t *VAR_3,
      u8 VAR_4)
{
 struct hci_conn *VAR_5;
 struct l2cap_conn *VAR_6;
 struct l2cap_chan *VAR_7;
 struct smp_chan *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_2, VAR_3, VAR_4);

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  goto done;

 VAR_6 = VAR_5->l2cap_data;
 if (!VAR_6)
  goto done;

 VAR_7 = VAR_6->smp;
 if (!VAR_7)
  goto done;

 FUNC_3(VAR_7);

 VAR_8 = VAR_7->data;
 if (VAR_8) {


  VAR_8->ltk = ((void*)0);
  VAR_8->slave_ltk = ((void*)0);
  VAR_8->remote_irk = ((void*)0);

  if (FUNC_6(VAR_0, &VAR_8->flags))
   FUNC_5(VAR_6, 0);
  else
   FUNC_5(VAR_6, VAR_1);
  VAR_9 = 0;
 }

 FUNC_4(VAR_7);

done:
 return VAR_9;
}
