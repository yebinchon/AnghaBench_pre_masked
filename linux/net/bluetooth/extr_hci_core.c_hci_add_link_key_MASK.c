
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_key {int type; int pin_len; int val; int bdaddr; int list; } ;
struct hci_dev {int name; int link_keys; } ;
struct hci_conn {int key_type; int remote_auth; } ;
typedef int bdaddr_t ;


 int FUNC_0 (char*,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 struct link_key* FUNC_2 (struct hci_dev*,int *) ;
 int FUNC_3 (struct hci_dev*,struct hci_conn*,int,int) ;
 struct link_key* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int*,int ) ;

struct link_key *FUNC_7(struct hci_dev *VAR_4, struct hci_conn *VAR_5,
      bdaddr_t *VAR_6, u8 *VAR_7, u8 VAR_8,
      u8 VAR_9, bool *VAR_10)
{
 struct link_key *VAR_11, *VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_2(VAR_4, VAR_6);
 if (VAR_12) {
  VAR_13 = VAR_12->type;
  VAR_11 = VAR_12;
 } else {
  VAR_13 = VAR_5 ? VAR_5->key_type : 0xff;
  VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0);
  if (!VAR_11)
   return ((void*)0);
  FUNC_5(&VAR_11->list, &VAR_4->link_keys);
 }

 FUNC_0("%s key for %pMR type %u", VAR_4->name, VAR_6, VAR_8);




 if (VAR_8 == VAR_2 &&
     (!VAR_5 || VAR_5->remote_auth == 0xff) && VAR_13 == 0xff) {
  VAR_8 = VAR_3;
  if (VAR_5)
   VAR_5->key_type = VAR_8;
 }

 FUNC_1(&VAR_11->bdaddr, VAR_6);
 FUNC_6(VAR_11->val, VAR_7, VAR_1);
 VAR_11->pin_len = VAR_9;

 if (VAR_8 == VAR_2)
  VAR_11->type = VAR_13;
 else
  VAR_11->type = VAR_8;

 if (VAR_10)
  *VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_8,
       VAR_13);

 return VAR_11;
}
