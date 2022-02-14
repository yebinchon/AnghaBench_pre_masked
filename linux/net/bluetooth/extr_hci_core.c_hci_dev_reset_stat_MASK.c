
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev_stats {int dummy; } ;
struct hci_dev {int stat; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hci_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (int *,int ,int) ;

int FUNC_4(__u16 VAR_5)
{
 struct hci_dev *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 if (FUNC_2(VAR_6, VAR_4)) {
  VAR_7 = -VAR_0;
  goto done;
 }

 if (FUNC_2(VAR_6, VAR_3)) {
  VAR_7 = -VAR_2;
  goto done;
 }

 FUNC_3(&VAR_6->stat, 0, sizeof(struct hci_dev_stats));

done:
 FUNC_1(VAR_6);
 return VAR_7;
}
