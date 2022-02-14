
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct TYPE_9__ {int* b; } ;
struct hci_dev {int rpa_timeout; TYPE_1__ static_addr; TYPE_1__ random_addr; TYPE_1__ bdaddr; int rpa_expired; int workqueue; TYPE_1__ rpa; int irk; } ;
typedef TYPE_1__ bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (struct hci_dev*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_request*,int ,int,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (struct hci_request*,TYPE_1__*) ;
 int FUNC_9 (struct hci_dev*,int ,TYPE_1__*) ;

int FUNC_10(struct hci_request *VAR_7, bool VAR_8,
         bool VAR_9, u8 *VAR_10)
{
 struct hci_dev *VAR_11 = VAR_7->hdev;
 int VAR_12;





 if (VAR_9) {
  int VAR_13;

  *VAR_10 = VAR_1;

  if (!FUNC_3(VAR_11, VAR_6) &&
      !FUNC_0(&VAR_11->random_addr, &VAR_11->rpa))
   return 0;

  VAR_12 = FUNC_9(VAR_11, VAR_11->irk, &VAR_11->rpa);
  if (VAR_12 < 0) {
   FUNC_1(VAR_11, "failed to generate new RPA");
   return VAR_12;
  }

  FUNC_8(VAR_7, &VAR_11->rpa);

  VAR_13 = FUNC_6(VAR_11->rpa_timeout * 1000);
  FUNC_7(VAR_11->workqueue, &VAR_11->rpa_expired, VAR_13);

  return 0;
 }





 if (VAR_8) {
  bdaddr_t VAR_14;

  while (1) {




   FUNC_2(&VAR_14, 6);
   VAR_14.b[5] &= 0x3f;




   if (FUNC_0(&VAR_11->bdaddr, &VAR_14))
    break;
  }

  *VAR_10 = VAR_1;
  FUNC_8(VAR_7, &VAR_14);
  return 0;
 }
 if (FUNC_4(VAR_11, VAR_4) ||
     !FUNC_0(&VAR_11->bdaddr, VAR_2) ||
     (!FUNC_4(VAR_11, VAR_3) &&
      FUNC_0(&VAR_11->static_addr, VAR_2))) {
  *VAR_10 = VAR_1;
  if (FUNC_0(&VAR_11->static_addr, &VAR_11->random_addr))
   FUNC_5(VAR_7, VAR_5, 6,
        &VAR_11->static_addr);
  return 0;
 }




 *VAR_10 = VAR_0;

 return 0;
}
