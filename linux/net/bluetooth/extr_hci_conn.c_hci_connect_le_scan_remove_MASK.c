
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_conn {int le_scan_cleanup; TYPE_1__* hdev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,struct hci_conn*) ;
 int FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hci_conn *VAR_0)
{
 FUNC_0("%s hcon %p", VAR_0->hdev->name, VAR_0);
 FUNC_2(VAR_0->hdev);
 FUNC_1(VAR_0);





 FUNC_3(&VAR_0->le_scan_cleanup);
}
