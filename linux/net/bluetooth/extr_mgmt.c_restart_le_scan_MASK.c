
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scan_duration; scalar_t__ scan_start; } ;
struct hci_dev {int le_scan_restart; int req_workqueue; TYPE_1__ discovery; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_3)
{

 if (!FUNC_0(VAR_3, VAR_1))
  return;

 if (FUNC_2(VAR_2 + VAR_0,
         VAR_3->discovery.scan_start +
         VAR_3->discovery.scan_duration))
  return;

 FUNC_1(VAR_3->req_workqueue, &VAR_3->le_scan_restart,
      VAR_0);
}
