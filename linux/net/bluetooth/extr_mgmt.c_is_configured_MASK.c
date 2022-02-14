
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int public_addr; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct hci_dev *VAR_5)
{
 if (FUNC_2(VAR_2, &VAR_5->quirks) &&
     !FUNC_1(VAR_5, VAR_1))
  return 0;

 if ((FUNC_2(VAR_3, &VAR_5->quirks) ||
      FUNC_2(VAR_4, &VAR_5->quirks)) &&
     !FUNC_0(&VAR_5->public_addr, VAR_0))
  return 0;

 return 1;
}
