
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_dev {int rx_work; int workqueue; int rx_q; int flags; } ;
struct TYPE_2__ {int incoming; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct hci_dev *VAR_7, struct sk_buff *VAR_8)
{
 if (!VAR_7 || (!FUNC_6(VAR_6, &VAR_7->flags)
        && !FUNC_6(VAR_4, &VAR_7->flags))) {
  FUNC_3(VAR_8);
  return -VAR_1;
 }

 if (FUNC_2(VAR_8) != VAR_3 &&
     FUNC_2(VAR_8) != VAR_2 &&
     FUNC_2(VAR_8) != VAR_5) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }


 FUNC_1(VAR_8)->incoming = 1;


 FUNC_0(VAR_8);

 FUNC_5(&VAR_7->rx_q, VAR_8);
 FUNC_4(VAR_7->workqueue, &VAR_7->rx_work);

 return 0;
}
