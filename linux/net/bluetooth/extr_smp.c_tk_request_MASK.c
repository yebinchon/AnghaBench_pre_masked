
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smp_chan {scalar_t__ method; int flags; int tk; } ;
struct l2cap_conn {struct l2cap_chan* smp; struct hci_conn* hcon; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_conn {scalar_t__ io_capability; scalar_t__ pending_sec_level; scalar_t__ role; int dst_type; int type; int dst; int hdev; } ;
typedef int passkey ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct smp_chan*,int,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int *,int ,int ,int,int) ;
 int FUNC_6 (int ,int *,int ,int ,int,int ) ;
 int FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct l2cap_conn *VAR_14, u8 VAR_15, u8 VAR_16,
      u8 VAR_17, u8 VAR_18)
{
 struct hci_conn *VAR_19 = VAR_14->hcon;
 struct l2cap_chan *VAR_20 = VAR_14->smp;
 struct smp_chan *VAR_21 = VAR_20->data;
 u32 VAR_22 = 0;
 int VAR_23 = 0;


 FUNC_4(VAR_21->tk, 0, sizeof(VAR_21->tk));
 FUNC_1(VAR_13, &VAR_21->flags);

 FUNC_0("tk_request: auth:%d lcl:%d rem:%d", VAR_16, VAR_17, VAR_18);







 if (!(VAR_16 & VAR_9))
  VAR_21->method = VAR_5;
 else
  VAR_21->method = FUNC_2(VAR_21, VAR_17, VAR_18);


 if (VAR_21->method == VAR_5 && FUNC_10(VAR_10,
      &VAR_21->flags))
  VAR_21->method = VAR_6;


 if (VAR_21->method == VAR_5 &&
     VAR_19->io_capability == VAR_3)
  VAR_21->method = VAR_6;


 if (VAR_21->method == VAR_6) {
  FUNC_9(VAR_13, &VAR_21->flags);
  return 0;
 }




 if (FUNC_10(VAR_12, &VAR_21->flags))
  return -VAR_2;


 if (VAR_21->method != VAR_5) {
  FUNC_9(VAR_11, &VAR_21->flags);
  if (VAR_19->pending_sec_level < VAR_0)
   VAR_19->pending_sec_level = VAR_0;
 }




 if (VAR_21->method == VAR_7) {
  if (VAR_19->role == VAR_4)
   VAR_21->method = VAR_1;
  else
   VAR_21->method = VAR_8;
 }


 if (VAR_21->method == VAR_1) {
  FUNC_4(VAR_21->tk, 0, sizeof(VAR_21->tk));
  FUNC_3(&VAR_22, sizeof(VAR_22));
  VAR_22 %= 1000000;
  FUNC_8(VAR_22, VAR_21->tk);
  FUNC_0("PassKey: %d", VAR_22);
  FUNC_9(VAR_13, &VAR_21->flags);
 }

 if (VAR_21->method == VAR_8)
  VAR_23 = FUNC_7(VAR_19->hdev, &VAR_19->dst,
      VAR_19->type, VAR_19->dst_type);
 else if (VAR_21->method == VAR_5)
  VAR_23 = FUNC_5(VAR_19->hdev, &VAR_19->dst,
      VAR_19->type, VAR_19->dst_type,
      VAR_22, 1);
 else
  VAR_23 = FUNC_6(VAR_19->hdev, &VAR_19->dst,
      VAR_19->type, VAR_19->dst_type,
      VAR_22, 0);

 return VAR_23;
}
