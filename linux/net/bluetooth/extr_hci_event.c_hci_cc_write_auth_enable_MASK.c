
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {int flags; int name; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 void* FUNC_5 (struct hci_dev*,int ) ;
 int FUNC_6 (struct hci_dev*,scalar_t__) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 __u8 VAR_6 = *((__u8 *) VAR_5->data);
 void *VAR_7;

 FUNC_0("%s status 0x%2.2x", VAR_4->name, VAR_6);

 VAR_7 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_7)
  return;

 FUNC_2(VAR_4);

 if (!VAR_6) {
  __u8 VAR_8 = *((__u8 *) VAR_7);

  if (VAR_8 == VAR_0)
   FUNC_7(VAR_1, &VAR_4->flags);
  else
   FUNC_1(VAR_1, &VAR_4->flags);
 }

 if (FUNC_3(VAR_4, VAR_2))
  FUNC_6(VAR_4, VAR_6);

 FUNC_4(VAR_4);
}
