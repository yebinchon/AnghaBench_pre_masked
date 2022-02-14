
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int adv_instance_timeout; int cur_adv_instance; int adv_instance_expire; int req_workqueue; int adv_instances; } ;
struct adv_info {scalar_t__ timeout; scalar_t__ duration; scalar_t__ remaining_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hci_request*) ;
 int FUNC_1 (struct hci_request*,int ) ;
 int FUNC_2 (struct hci_request*,int ) ;
 int FUNC_3 (struct hci_request*,int ) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 struct adv_info* FUNC_6 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *,int ) ;

int FUNC_10(struct hci_request *VAR_5, u8 VAR_6,
        bool VAR_7)
{
 struct hci_dev *VAR_8 = VAR_5->hdev;
 struct adv_info *VAR_9 = ((void*)0);
 u16 VAR_10;

 if (FUNC_5(VAR_8, VAR_3) ||
     FUNC_7(&VAR_8->adv_instances))
  return -VAR_2;

 if (VAR_8->adv_instance_timeout)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8, VAR_6);
 if (!VAR_9)
  return -VAR_1;
 if (VAR_9->timeout == 0 ||
     VAR_9->duration <= VAR_9->remaining_time)
  VAR_10 = VAR_9->duration;
 else
  VAR_10 = VAR_9->remaining_time;




 if (VAR_9->timeout)
  VAR_9->remaining_time =
    VAR_9->remaining_time - VAR_10;


 if (!FUNC_4(VAR_8)) {
  VAR_8->adv_instance_timeout = VAR_10;
  FUNC_9(VAR_8->req_workqueue,
      &VAR_8->adv_instance_expire,
      FUNC_8(VAR_10 * 1000));
 }





 if (!VAR_7 && VAR_8->cur_adv_instance == VAR_6 &&
     FUNC_5(VAR_8, VAR_4))
  return 0;

 VAR_8->cur_adv_instance = VAR_6;
 if (FUNC_4(VAR_8)) {
  FUNC_1(VAR_5, VAR_6);
 } else {
  FUNC_2(VAR_5, VAR_6);
  FUNC_3(VAR_5, VAR_6);
  FUNC_0(VAR_5);
 }

 return 0;
}
