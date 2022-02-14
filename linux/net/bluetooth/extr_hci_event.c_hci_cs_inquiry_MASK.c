
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; int name; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_1, __u8 VAR_2)
{
 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_2);

 if (VAR_2) {
  FUNC_1(VAR_1);
  return;
 }

 FUNC_2(VAR_0, &VAR_1->flags);
}
