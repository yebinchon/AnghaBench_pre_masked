
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_chan {scalar_t__ chan_type; int mode; int state; scalar_t__ sport; TYPE_1__* ops; int src_type; int src; int sec_level; scalar_t__ dcid; int psm; int dst_type; int dst; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int const state; int src; } ;
typedef int bdaddr_t ;
typedef int __le16 ;
struct TYPE_2__ {int (* get_sndtimeo ) (struct l2cap_chan*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (char*,int *,int *,int ,int ) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct hci_conn*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;




 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_chan*) ;
 scalar_t__ FUNC_5 (struct l2cap_conn*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct l2cap_chan*,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct hci_conn*) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct hci_conn*) ;
 struct hci_conn* FUNC_12 (struct hci_dev*,int *,int ,int ) ;
 struct hci_conn* FUNC_13 (struct hci_dev*,int *,int ,int ,int ,int ,int *) ;
 struct hci_conn* FUNC_14 (struct hci_dev*,int *,int ,int ,int ) ;
 int FUNC_15 (struct hci_dev*) ;
 int FUNC_16 (struct hci_dev*) ;
 scalar_t__ FUNC_17 (struct hci_dev*,int ) ;
 int FUNC_18 (struct hci_dev*) ;
 struct hci_dev* FUNC_19 (int *,int *,int ) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (struct l2cap_chan*,int) ;
 int FUNC_22 (struct l2cap_chan*) ;
 int FUNC_23 (struct l2cap_chan*) ;
 struct l2cap_conn* FUNC_24 (struct hci_conn*) ;
 int FUNC_25 (struct l2cap_chan*) ;
 int FUNC_26 (struct l2cap_chan*) ;
 int FUNC_27 (struct l2cap_chan*,int const) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct l2cap_chan*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;

int FUNC_33(struct l2cap_chan *VAR_18, __le16 VAR_19, u16 VAR_20,
         bdaddr_t *VAR_21, u8 VAR_22)
{
 struct l2cap_conn *VAR_23;
 struct hci_conn *VAR_24;
 struct hci_dev *VAR_25;
 int VAR_26;

 FUNC_0("%pMR -> %pMR (type %u) psm 0x%2.2x", &VAR_18->src, VAR_21,
        VAR_22, FUNC_6(VAR_19));

 VAR_25 = FUNC_19(VAR_21, &VAR_18->src, VAR_18->src_type);
 if (!VAR_25)
  return -VAR_5;

 FUNC_15(VAR_25);

 if (!FUNC_20(FUNC_6(VAR_19), VAR_22) && !VAR_20 &&
     VAR_18->chan_type != VAR_15) {
  VAR_26 = -VAR_6;
  goto done;
 }

 if (VAR_18->chan_type == VAR_13 && !VAR_19) {
  VAR_26 = -VAR_6;
  goto done;
 }

 if (VAR_18->chan_type == VAR_14 && !VAR_20) {
  VAR_26 = -VAR_6;
  goto done;
 }

 switch (VAR_18->mode) {
 case 131:
  break;
 case 129:
  break;
 case 130:
 case 128:
  if (!VAR_17)
   break;

 default:
  VAR_26 = -VAR_9;
  goto done;
 }

 switch (VAR_18->state) {
 case 135:
 case 134:
 case 136:

  VAR_26 = 0;
  goto done;

 case 133:

  VAR_26 = -VAR_7;
  goto done;

 case 132:
 case 137:

  break;

 default:
  VAR_26 = -VAR_3;
  goto done;
 }


 FUNC_8(&VAR_18->dst, VAR_21);
 VAR_18->dst_type = VAR_22;

 VAR_18->psm = VAR_19;
 VAR_18->dcid = VAR_20;

 if (FUNC_10(VAR_22)) {


  if (VAR_22 == VAR_2)
   VAR_22 = VAR_0;
  else
   VAR_22 = VAR_1;

  if (FUNC_17(VAR_25, VAR_10))
   VAR_24 = FUNC_13(VAR_25, VAR_21, VAR_22,
           VAR_18->sec_level,
           VAR_11,
           VAR_12, ((void*)0));
  else
   VAR_24 = FUNC_14(VAR_25, VAR_21, VAR_22,
         VAR_18->sec_level,
         VAR_11);

 } else {
  u8 VAR_27 = FUNC_26(VAR_18);
  VAR_24 = FUNC_12(VAR_25, VAR_21, VAR_18->sec_level, VAR_27);
 }

 if (FUNC_1(VAR_24)) {
  VAR_26 = FUNC_2(VAR_24);
  goto done;
 }

 VAR_23 = FUNC_24(VAR_24);
 if (!VAR_23) {
  FUNC_11(VAR_24);
  VAR_26 = -VAR_8;
  goto done;
 }

 FUNC_28(&VAR_23->chan_lock);
 FUNC_22(VAR_18);

 if (VAR_20 && FUNC_5(VAR_23, VAR_20)) {
  FUNC_11(VAR_24);
  VAR_26 = -VAR_4;
  goto chan_unlock;
 }


 FUNC_8(&VAR_18->src, &VAR_24->src);
 VAR_18->src_type = FUNC_9(VAR_24);

 FUNC_4(VAR_23, VAR_18);


 FUNC_11(VAR_24);

 FUNC_27(VAR_18, 135);
 FUNC_7(VAR_18, VAR_18->ops->get_sndtimeo(VAR_18));




 FUNC_31(&VAR_16);
 VAR_18->sport = 0;
 FUNC_32(&VAR_16);

 if (VAR_24->state == 133) {
  if (VAR_18->chan_type != VAR_13) {
   FUNC_3(VAR_18);
   if (FUNC_21(VAR_18, 1))
    FUNC_27(VAR_18, 133);
  } else
   FUNC_25(VAR_18);
 }

 VAR_26 = 0;

chan_unlock:
 FUNC_23(VAR_18);
 FUNC_29(&VAR_23->chan_lock);
done:
 FUNC_18(VAR_25);
 FUNC_16(VAR_25);
 return VAR_26;
}
