
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int* b; } ;
struct hci_dev {int rpa_timeout; int bdaddr; int rpa_expired; int workqueue; TYPE_1__ rpa; int name; int irk; int random_addr; } ;
struct adv_info {int rpa_expired; int rpa_expired_cb; int random_addr; } ;
typedef TYPE_1__ bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (struct hci_dev*,int ,TYPE_1__*) ;

int FUNC_8(struct hci_dev *VAR_4, bool VAR_5,
      bool VAR_6, struct adv_info *VAR_7,
      u8 *VAR_8, bdaddr_t *VAR_9)
{
 int VAR_10;

 FUNC_2(VAR_9, VAR_2);




 if (VAR_6) {
  int VAR_11;

  *VAR_8 = VAR_1;

  if (VAR_7) {
   if (!VAR_7->rpa_expired &&
       !FUNC_1(&VAR_7->random_addr, &VAR_4->rpa))
    return 0;

   VAR_7->rpa_expired = 0;
  } else {
   if (!FUNC_4(VAR_4, VAR_3) &&
       !FUNC_1(&VAR_4->random_addr, &VAR_4->rpa))
    return 0;
  }

  VAR_10 = FUNC_7(VAR_4, VAR_4->irk, &VAR_4->rpa);
  if (VAR_10 < 0) {
   FUNC_0("%s failed to generate new RPA", VAR_4->name);
   return VAR_10;
  }

  FUNC_2(VAR_9, &VAR_4->rpa);

  VAR_11 = FUNC_5(VAR_4->rpa_timeout * 1000);
  if (VAR_7)
   FUNC_6(VAR_4->workqueue,
        &VAR_7->rpa_expired_cb, VAR_11);
  else
   FUNC_6(VAR_4->workqueue,
        &VAR_4->rpa_expired, VAR_11);

  return 0;
 }





 if (VAR_5) {
  bdaddr_t VAR_12;

  while (1) {




   FUNC_3(&VAR_12, 6);
   VAR_12.b[5] &= 0x3f;




   if (FUNC_1(&VAR_4->bdaddr, &VAR_12))
    break;
  }

  *VAR_8 = VAR_1;
  FUNC_2(VAR_9, &VAR_12);

  return 0;
 }


 *VAR_8 = VAR_0;

 return 0;
}
