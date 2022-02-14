
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct smp_chan {int flags; int tk; } ;
struct l2cap_conn {struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_conn {struct l2cap_conn* l2cap_data; } ;
typedef int __le32 ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct smp_chan*,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct smp_chan*) ;
 int FUNC_9 (struct l2cap_conn*,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int *) ;

int FUNC_11(struct hci_conn *VAR_6, u16 VAR_7, __le32 VAR_8)
{
 struct l2cap_conn *VAR_9 = VAR_6->l2cap_data;
 struct l2cap_chan *VAR_10;
 struct smp_chan *VAR_11;
 u32 VAR_12;
 int VAR_13;

 FUNC_0("");

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = VAR_9->smp;
 if (!VAR_10)
  return -VAR_0;

 FUNC_1(VAR_10);
 if (!VAR_10->data) {
  VAR_13 = -VAR_0;
  goto unlock;
 }

 VAR_11 = VAR_10->data;

 if (FUNC_10(VAR_3, &VAR_11->flags)) {
  VAR_13 = FUNC_6(VAR_11, VAR_7, VAR_8);
  goto unlock;
 }

 switch (VAR_7) {
 case 128:
  VAR_12 = FUNC_3(VAR_8);
  FUNC_4(VAR_11->tk, 0, sizeof(VAR_11->tk));
  FUNC_0("PassKey: %d", VAR_12);
  FUNC_5(VAR_12, VAR_11->tk);

 case 130:
  FUNC_7(VAR_4, &VAR_11->flags);
  break;
 case 129:
 case 131:
  FUNC_9(VAR_9, VAR_5);
  VAR_13 = 0;
  goto unlock;
 default:
  FUNC_9(VAR_9, VAR_5);
  VAR_13 = -VAR_1;
  goto unlock;
 }

 VAR_13 = 0;


 if (FUNC_10(VAR_2, &VAR_11->flags)) {
  u8 VAR_14 = FUNC_8(VAR_11);
  if (VAR_14)
   FUNC_9(VAR_9, VAR_14);
 }

unlock:
 FUNC_2(VAR_10);
 return VAR_13;
}
