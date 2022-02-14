
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_cmd_pairing_confirm {int confirm_val; } ;
struct smp_chan {int passkey_round; int prnd; int remote_pk; int local_pk; int tfm_cmac; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_conn {int passkey_notify; } ;
typedef int cfm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct l2cap_conn*,int ,int,struct smp_cmd_pairing_confirm*) ;

__attribute__((used)) static u8 FUNC_3(struct smp_chan *VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_2->conn;
 struct hci_conn *VAR_4 = VAR_3->hcon;
 struct smp_cmd_pairing_confirm VAR_5;
 u8 VAR_6;

 VAR_6 = ((VAR_4->passkey_notify >> VAR_2->passkey_round) & 0x01);
 VAR_6 |= 0x80;

 FUNC_0(VAR_2->prnd, sizeof(VAR_2->prnd));

 if (FUNC_1(VAR_2->tfm_cmac, VAR_2->local_pk, VAR_2->remote_pk, VAR_2->prnd, VAR_6,
     VAR_5.confirm_val))
  return VAR_1;

 FUNC_2(VAR_3, VAR_0, sizeof(VAR_5), &VAR_5);

 return 0;
}
