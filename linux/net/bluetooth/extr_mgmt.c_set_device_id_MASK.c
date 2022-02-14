
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_set_device_id {int version; int product; int vendor; int source; } ;
struct hci_request {int dummy; } ;
struct hci_dev {int devid_source; int id; void* devid_version; void* devid_product; void* devid_vendor; int name; } ;
typedef int __u16 ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_request*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_request*,struct hci_dev*) ;
 int FUNC_6 (struct hci_request*,int *) ;
 int FUNC_7 (struct sock*,int ,int ,int ,int *,int ) ;
 int FUNC_8 (struct sock*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_2, struct hci_dev *VAR_3, void *VAR_4,
    u16 VAR_5)
{
 struct mgmt_cp_set_device_id *VAR_6 = VAR_4;
 struct hci_request VAR_7;
 int VAR_8;
 __u16 VAR_9;

 FUNC_0("%s", VAR_3->name);

 VAR_9 = FUNC_2(VAR_6->source);

 if (VAR_9 > 0x0002)
  return FUNC_8(VAR_2, VAR_3->id, VAR_0,
           VAR_1);

 FUNC_3(VAR_3);

 VAR_3->devid_source = VAR_9;
 VAR_3->devid_vendor = FUNC_2(VAR_6->vendor);
 VAR_3->devid_product = FUNC_2(VAR_6->product);
 VAR_3->devid_version = FUNC_2(VAR_6->version);

 VAR_8 = FUNC_7(VAR_2, VAR_3->id, VAR_0, 0,
    ((void*)0), 0);

 FUNC_5(&VAR_7, VAR_3);
 FUNC_1(&VAR_7);
 FUNC_6(&VAR_7, ((void*)0));

 FUNC_4(VAR_3);

 return VAR_8;
}
