
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct TYPE_2__ {int bdaddr; } ;
struct mgmt_cp_confirm_name {TYPE_1__ addr; scalar_t__ name_known; } ;
struct inquiry_entry {int name_state; int list; } ;
struct hci_dev {int id; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_4 (struct hci_dev*,int *) ;
 int FUNC_5 (struct hci_dev*,struct inquiry_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*,int ,int ,int ,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_5, struct hci_dev *VAR_6, void *VAR_7,
   u16 VAR_8)
{
 struct mgmt_cp_confirm_name *VAR_9 = VAR_7;
 struct inquiry_entry *VAR_10;
 int VAR_11;

 FUNC_0("%s", VAR_6->name);

 FUNC_1(VAR_6);

 if (!FUNC_3(VAR_6)) {
  VAR_11 = FUNC_7(VAR_5, VAR_6->id, VAR_0,
     VAR_1, &VAR_9->addr,
     sizeof(VAR_9->addr));
  goto failed;
 }

 VAR_10 = FUNC_4(VAR_6, &VAR_9->addr.bdaddr);
 if (!VAR_10) {
  VAR_11 = FUNC_7(VAR_5, VAR_6->id, VAR_0,
     VAR_2, &VAR_9->addr,
     sizeof(VAR_9->addr));
  goto failed;
 }

 if (VAR_9->name_known) {
  VAR_10->name_state = VAR_3;
  FUNC_6(&VAR_10->list);
 } else {
  VAR_10->name_state = VAR_4;
  FUNC_5(VAR_6, VAR_10);
 }

 VAR_11 = FUNC_7(VAR_5, VAR_6->id, VAR_0, 0,
    &VAR_9->addr, sizeof(VAR_9->addr));

failed:
 FUNC_2(VAR_6);
 return VAR_11;
}
