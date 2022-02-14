
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_key {int* val; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int key_type; int dst; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_dev*,char*,int) ;
 int FUNC_2 (struct hci_conn*) ;
 struct link_key* FUNC_3 (struct hci_dev*,int *) ;
 int FUNC_4 (int*,int,char*,int,int*) ;
 int FUNC_5 (int*,int*,int) ;

int FUNC_6(struct hci_conn *VAR_4, u8 *VAR_5, u8 *VAR_6, u8 *VAR_7)
{
 struct hci_dev *VAR_8 = VAR_4->hdev;
 struct link_key *VAR_9;
 u8 VAR_10[VAR_1];
 u8 VAR_11[VAR_1];
 int VAR_12;

 if (!FUNC_2(VAR_4))
  return -VAR_0;

 FUNC_0("conn %p key_type %d", VAR_4, VAR_4->key_type);


 if (VAR_4->key_type < 3) {
  FUNC_1(VAR_8, "legacy key type %d", VAR_4->key_type);
  return -VAR_0;
 }

 *VAR_7 = VAR_4->key_type;
 *VAR_6 = VAR_1;

 VAR_9 = FUNC_3(VAR_8, &VAR_4->dst);
 if (!VAR_9) {
  FUNC_0("No Link key for conn %p dst %pMR", VAR_4, &VAR_4->dst);
  return -VAR_0;
 }


 FUNC_5(&VAR_10[0], VAR_9->val, VAR_2);
 FUNC_5(&VAR_10[VAR_2], VAR_9->val, VAR_2);


 VAR_12 = FUNC_4(VAR_10, VAR_1, "gamp", 4, VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_8, "could not derive Generic AMP Key: err %d", VAR_12);
  return VAR_12;
 }

 if (VAR_4->key_type == VAR_3) {
  FUNC_0("Use Generic AMP Key (gamp)");
  FUNC_5(VAR_5, VAR_11, VAR_1);
  return VAR_12;
 }


 return FUNC_4(VAR_11, VAR_1, "802b", 4, VAR_5);
}
