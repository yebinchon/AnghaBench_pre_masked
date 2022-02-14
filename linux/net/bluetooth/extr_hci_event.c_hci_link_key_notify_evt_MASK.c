
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct link_key {scalar_t__ type; int list; int pin_len; } ;
struct hci_ev_link_key_notify {scalar_t__ key_type; int link_key; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int flags; int pin_length; int disc_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_conn*,scalar_t__,int ) ;
 struct link_key* FUNC_3 (struct hci_dev*,struct hci_conn*,int *,int ,scalar_t__,int ,int*) ;
 int FUNC_4 (struct hci_conn*) ;
 struct hci_conn* FUNC_5 (struct hci_dev*,int ,int *) ;
 int FUNC_6 (struct hci_conn*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct hci_dev*) ;
 int FUNC_10 (struct link_key*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct hci_dev*,struct link_key*,int) ;
 int VAR_8 ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static void FUNC_14(struct hci_dev *VAR_9, struct sk_buff *VAR_10)
{
 struct hci_ev_link_key_notify *VAR_11 = (void *) VAR_10->data;
 struct hci_conn *VAR_12;
 struct link_key *VAR_13;
 bool VAR_14;
 u8 VAR_15 = 0;

 FUNC_0("%s", VAR_9->name);

 FUNC_7(VAR_9);

 VAR_12 = FUNC_5(VAR_9, VAR_0, &VAR_11->bdaddr);
 if (!VAR_12)
  goto unlock;

 FUNC_6(VAR_12);
 VAR_12->disc_timeout = VAR_3;
 FUNC_4(VAR_12);

 FUNC_13(VAR_2, &VAR_12->flags);
 FUNC_2(VAR_12, VAR_11->key_type, VAR_12->pin_length);

 if (!FUNC_8(VAR_9, VAR_7))
  goto unlock;

 VAR_13 = FUNC_3(VAR_9, VAR_12, &VAR_11->bdaddr, VAR_11->link_key,
           VAR_11->key_type, VAR_15, &VAR_14);
 if (!VAR_13)
  goto unlock;




 if (VAR_11->key_type == VAR_5)
  FUNC_2(VAR_12, VAR_13->type, VAR_13->pin_len);

 FUNC_12(VAR_9, VAR_13, VAR_14);






 if (VAR_13->type == VAR_6 &&
     !FUNC_8(VAR_9, VAR_4)) {
  FUNC_11(&VAR_13->list);
  FUNC_10(VAR_13, VAR_8);
  goto unlock;
 }

 if (VAR_14)
  FUNC_1(VAR_1, &VAR_12->flags);
 else
  FUNC_13(VAR_1, &VAR_12->flags);

unlock:
 FUNC_9(VAR_9);
}
