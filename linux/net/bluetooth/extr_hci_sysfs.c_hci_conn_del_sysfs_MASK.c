
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_conn {int dev; struct hci_dev* hdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct device* FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int *,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct device*) ;

void FUNC_6(struct hci_conn *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;

 if (!FUNC_2(&VAR_2->dev))
  return;

 while (1) {
  struct device *VAR_4;

  VAR_4 = FUNC_1(&VAR_2->dev, ((void*)0), VAR_1);
  if (!VAR_4)
   break;
  FUNC_3(VAR_4, ((void*)0), VAR_0);
  FUNC_5(VAR_4);
 }

 FUNC_0(&VAR_2->dev);

 FUNC_4(VAR_3);
}
