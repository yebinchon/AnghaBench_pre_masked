
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_simple_pair_complete {scalar_t__ status; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int remote_auth; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hci_conn*) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_conn*,scalar_t__) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_2,
      struct sk_buff *VAR_3)
{
 struct hci_ev_simple_pair_complete *VAR_4 = (void *) VAR_3->data;
 struct hci_conn *VAR_5;

 FUNC_0("%s", VAR_2->name);

 FUNC_3(VAR_2);

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4->bdaddr);
 if (!VAR_5)
  goto unlock;


 VAR_5->remote_auth = 0xff;






 if (!FUNC_6(VAR_1, &VAR_5->flags) && VAR_4->status)
  FUNC_5(VAR_5, VAR_4->status);

 FUNC_1(VAR_5);

unlock:
 FUNC_4(VAR_2);
}
