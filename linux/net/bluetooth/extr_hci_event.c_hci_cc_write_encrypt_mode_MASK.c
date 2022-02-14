
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 __u8 VAR_4 = *((__u8 *) VAR_3->data);
 __u8 VAR_5;
 void *VAR_6;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4);

 if (VAR_4)
  return;

 VAR_6 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_6)
  return;

 VAR_5 = *((__u8 *) VAR_6);

 if (VAR_5)
  FUNC_3(VAR_0, &VAR_2->flags);
 else
  FUNC_1(VAR_0, &VAR_2->flags);
}
