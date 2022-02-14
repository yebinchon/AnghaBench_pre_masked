
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {struct hci_dev* hdev; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct hci_dev {int name; int pend_le_reports; int pend_le_conns; TYPE_1__ discovery; int flags; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_request*) ;
 int FUNC_5 (struct hci_request*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct hci_request *VAR_9)
{
 struct hci_dev *VAR_10 = VAR_9->hdev;

 if (!FUNC_7(VAR_8, &VAR_10->flags) ||
     FUNC_7(VAR_3, &VAR_10->flags) ||
     FUNC_1(VAR_10, VAR_6) ||
     FUNC_1(VAR_10, VAR_2) ||
     FUNC_1(VAR_10, VAR_1) ||
     FUNC_1(VAR_10, VAR_7))
  return;


 if (!FUNC_1(VAR_10, VAR_4))
  return;


 if (VAR_10->discovery.state != VAR_0)
  return;
 FUNC_2(VAR_10);

 if (FUNC_6(&VAR_10->pend_le_conns) &&
     FUNC_6(&VAR_10->pend_le_reports)) {






  if (!FUNC_1(VAR_10, VAR_5))
   return;

  FUNC_5(VAR_9);

  FUNC_0("%s stopping background scanning", VAR_10->name);
 } else {
  if (FUNC_3(VAR_10))
   return;




  if (FUNC_1(VAR_10, VAR_5))
   FUNC_5(VAR_9);

  FUNC_4(VAR_9);

  FUNC_0("%s starting background scanning", VAR_10->name);
 }
}
