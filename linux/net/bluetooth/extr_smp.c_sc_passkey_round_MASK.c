
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_chan {int passkey_round; int prnd; int flags; int tk; int mackey; int pcnf; int rrnd; int local_pk; int remote_pk; int tfm_cmac; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_dev {int name; } ;
struct hci_conn {int passkey_notify; int out; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct smp_chan*,int const) ;
 int const VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (struct smp_chan*) ;
 int FUNC_4 (struct smp_chan*,int ,int ) ;
 int FUNC_5 (struct smp_chan*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int ,int ,int,int*) ;
 int FUNC_8 (struct l2cap_conn*,int const,int,int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static u8 FUNC_10(struct smp_chan *VAR_5, u8 VAR_6)
{
 struct l2cap_conn *VAR_7 = VAR_5->conn;
 struct hci_conn *VAR_8 = VAR_7->hcon;
 struct hci_dev *VAR_9 = VAR_8->hdev;
 u8 VAR_10[16], VAR_11;


 if (VAR_5->passkey_round >= 20)
  return 0;

 switch (VAR_6) {
 case 129:
  VAR_11 = ((VAR_8->passkey_notify >> VAR_5->passkey_round) & 0x01);
  VAR_11 |= 0x80;

  if (FUNC_7(VAR_5->tfm_cmac, VAR_5->remote_pk, VAR_5->local_pk,
      VAR_5->rrnd, VAR_11, VAR_10))
   return VAR_4;

  if (FUNC_2(VAR_5->pcnf, VAR_10, 16))
   return VAR_1;

  VAR_5->passkey_round++;

  if (VAR_5->passkey_round == 20) {

   if (FUNC_4(VAR_5, VAR_5->mackey, VAR_5->tk))
    return VAR_4;
  }




  if (!VAR_8->out) {
   FUNC_8(VAR_7, 129,
         sizeof(VAR_5->prnd), VAR_5->prnd);
   if (VAR_5->passkey_round == 20)
    FUNC_1(VAR_5, VAR_0);
   else
    FUNC_1(VAR_5, 130);
   return 0;
  }


  if (VAR_5->passkey_round != 20)
   return FUNC_10(VAR_5, 0);


  FUNC_3(VAR_5);
  FUNC_1(VAR_5, VAR_0);

  break;

 case 130:
  if (FUNC_9(VAR_3, &VAR_5->flags)) {
   FUNC_6(VAR_2, &VAR_5->flags);
   return 0;
  }

  FUNC_1(VAR_5, 129);

  if (VAR_8->out) {
   FUNC_8(VAR_7, 129,
         sizeof(VAR_5->prnd), VAR_5->prnd);
   return 0;
  }

  return FUNC_5(VAR_5);

 case 128:
 default:

  if (!VAR_8->out)
   return 0;

  FUNC_0("%s Starting passkey round %u", VAR_9->name,
         VAR_5->passkey_round + 1);

  FUNC_1(VAR_5, 130);

  return FUNC_5(VAR_5);
 }

 return 0;
}
