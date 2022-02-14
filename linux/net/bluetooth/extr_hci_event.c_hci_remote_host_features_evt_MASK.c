
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int ssp_mode; } ;
struct inquiry_entry {TYPE_1__ data; } ;
struct hci_ev_remote_host_features {int* features; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {int * features; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 struct hci_conn* FUNC_1 (struct hci_dev*,int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 struct inquiry_entry* FUNC_4 (struct hci_dev*,int *) ;
 int FUNC_5 (int ,int*,int) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_2,
      struct sk_buff *VAR_3)
{
 struct hci_ev_remote_host_features *VAR_4 = (void *) VAR_3->data;
 struct inquiry_entry *VAR_5;
 struct hci_conn *VAR_6;

 FUNC_0("%s", VAR_2->name);

 FUNC_2(VAR_2);

 VAR_6 = FUNC_1(VAR_2, VAR_0, &VAR_4->bdaddr);
 if (VAR_6)
  FUNC_5(VAR_6->features[1], VAR_4->features, 8);

 VAR_5 = FUNC_4(VAR_2, &VAR_4->bdaddr);
 if (VAR_5)
  VAR_5->data.ssp_mode = (VAR_4->features[0] & VAR_1);

 FUNC_3(VAR_2);
}
