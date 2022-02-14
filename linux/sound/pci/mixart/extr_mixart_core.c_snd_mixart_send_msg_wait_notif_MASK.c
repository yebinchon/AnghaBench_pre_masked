
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
typedef int u32 ;
struct mixart_msg {int dummy; } ;
struct mixart_mgr {TYPE_1__* pci; int msg_sleep; int msg_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *) ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 long FUNC_6 (int ) ;
 int FUNC_7 (struct mixart_mgr*,struct mixart_msg*,int ,int,int*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(struct mixart_mgr *VAR_9,
       struct mixart_msg *VAR_10, u32 VAR_11)
{
 int VAR_12;
 wait_queue_entry_t VAR_13;
 long VAR_14;

 if (FUNC_9(!VAR_11))
  return -VAR_0;
 if (FUNC_9((VAR_11 & VAR_5) != VAR_6))
  return -VAR_0;
 if (FUNC_9(VAR_11 & VAR_2))
  return -VAR_0;

 FUNC_2(&VAR_13, VAR_8);

 FUNC_3(&VAR_9->msg_lock);

 VAR_12 = FUNC_7(VAR_9, VAR_10, VAR_3, 1, &VAR_11);
 if(VAR_12) {
  FUNC_4(&VAR_9->msg_lock);
  return VAR_12;
 }

 FUNC_8(VAR_7);
 FUNC_0(&VAR_9->msg_sleep, &VAR_13);
 FUNC_4(&VAR_9->msg_lock);
 VAR_14 = FUNC_6(VAR_4);
 FUNC_5(&VAR_9->msg_sleep, &VAR_13);

 if (! VAR_14) {

  FUNC_1(&VAR_9->pci->dev,
   "error: notification %x not received\n", VAR_11);
  return -VAR_1;
 }

 return 0;
}
