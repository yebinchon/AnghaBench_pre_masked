
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_cmd_pairing {int dummy; } ;
struct smp_chan {int * preq; int flags; } ;
struct l2cap_conn {int remote_fixed_chan; struct hci_conn* hcon; } ;
struct l2cap_chan {scalar_t__ data; struct l2cap_conn* conn; } ;
struct hci_dev {struct l2cap_chan* name; } ;
struct hci_conn {scalar_t__ role; int flags; struct hci_dev* hdev; } ;
typedef int req ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct hci_dev*,char*) ;
 int FUNC_3 (struct smp_chan*,struct smp_cmd_pairing*,int *) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_conn*) ;
 int FUNC_6 (int *,struct smp_cmd_pairing*,int) ;
 int FUNC_7 (int ,int *) ;
 struct smp_chan* FUNC_8 (struct l2cap_conn*) ;
 int FUNC_9 (struct l2cap_conn*,int ,int,struct smp_cmd_pairing*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct l2cap_chan *VAR_11)
{
 struct l2cap_conn *VAR_12 = VAR_11->conn;
 struct hci_conn *VAR_13 = VAR_12->hcon;
 struct hci_dev *VAR_14 = VAR_13->hdev;
 struct smp_cmd_pairing VAR_15;
 struct smp_chan *VAR_16;

 FUNC_0("chan %p", VAR_11);


 if (!FUNC_10(VAR_2, &VAR_13->flags))
  return;


 if (!FUNC_10(VAR_1, &VAR_13->flags))
  return;


 if (VAR_13->role != VAR_5)
  return;


 if (!FUNC_4(VAR_14, VAR_6))
  return;


 if (!FUNC_10(VAR_0, &VAR_13->flags) &&
     !FUNC_4(VAR_14, VAR_3))
  return;


 if (!FUNC_4(VAR_14, VAR_4))
  return;


 if (!FUNC_5(VAR_13))
  return;


 if (!(VAR_12->remote_fixed_chan & VAR_7))
  return;


 if (VAR_11->data)
  return;

 VAR_16 = FUNC_8(VAR_12);
 if (!VAR_16) {
  FUNC_2(VAR_14, "unable to create SMP context for BR/EDR");
  return;
 }

 FUNC_7(VAR_10, &VAR_16->flags);

 FUNC_0("%s starting SMP over BR/EDR", VAR_14->name);


 FUNC_3(VAR_16, &VAR_15, ((void*)0));

 VAR_16->preq[0] = VAR_8;
 FUNC_6(&VAR_16->preq[1], &VAR_15, sizeof(VAR_15));

 FUNC_9(VAR_12, VAR_8, sizeof(VAR_15), &VAR_15);
 FUNC_1(VAR_16, VAR_9);
}
