
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct smp_cmd_pairing {scalar_t__ auth_req; scalar_t__ oob_flag; int io_capability; int resp_key_dist; int max_key_size; } ;
struct smp_chan {int flags; int remote_key_dist; int prnd; int * prsp; int * preq; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {TYPE_1__* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ local_oob; } ;
struct TYPE_3__ {scalar_t__ role; scalar_t__ type; scalar_t__ pending_sec_level; struct hci_dev* hdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct smp_chan*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* FUNC_3 (struct hci_dev*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_4 (struct l2cap_conn*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct smp_chan*,int ,int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (struct hci_dev*,int ) ;
 int FUNC_8 (int *,struct smp_cmd_pairing*,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct smp_chan*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (struct smp_chan*) ;
 int FUNC_14 (struct smp_chan*) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (struct l2cap_conn*,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static u8 FUNC_17(struct l2cap_conn *VAR_22, struct sk_buff *VAR_23)
{
 struct smp_cmd_pairing *VAR_24, *VAR_25 = (void *) VAR_23->data;
 struct l2cap_chan *VAR_26 = VAR_22->smp;
 struct smp_chan *VAR_27 = VAR_26->data;
 struct hci_dev *VAR_28 = VAR_22->hcon->hdev;
 u8 VAR_29, VAR_30;
 int VAR_31;

 FUNC_1("conn %p", VAR_22);

 if (VAR_23->len < sizeof(*VAR_25))
  return VAR_18;

 if (VAR_22->hcon->role != VAR_2)
  return VAR_9;

 FUNC_12(VAR_23, sizeof(*VAR_25));

 VAR_24 = (void *) &VAR_27->preq[1];

 VAR_29 = FUNC_9(VAR_24->max_key_size, VAR_25->max_key_size);
 if (FUNC_4(VAR_22, VAR_29))
  return VAR_12;

 VAR_30 = VAR_25->auth_req & FUNC_0(VAR_28);

 if (FUNC_7(VAR_28, VAR_3) && !(VAR_30 & VAR_8))
  return VAR_7;





 if (VAR_25->oob_flag == VAR_19 && FUNC_3(VAR_28)->local_oob)
  FUNC_11(VAR_15, &VAR_27->flags);

 VAR_27->prsp[0] = VAR_10;
 FUNC_8(&VAR_27->prsp[1], VAR_25, sizeof(*VAR_25));




 VAR_27->remote_key_dist &= VAR_25->resp_key_dist;

 if ((VAR_24->auth_req & VAR_6) && (VAR_30 & VAR_6))
  FUNC_11(VAR_14, &VAR_27->flags);


 if (VAR_22->hcon->type == VAR_0) {

  VAR_27->remote_key_dist &= ~VAR_20;
  FUNC_14(VAR_27);
  return 0;
 }

 if ((VAR_24->auth_req & VAR_8) && (VAR_30 & VAR_8))
  FUNC_11(VAR_16, &VAR_27->flags);
 else if (VAR_22->hcon->pending_sec_level > VAR_1)
  VAR_22->hcon->pending_sec_level = VAR_1;


 if (VAR_22->hcon->pending_sec_level >= VAR_1) {
  u8 VAR_32;

  VAR_32 = FUNC_5(VAR_27, VAR_24->io_capability,
      VAR_25->io_capability);
  if (VAR_32 == VAR_5 || VAR_32 == VAR_4)
   return VAR_7;
 }

 FUNC_6(VAR_27->prnd, sizeof(VAR_27->prnd));




 VAR_27->remote_key_dist &= VAR_25->resp_key_dist;

 if (FUNC_15(VAR_16, &VAR_27->flags)) {

  VAR_27->remote_key_dist &= ~VAR_20;
  FUNC_2(VAR_27, VAR_11);
  return FUNC_10(VAR_27);
 }

 VAR_30 |= VAR_24->auth_req;

 VAR_31 = FUNC_16(VAR_22, 0, VAR_30, VAR_24->io_capability, VAR_25->io_capability);
 if (VAR_31)
  return VAR_21;

 FUNC_11(VAR_13, &VAR_27->flags);


 if (FUNC_15(VAR_17, &VAR_27->flags))
  return FUNC_13(VAR_27);

 return 0;
}
