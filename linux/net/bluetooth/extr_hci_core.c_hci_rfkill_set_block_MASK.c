
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int name; } ;


 int FUNC_0 (char*,struct hci_dev*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_5, bool VAR_6)
{
 struct hci_dev *VAR_7 = VAR_5;

 FUNC_0("%p name %s blocked %d", VAR_7, VAR_7->name, VAR_6);

 if (FUNC_4(VAR_7, VAR_4))
  return -VAR_0;

 if (VAR_6) {
  FUNC_3(VAR_7, VAR_2);
  if (!FUNC_4(VAR_7, VAR_3) &&
      !FUNC_4(VAR_7, VAR_1))
   FUNC_2(VAR_7);
 } else {
  FUNC_1(VAR_7, VAR_2);
 }

 return 0;
}
