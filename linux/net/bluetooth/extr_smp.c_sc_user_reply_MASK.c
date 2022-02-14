
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct smp_chan {int flags; int passkey_round; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_conn {scalar_t__ out; int passkey_notify; } ;
typedef int __le32 ;


 int VAR_0 ;



 int FUNC_0 (struct smp_chan*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smp_chan*) ;
 int FUNC_4 (struct smp_chan*) ;
 int FUNC_5 (struct smp_chan*,int ) ;
 int FUNC_6 (struct l2cap_conn*,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct smp_chan *VAR_8, u16 VAR_9, __le32 VAR_10)
{
 struct l2cap_conn *VAR_11 = VAR_8->conn;
 struct hci_conn *VAR_12 = VAR_11->hcon;
 u8 VAR_13;

 FUNC_1(VAR_5, &VAR_8->flags);

 switch (VAR_9) {
 case 129:
  FUNC_6(VAR_8->conn, VAR_7);
  return 0;
 case 130:
  FUNC_6(VAR_8->conn, VAR_6);
  return 0;
 case 128:
  VAR_12->passkey_notify = FUNC_2(VAR_10);
  VAR_8->passkey_round = 0;

  if (FUNC_7(VAR_3, &VAR_8->flags))
   VAR_13 = VAR_2;
  else
   VAR_13 = 0;

  if (FUNC_5(VAR_8, VAR_13))
   return -VAR_0;

  return 0;
 }


 if (VAR_12->out) {
  FUNC_4(VAR_8);
  FUNC_0(VAR_8, VAR_1);
 } else if (FUNC_7(VAR_4, &VAR_8->flags)) {
  FUNC_4(VAR_8);
  FUNC_3(VAR_8);
 }

 return 0;
}
