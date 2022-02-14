
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct hci_request {TYPE_2__* hdev; } ;
struct hci_cp_inquiry {int length; int lap; } ;
typedef int cp ;
struct TYPE_5__ {scalar_t__ limited; } ;
struct TYPE_6__ {TYPE_1__ discovery; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct hci_request*,int ,int,struct hci_cp_inquiry*) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (struct hci_cp_inquiry*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct hci_request *VAR_1, unsigned long VAR_2)
{
 u8 VAR_3 = VAR_2;
 const u8 VAR_4[3] = { 0x33, 0x8b, 0x9e };
 const u8 VAR_5[3] = { 0x00, 0x8b, 0x9e };
 struct hci_cp_inquiry VAR_6;

 FUNC_0("%s", VAR_1->hdev->name);

 FUNC_1(VAR_1->hdev);
 FUNC_3(VAR_1->hdev);
 FUNC_2(VAR_1->hdev);

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));

 if (VAR_1->hdev->discovery.limited)
  FUNC_5(&VAR_6.lap, VAR_5, sizeof(VAR_6.lap));
 else
  FUNC_5(&VAR_6.lap, VAR_4, sizeof(VAR_6.lap));

 VAR_6.length = VAR_3;

 FUNC_4(VAR_1, VAR_0, sizeof(VAR_6), &VAR_6);

 return 0;
}
