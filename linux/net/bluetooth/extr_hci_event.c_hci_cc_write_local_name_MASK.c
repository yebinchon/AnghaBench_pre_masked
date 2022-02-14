
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int dev_name; int name; } ;
typedef int __u8 ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 void* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (struct hci_dev*,void*,int ) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 __u8 VAR_5 = *((__u8 *) VAR_4->data);
 void *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_3->name, VAR_5);

 VAR_6 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_6)
  return;

 FUNC_1(VAR_3);

 if (FUNC_2(VAR_3, VAR_1))
  FUNC_6(VAR_3, VAR_6, VAR_5);
 else if (!VAR_5)
  FUNC_5(VAR_3->dev_name, VAR_6, VAR_0);

 FUNC_3(VAR_3);
}
