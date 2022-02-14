
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int work; } ;
struct hci_dev {TYPE_1__ power_off; int req_workqueue; int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_0, u8 VAR_1, u16 VAR_2)
{
 FUNC_0("%s status 0x%02x", VAR_0->name, VAR_1);

 if (FUNC_2(VAR_0) == 0) {
  FUNC_1(&VAR_0->power_off);
  FUNC_3(VAR_0->req_workqueue, &VAR_0->power_off.work);
 }
}
