
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int power_off; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hci_dev*) ;
 struct hci_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;

int FUNC_6(__u16 VAR_4)
{
 struct hci_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_5(VAR_5, VAR_3)) {
  VAR_6 = -VAR_0;
  goto done;
 }

 if (FUNC_4(VAR_5, VAR_2))
  FUNC_0(&VAR_5->power_off);

 VAR_6 = FUNC_1(VAR_5);

done:
 FUNC_3(VAR_5);
 return VAR_6;
}
