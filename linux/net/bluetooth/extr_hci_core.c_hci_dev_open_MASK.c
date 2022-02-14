
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int req_workqueue; int power_off; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 struct hci_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_6 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_7 (struct hci_dev*,int ) ;

int FUNC_8(__u16 VAR_7)
{
 struct hci_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7);
 if (!VAR_8)
  return -VAR_0;
 if (FUNC_7(VAR_8, VAR_5) &&
     !FUNC_7(VAR_8, VAR_6)) {
  VAR_9 = -VAR_1;
  goto done;
 }






 if (FUNC_6(VAR_8, VAR_2))
  FUNC_0(&VAR_8->power_off);





 FUNC_1(VAR_8->req_workqueue);







 if (!FUNC_7(VAR_8, VAR_6) &&
     !FUNC_7(VAR_8, VAR_4))
  FUNC_5(VAR_8, VAR_3);

 VAR_9 = FUNC_2(VAR_8);

done:
 FUNC_4(VAR_8);
 return VAR_9;
}
