
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smp_chan {scalar_t__ method; int flags; int tfm_cmac; int tk; int mackey; int * prnd; int pcnf; int * rrnd; int * local_pk; int * remote_pk; } ;
struct sk_buff {int len; int data; } ;
struct l2cap_conn {struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_conn {int dst_type; int type; int dst; int hdev; scalar_t__ out; } ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_5 (struct smp_chan*) ;
 int FUNC_6 (struct smp_chan*,int ,int ) ;
 int FUNC_7 (struct smp_chan*,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int ,int *,int *,int *,int ,int *) ;
 int FUNC_11 (int ,int *,int *,int *,int *,int *) ;
 int FUNC_12 (struct smp_chan*) ;
 int FUNC_13 (struct l2cap_conn*,int ,int,int *) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static u8 FUNC_15(struct l2cap_conn *VAR_11, struct sk_buff *VAR_12)
{
 struct l2cap_chan *VAR_13 = VAR_11->smp;
 struct smp_chan *VAR_14 = VAR_13->data;
 struct hci_conn *VAR_15 = VAR_11->hcon;
 u8 *VAR_16, *VAR_17, *VAR_18, *VAR_19;
 u32 VAR_20;
 int VAR_21;

 FUNC_0("conn %p", VAR_11);

 if (VAR_12->len < sizeof(VAR_14->rrnd))
  return VAR_9;

 FUNC_3(VAR_14->rrnd, VAR_12->data, sizeof(VAR_14->rrnd));
 FUNC_9(VAR_12, sizeof(VAR_14->rrnd));

 if (!FUNC_14(VAR_7, &VAR_14->flags))
  return FUNC_12(VAR_14);

 if (VAR_15->out) {
  VAR_16 = VAR_14->local_pk;
  VAR_17 = VAR_14->remote_pk;
  VAR_18 = VAR_14->prnd;
  VAR_19 = VAR_14->rrnd;
 } else {
  VAR_16 = VAR_14->remote_pk;
  VAR_17 = VAR_14->local_pk;
  VAR_18 = VAR_14->rrnd;
  VAR_19 = VAR_14->prnd;
 }

 if (VAR_14->method == VAR_2) {
  if (!VAR_15->out)
   FUNC_13(VAR_11, VAR_5,
         sizeof(VAR_14->prnd), VAR_14->prnd);
  FUNC_1(VAR_14, VAR_4);
  goto mackey_and_ltk;
 }


 if (VAR_14->method == VAR_3 || VAR_14->method == VAR_0)
  return FUNC_7(VAR_14, VAR_5);

 if (VAR_15->out) {
  u8 VAR_22[16];

  VAR_21 = FUNC_10(VAR_14->tfm_cmac, VAR_14->remote_pk, VAR_14->local_pk,
        VAR_14->rrnd, 0, VAR_22);
  if (VAR_21)
   return VAR_10;

  if (FUNC_2(VAR_14->pcnf, VAR_22, 16))
   return VAR_6;
 } else {
  FUNC_13(VAR_11, VAR_5, sizeof(VAR_14->prnd),
        VAR_14->prnd);
  FUNC_1(VAR_14, VAR_4);
 }

mackey_and_ltk:

 VAR_21 = FUNC_6(VAR_14, VAR_14->mackey, VAR_14->tk);
 if (VAR_21)
  return VAR_10;

 if (VAR_14->method == VAR_1 || VAR_14->method == VAR_2) {
  if (VAR_15->out) {
   FUNC_5(VAR_14);
   FUNC_1(VAR_14, VAR_4);
  }
  return 0;
 }

 VAR_21 = FUNC_11(VAR_14->tfm_cmac, VAR_16, VAR_17, VAR_18, VAR_19, &VAR_20);
 if (VAR_21)
  return VAR_10;

 VAR_21 = FUNC_4(VAR_15->hdev, &VAR_15->dst, VAR_15->type,
     VAR_15->dst_type, VAR_20, 0);
 if (VAR_21)
  return VAR_10;

 FUNC_8(VAR_8, &VAR_14->flags);

 return 0;
}
