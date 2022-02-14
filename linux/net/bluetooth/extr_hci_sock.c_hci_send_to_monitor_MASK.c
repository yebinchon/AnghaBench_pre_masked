
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct hci_mon_hdr {void* len; void* index; void* opcode; } ;
struct hci_dev {int id; } ;
typedef void* __le16 ;
struct TYPE_2__ {int incoming; } ;


 int FUNC_0 (char*,struct hci_dev*,int ) ;
 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ,int ,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ,int *) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int VAR_11 ;
 struct hci_mon_hdr* FUNC_8 (struct sk_buff*,int ) ;

void FUNC_9(struct hci_dev *VAR_12, struct sk_buff *VAR_13)
{
 struct sk_buff *VAR_14 = ((void*)0);
 struct hci_mon_hdr *VAR_15;
 __le16 VAR_16;

 if (!FUNC_2(&VAR_11))
  return;

 FUNC_0("hdev %p len %d", VAR_12, VAR_13->len);

 switch (FUNC_6(VAR_13)) {
 case 131:
  VAR_16 = FUNC_4(VAR_4);
  break;
 case 129:
  VAR_16 = FUNC_4(VAR_5);
  break;
 case 132:
  if (FUNC_3(VAR_13)->incoming)
   VAR_16 = FUNC_4(VAR_2);
  else
   VAR_16 = FUNC_4(VAR_3);
  break;
 case 128:
  if (FUNC_3(VAR_13)->incoming)
   VAR_16 = FUNC_4(VAR_7);
  else
   VAR_16 = FUNC_4(VAR_8);
  break;
 case 130:
  VAR_16 = FUNC_4(VAR_9);
  break;
 default:
  return;
 }


 VAR_14 = FUNC_1(VAR_13, VAR_6, VAR_0, 1);
 if (!VAR_14)
  return;


 VAR_15 = FUNC_8(VAR_14, VAR_6);
 VAR_15->opcode = VAR_16;
 VAR_15->index = FUNC_4(VAR_12->id);
 VAR_15->len = FUNC_4(VAR_13->len);

 FUNC_5(VAR_1, VAR_14,
       VAR_10, ((void*)0));
 FUNC_7(VAR_14);
}
