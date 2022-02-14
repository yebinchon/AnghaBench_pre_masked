
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_dev {int dev; } ;
struct TYPE_2__ {int * parent; int class; int * type; } ;
struct hci_conn {TYPE_1__ dev; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct hci_conn *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_2->hdev;

 FUNC_0("conn %p", VAR_2);

 VAR_2->dev.type = &VAR_1;
 VAR_2->dev.class = VAR_0;
 VAR_2->dev.parent = &VAR_3->dev;

 FUNC_1(&VAR_2->dev);
}
