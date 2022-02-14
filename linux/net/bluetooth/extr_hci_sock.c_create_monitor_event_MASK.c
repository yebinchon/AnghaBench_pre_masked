
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct hci_mon_new_index {int name; int bdaddr; int bus; int type; } ;
struct hci_mon_index_info {void* manufacturer; int bdaddr; } ;
struct hci_mon_hdr {void* len; void* index; void* opcode; } ;
struct hci_dev {int manufacturer; int id; int bdaddr; int name; int bus; int dev_type; } ;
typedef void* __le16 ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int *) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 struct hci_mon_hdr* FUNC_5 (struct sk_buff*,int) ;
 void* FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct hci_dev *VAR_9, int VAR_10)
{
 struct hci_mon_hdr *VAR_11;
 struct hci_mon_new_index *VAR_12;
 struct hci_mon_index_info *VAR_13;
 struct sk_buff *VAR_14;
 __le16 VAR_15;

 switch (VAR_10) {
 case 131:
  VAR_14 = FUNC_2(VAR_7, VAR_0);
  if (!VAR_14)
   return ((void*)0);

  VAR_12 = FUNC_6(VAR_14, VAR_7);
  VAR_12->type = VAR_9->dev_type;
  VAR_12->bus = VAR_9->bus;
  FUNC_1(&VAR_12->bdaddr, &VAR_9->bdaddr);
  FUNC_4(VAR_12->name, VAR_9->name, 8);

  VAR_15 = FUNC_3(VAR_6);
  break;

 case 129:
  VAR_14 = FUNC_2(0, VAR_0);
  if (!VAR_14)
   return ((void*)0);

  VAR_15 = FUNC_3(VAR_2);
  break;

 case 130:
  if (VAR_9->manufacturer == 0xffff)
   return ((void*)0);



 case 128:
  VAR_14 = FUNC_2(VAR_5, VAR_0);
  if (!VAR_14)
   return ((void*)0);

  VAR_13 = FUNC_6(VAR_14, VAR_5);
  FUNC_1(&VAR_13->bdaddr, &VAR_9->bdaddr);
  VAR_13->manufacturer = FUNC_3(VAR_9->manufacturer);

  VAR_15 = FUNC_3(VAR_4);
  break;

 case 132:
  VAR_14 = FUNC_2(0, VAR_0);
  if (!VAR_14)
   return ((void*)0);

  VAR_15 = FUNC_3(VAR_8);
  break;

 case 133:
  VAR_14 = FUNC_2(0, VAR_0);
  if (!VAR_14)
   return ((void*)0);

  VAR_15 = FUNC_3(VAR_1);
  break;

 default:
  return ((void*)0);
 }

 FUNC_0(VAR_14);

 VAR_11 = FUNC_5(VAR_14, VAR_3);
 VAR_11->opcode = VAR_15;
 VAR_11->index = FUNC_3(VAR_9->id);
 VAR_11->len = FUNC_3(VAR_14->len - VAR_3);

 return VAR_14;
}
