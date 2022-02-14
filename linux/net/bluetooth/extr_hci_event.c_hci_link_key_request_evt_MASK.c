
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct link_key {int pin_len; int val; int type; } ;
struct hci_cp_link_key_reply {int link_key; int bdaddr; } ;
struct hci_ev_link_key_req {struct hci_cp_link_key_reply bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int auth_type; scalar_t__ pending_sec_level; int flags; } ;
typedef int cp ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,struct hci_cp_link_key_reply*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hci_conn*,int ,int) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ,struct hci_cp_link_key_reply*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct hci_dev*) ;
 struct link_key* FUNC_8 (struct hci_dev*,struct hci_cp_link_key_reply*) ;
 int FUNC_9 (struct hci_dev*,int ,int,struct hci_cp_link_key_reply*) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_11, struct sk_buff *VAR_12)
{
 struct hci_ev_link_key_req *VAR_13 = (void *) VAR_12->data;
 struct hci_cp_link_key_reply VAR_14;
 struct hci_conn *VAR_15;
 struct link_key *VAR_16;

 FUNC_0("%s", VAR_11->name);

 if (!FUNC_6(VAR_11, VAR_8))
  return;

 FUNC_5(VAR_11);

 VAR_16 = FUNC_8(VAR_11, &VAR_13->bdaddr);
 if (!VAR_16) {
  FUNC_0("%s link key not found for %pMR", VAR_11->name,
         &VAR_13->bdaddr);
  goto not_found;
 }

 FUNC_0("%s found key type %u for %pMR", VAR_11->name, VAR_16->type,
        &VAR_13->bdaddr);

 VAR_15 = FUNC_4(VAR_11, VAR_0, &VAR_13->bdaddr);
 if (VAR_15) {
  FUNC_2(VAR_3, &VAR_15->flags);

  if ((VAR_16->type == VAR_6 ||
       VAR_16->type == VAR_7) &&
      VAR_15->auth_type != 0xff && (VAR_15->auth_type & 0x01)) {
   FUNC_0("%s ignoring unauthenticated key", VAR_11->name);
   goto not_found;
  }

  if (VAR_16->type == VAR_5 && VAR_16->pin_len < 16 &&
      (VAR_15->pending_sec_level == VAR_2 ||
       VAR_15->pending_sec_level == VAR_1)) {
   FUNC_0("%s ignoring key unauthenticated for high security",
          VAR_11->name);
   goto not_found;
  }

  FUNC_3(VAR_15, VAR_16->type, VAR_16->pin_len);
 }

 FUNC_1(&VAR_14.bdaddr, &VAR_13->bdaddr);
 FUNC_10(VAR_14.link_key, VAR_16->val, VAR_4);

 FUNC_9(VAR_11, VAR_10, sizeof(VAR_14), &VAR_14);

 FUNC_7(VAR_11);

 return;

not_found:
 FUNC_9(VAR_11, VAR_9, 6, &VAR_13->bdaddr);
 FUNC_7(VAR_11);
}
