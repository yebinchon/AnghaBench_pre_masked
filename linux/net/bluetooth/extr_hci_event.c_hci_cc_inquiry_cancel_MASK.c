
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_dev {scalar_t__ le_scan_type; int flags; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 __u8 VAR_6 = *((__u8 *) VAR_5->data);

 FUNC_0("%s status 0x%2.2x", VAR_4->name, VAR_6);

 if (VAR_6)
  return;

 FUNC_1(VAR_1, &VAR_4->flags);
 FUNC_7();
 FUNC_8(&VAR_4->flags, VAR_1);

 FUNC_3(VAR_4);



 if (!FUNC_4(VAR_4, VAR_2) ||
     VAR_4->le_scan_type != VAR_3)
  FUNC_6(VAR_4, VAR_0);
 FUNC_5(VAR_4);

 FUNC_2(VAR_4);
}
