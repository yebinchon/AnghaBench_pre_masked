
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_chan {int allow_cmd; } ;
struct sk_buff {int len; int* data; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_chan {struct smp_chan* data; struct l2cap_conn* conn; } ;
struct hci_conn {int dst; int hdev; } ;
typedef int code ;
typedef int __u8 ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_6 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_7 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_8 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_9 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_10 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_11 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_12 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_13 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_14 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_15 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_16 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_17 (struct l2cap_conn*,struct sk_buff*) ;
 int FUNC_18 (struct l2cap_conn*,int) ;
 int FUNC_19 (int,int *) ;

__attribute__((used)) static int FUNC_20(struct l2cap_chan *VAR_6, struct sk_buff *VAR_7)
{
 struct l2cap_conn *VAR_8 = VAR_6->conn;
 struct hci_conn *VAR_9 = VAR_8->hcon;
 struct smp_chan *VAR_10;
 __u8 VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_7->len < 1)
  return -VAR_0;

 if (!FUNC_2(VAR_9->hdev, VAR_2)) {
  VAR_12 = VAR_5;
  goto done;
 }

 VAR_11 = VAR_7->data[0];
 FUNC_4(VAR_7, sizeof(VAR_11));

 VAR_10 = VAR_6->data;

 if (VAR_11 > VAR_3)
  goto drop;

 if (VAR_10 && !FUNC_19(VAR_11, &VAR_10->allow_cmd))
  goto drop;




 if (!VAR_10 && VAR_11 != 132 && VAR_11 != 129)
  goto drop;

 switch (VAR_11) {
 case 132:
  VAR_12 = FUNC_13(VAR_8, VAR_7);
  break;

 case 134:
  FUNC_18(VAR_8, 0);
  VAR_13 = -VAR_1;
  break;

 case 131:
  VAR_12 = FUNC_14(VAR_8, VAR_7);
  break;

 case 129:
  VAR_12 = FUNC_16(VAR_8, VAR_7);
  break;

 case 135:
  VAR_12 = FUNC_11(VAR_8, VAR_7);
  break;

 case 133:
  VAR_12 = FUNC_12(VAR_8, VAR_7);
  break;

 case 140:
  VAR_12 = FUNC_6(VAR_8, VAR_7);
  break;

 case 136:
  VAR_12 = FUNC_10(VAR_8, VAR_7);
  break;

 case 138:
  VAR_12 = FUNC_8(VAR_8, VAR_7);
  break;

 case 139:
  VAR_12 = FUNC_7(VAR_8, VAR_7);
  break;

 case 128:
  VAR_12 = FUNC_17(VAR_8, VAR_7);
  break;

 case 130:
  VAR_12 = FUNC_15(VAR_8, VAR_7);
  break;

 case 141:
  VAR_12 = FUNC_5(VAR_8, VAR_7);
  break;

 case 137:
  VAR_12 = FUNC_9(VAR_8, VAR_7);
  break;

 default:
  FUNC_0("Unknown command code 0x%2.2x", VAR_11);
  VAR_12 = VAR_4;
  goto done;
 }

done:
 if (!VAR_13) {
  if (VAR_12)
   FUNC_18(VAR_8, VAR_12);
  FUNC_3(VAR_7);
 }

 return VAR_13;

drop:
 FUNC_1(VAR_9->hdev, "unexpected SMP command 0x%02x from %pMR",
     VAR_11, &VAR_9->dst);
 FUNC_3(VAR_7);
 return 0;
}
