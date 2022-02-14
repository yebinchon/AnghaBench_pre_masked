
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct smp_cmd_security_req {scalar_t__ auth_req; } ;
struct smp_cmd_pairing {int dummy; } ;
struct smp_chan {int * preq; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ role; scalar_t__ io_capability; scalar_t__ sec_level; scalar_t__ pending_sec_level; struct hci_dev* hdev; } ;
typedef int cp ;


 scalar_t__ FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct smp_chan*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct l2cap_conn*,struct smp_cmd_pairing*,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (int *,struct smp_cmd_pairing*,int) ;
 int FUNC_7 (struct smp_cmd_pairing*,int ,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 struct smp_chan* FUNC_9 (struct l2cap_conn*) ;
 scalar_t__ FUNC_10 (struct l2cap_conn*,scalar_t__) ;
 int FUNC_11 (struct l2cap_conn*,int ,int,struct smp_cmd_pairing*) ;
 scalar_t__ FUNC_12 (struct hci_conn*,scalar_t__,int ) ;

__attribute__((used)) static u8 FUNC_13(struct l2cap_conn *VAR_15, struct sk_buff *VAR_16)
{
 struct smp_cmd_security_req *VAR_17 = (void *) VAR_16->data;
 struct smp_cmd_pairing VAR_18;
 struct hci_conn *VAR_19 = VAR_15->hcon;
 struct hci_dev *VAR_20 = VAR_19->hdev;
 struct smp_chan *VAR_21;
 u8 VAR_22, VAR_23;

 FUNC_1("conn %p", VAR_15);

 if (VAR_16->len < sizeof(*VAR_17))
  return VAR_11;

 if (VAR_19->role != VAR_3)
  return VAR_8;

 VAR_23 = VAR_17->auth_req & FUNC_0(VAR_20);

 if (FUNC_5(VAR_20, VAR_4) && !(VAR_23 & VAR_7))
  return VAR_6;

 if (VAR_19->io_capability == VAR_2)
  VAR_22 = VAR_0;
 else
  VAR_22 = FUNC_3(VAR_23);

 if (FUNC_12(VAR_19, VAR_22, VAR_14)) {




  FUNC_10(VAR_15, VAR_19->sec_level);
  return 0;
 }

 if (VAR_22 > VAR_19->pending_sec_level)
  VAR_19->pending_sec_level = VAR_22;

 if (FUNC_10(VAR_15, VAR_19->pending_sec_level))
  return 0;

 VAR_21 = FUNC_9(VAR_15);
 if (!VAR_21)
  return VAR_13;

 if (!FUNC_5(VAR_20, VAR_1) &&
     (VAR_23 & VAR_5))
  return VAR_12;

 FUNC_8(VAR_16, sizeof(*VAR_17));

 FUNC_7(&VAR_18, 0, sizeof(VAR_18));
 FUNC_4(VAR_15, &VAR_18, ((void*)0), VAR_23);

 VAR_21->preq[0] = VAR_9;
 FUNC_6(&VAR_21->preq[1], &VAR_18, sizeof(VAR_18));

 FUNC_11(VAR_15, VAR_9, sizeof(VAR_18), &VAR_18);
 FUNC_2(VAR_21, VAR_10);

 return 0;
}
