
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int flags; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hci_dev*) ;
 struct hci_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(__u16 VAR_7)
{
 struct hci_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7);
 if (!VAR_8)
  return -VAR_2;

 if (!FUNC_4(VAR_5, &VAR_8->flags)) {
  VAR_9 = -VAR_1;
  goto done;
 }

 if (FUNC_3(VAR_8, VAR_6)) {
  VAR_9 = -VAR_0;
  goto done;
 }

 if (FUNC_3(VAR_8, VAR_4)) {
  VAR_9 = -VAR_3;
  goto done;
 }

 VAR_9 = FUNC_0(VAR_8);

done:
 FUNC_2(VAR_8);
 return VAR_9;
}
