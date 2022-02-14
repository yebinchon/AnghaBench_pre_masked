
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct smp_cmd_pairing {int auth_req; scalar_t__ oob_flag; int io_capability; int max_key_size; } ;
struct smp_chan {int remote_key_dist; int flags; void** prsp; int prnd; void** preq; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {TYPE_1__* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {int dummy; } ;
typedef int rsp ;
struct TYPE_4__ {scalar_t__ local_oob; } ;
struct TYPE_3__ {scalar_t__ role; scalar_t__ type; int pending_sec_level; int io_capability; int flags; struct hci_dev* hdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct smp_chan*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_2__* FUNC_3 (struct hci_dev*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct smp_chan*,struct smp_cmd_pairing*,struct smp_cmd_pairing*) ;
 int FUNC_6 (struct l2cap_conn*,struct smp_cmd_pairing*,struct smp_cmd_pairing*,int) ;
 scalar_t__ FUNC_7 (struct l2cap_conn*,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct smp_chan*,int ,int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (struct hci_dev*,int ) ;
 int FUNC_12 (void**,struct smp_cmd_pairing*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct sk_buff*,int) ;
 struct smp_chan* FUNC_16 (struct l2cap_conn*) ;
 int FUNC_17 (struct smp_chan*) ;
 int FUNC_18 (struct l2cap_conn*,void*,int,struct smp_cmd_pairing*) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 int FUNC_20 (struct l2cap_conn*,int ,int,int ,int ) ;

__attribute__((used)) static u8 FUNC_21(struct l2cap_conn *VAR_31, struct sk_buff *VAR_32)
{
 struct smp_cmd_pairing VAR_33, *VAR_34 = (void *) VAR_32->data;
 struct l2cap_chan *VAR_35 = VAR_31->smp;
 struct hci_dev *VAR_36 = VAR_31->hcon->hdev;
 struct smp_chan *VAR_37;
 u8 VAR_38, VAR_39, VAR_40;
 int VAR_41;

 FUNC_1("conn %p", VAR_31);

 if (VAR_32->len < sizeof(*VAR_34))
  return VAR_26;

 if (VAR_31->hcon->role != VAR_7)
  return VAR_15;

 if (!VAR_35->data)
  VAR_37 = FUNC_16(VAR_31);
 else
  VAR_37 = VAR_35->data;

 if (!VAR_37)
  return VAR_30;


 VAR_39 = VAR_34->auth_req & FUNC_0(VAR_36);

 if (!FUNC_11(VAR_36, VAR_3) &&
     (VAR_39 & VAR_11))
  return VAR_28;

 if (FUNC_11(VAR_36, VAR_8) && !(VAR_39 & VAR_14))
  return VAR_13;

 VAR_37->preq[0] = VAR_17;
 FUNC_12(&VAR_37->preq[1], VAR_34, sizeof(*VAR_34));
 FUNC_15(VAR_32, sizeof(*VAR_34));





 if (VAR_34->oob_flag == VAR_27 && FUNC_3(VAR_36)->local_oob)
  FUNC_14(VAR_24, &VAR_37->flags);


 if (VAR_31->hcon->type == VAR_0) {

  if (!FUNC_19(VAR_4, &VAR_31->hcon->flags) &&
      !FUNC_11(VAR_36, VAR_5))
   return VAR_20;

  FUNC_14(VAR_25, &VAR_37->flags);

  FUNC_5(VAR_37, VAR_34, &VAR_33);

  if (VAR_34->auth_req & VAR_12)
   FUNC_14(VAR_22, &VAR_37->flags);

  VAR_38 = FUNC_13(VAR_34->max_key_size, VAR_33.max_key_size);
  if (FUNC_7(VAR_31, VAR_38))
   return VAR_21;


  VAR_37->remote_key_dist &= ~VAR_29;

  VAR_37->prsp[0] = VAR_18;
  FUNC_12(&VAR_37->prsp[1], &VAR_33, sizeof(VAR_33));
  FUNC_18(VAR_31, VAR_18, sizeof(VAR_33), &VAR_33);

  FUNC_17(VAR_37);
  return 0;
 }

 FUNC_6(VAR_31, VAR_34, &VAR_33, VAR_39);

 if (VAR_33.auth_req & VAR_14) {
  FUNC_14(VAR_25, &VAR_37->flags);

  if (VAR_33.auth_req & VAR_12)
   FUNC_14(VAR_22, &VAR_37->flags);
 }

 if (VAR_31->hcon->io_capability == VAR_6)
  VAR_40 = VAR_2;
 else
  VAR_40 = FUNC_4(VAR_39);

 if (VAR_40 > VAR_31->hcon->pending_sec_level)
  VAR_31->hcon->pending_sec_level = VAR_40;


 if (VAR_31->hcon->pending_sec_level >= VAR_1) {
  u8 VAR_42;

  VAR_42 = FUNC_9(VAR_37, VAR_31->hcon->io_capability,
      VAR_34->io_capability);
  if (VAR_42 == VAR_10 || VAR_42 == VAR_9)
   return VAR_13;
 }

 VAR_38 = FUNC_13(VAR_34->max_key_size, VAR_33.max_key_size);
 if (FUNC_7(VAR_31, VAR_38))
  return VAR_21;

 FUNC_10(VAR_37->prnd, sizeof(VAR_37->prnd));

 VAR_37->prsp[0] = VAR_18;
 FUNC_12(&VAR_37->prsp[1], &VAR_33, sizeof(VAR_33));

 FUNC_18(VAR_31, VAR_18, sizeof(VAR_33), &VAR_33);

 FUNC_8(VAR_23, &VAR_37->flags);






 FUNC_2(VAR_37, VAR_16);

 if (FUNC_19(VAR_25, &VAR_37->flags)) {
  FUNC_2(VAR_37, VAR_19);

  VAR_37->remote_key_dist &= ~VAR_29;

  return 0;
 }


 VAR_41 = FUNC_20(VAR_31, 0, VAR_39, VAR_33.io_capability, VAR_34->io_capability);
 if (VAR_41)
  return VAR_30;

 return 0;
}
