
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ,int ,int ,int *) ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_4)
{
 int VAR_5;

 if (FUNC_3(VAR_1, &VAR_4->quirks))
  return 0;

 VAR_5 = FUNC_0(VAR_4, VAR_3, 0, VAR_0, ((void*)0));
 if (VAR_5 < 0)
  return VAR_5;

 if (FUNC_2(VAR_4, VAR_2))
  FUNC_1(VAR_4);

 return 0;
}
