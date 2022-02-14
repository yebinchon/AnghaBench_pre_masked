
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int dev_class; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 void* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (struct hci_dev*,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 __u8 VAR_4 = *((__u8 *) VAR_3->data);
 void *VAR_5;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4);

 VAR_5 = FUNC_4(VAR_2, VAR_1);
 if (!VAR_5)
  return;

 FUNC_1(VAR_2);

 if (VAR_4 == 0)
  FUNC_5(VAR_2->dev_class, VAR_5, 3);

 if (FUNC_2(VAR_2, VAR_0))
  FUNC_6(VAR_2, VAR_5, VAR_4);

 FUNC_3(VAR_2);
}
