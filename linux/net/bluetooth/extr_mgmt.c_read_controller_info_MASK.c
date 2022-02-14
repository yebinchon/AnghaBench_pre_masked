
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_read_info {int short_name; int name; int dev_class; void* current_settings; void* supported_settings; int manufacturer; int version; int bdaddr; } ;
struct hci_dev {int id; int short_name; int dev_name; int dev_class; int manufacturer; int hci_ver; int bdaddr; int name; } ;
typedef int rp ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct mgmt_rp_read_info*,int ,int) ;
 int FUNC_10 (struct sock*,int ,int ,int ,struct mgmt_rp_read_info*,int) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_1, struct hci_dev *VAR_2,
    void *VAR_3, u16 VAR_4)
{
 struct mgmt_rp_read_info VAR_5;

 FUNC_0("sock %p %s", VAR_1, VAR_2->name);

 FUNC_6(VAR_2);

 FUNC_9(&VAR_5, 0, sizeof(VAR_5));

 FUNC_1(&VAR_5.bdaddr, &VAR_2->bdaddr);

 VAR_5.version = VAR_2->hci_ver;
 VAR_5.manufacturer = FUNC_2(VAR_2->manufacturer);

 VAR_5.supported_settings = FUNC_3(FUNC_5(VAR_2));
 VAR_5.current_settings = FUNC_3(FUNC_4(VAR_2));

 FUNC_8(VAR_5.dev_class, VAR_2->dev_class, 3);

 FUNC_8(VAR_5.name, VAR_2->dev_name, sizeof(VAR_2->dev_name));
 FUNC_8(VAR_5.short_name, VAR_2->short_name, sizeof(VAR_2->short_name));

 FUNC_7(VAR_2);

 return FUNC_10(VAR_1, VAR_2->id, VAR_0, 0, &VAR_5,
     sizeof(VAR_5));
}
