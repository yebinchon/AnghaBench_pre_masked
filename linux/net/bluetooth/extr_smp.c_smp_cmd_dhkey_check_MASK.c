
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_cmd_dhkey_check {int e; } ;
struct smp_chan {scalar_t__ method; int enc_key_size; int tk; int flags; int prnd; int rrnd; int mackey; int tfm_cmac; int * lr; int * preq; int * prsp; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_conn {int enc_key_size; scalar_t__ out; int passkey_notify; int resp_addr_type; int init_addr_type; int resp_addr; int init_addr; } ;
typedef int r ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct hci_conn*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct smp_chan*) ;
 int FUNC_7 (struct smp_chan*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct l2cap_conn *VAR_8, struct sk_buff *VAR_9)
{
 struct smp_cmd_dhkey_check *VAR_10 = (void *) VAR_9->data;
 struct l2cap_chan *VAR_11 = VAR_8->smp;
 struct hci_conn *VAR_12 = VAR_8->hcon;
 struct smp_chan *VAR_13 = VAR_11->data;
 u8 VAR_14[7], VAR_15[7], *VAR_16, *VAR_17;
 u8 VAR_18[3], VAR_19[16], VAR_20[16];
 int VAR_21;

 FUNC_0("conn %p", VAR_8);

 if (VAR_9->len < sizeof(*VAR_10))
  return VAR_6;

 FUNC_3(VAR_14, &VAR_12->init_addr, 6);
 FUNC_3(VAR_15, &VAR_12->resp_addr, 6);
 VAR_14[6] = VAR_12->init_addr_type;
 VAR_15[6] = VAR_12->resp_addr_type;

 if (VAR_12->out) {
  VAR_16 = VAR_14;
  VAR_17 = VAR_15;
  FUNC_3(VAR_18, &VAR_13->prsp[1], 3);
 } else {
  VAR_16 = VAR_15;
  VAR_17 = VAR_14;
  FUNC_3(VAR_18, &VAR_13->preq[1], 3);
 }

 FUNC_4(VAR_19, 0, sizeof(VAR_19));

 if (VAR_13->method == VAR_2 || VAR_13->method == VAR_0)
  FUNC_5(VAR_12->passkey_notify, VAR_19);
 else if (VAR_13->method == VAR_1)
  FUNC_3(VAR_19, VAR_13->lr, 16);

 VAR_21 = FUNC_9(VAR_13->tfm_cmac, VAR_13->mackey, VAR_13->rrnd, VAR_13->prnd, VAR_19,
       VAR_18, VAR_17, VAR_16, VAR_20);
 if (VAR_21)
  return VAR_7;

 if (FUNC_1(VAR_10->e, VAR_20, 16))
  return VAR_3;

 if (!VAR_12->out) {
  if (FUNC_10(VAR_5, &VAR_13->flags)) {
   FUNC_8(VAR_4, &VAR_13->flags);
   return 0;
  }


  FUNC_7(VAR_13);
 }

 FUNC_6(VAR_13);

 if (VAR_12->out) {
  FUNC_2(VAR_12, 0, 0, VAR_13->tk, VAR_13->enc_key_size);
  VAR_12->enc_key_size = VAR_13->enc_key_size;
 }

 return 0;
}
