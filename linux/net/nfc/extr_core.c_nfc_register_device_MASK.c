
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int * rfkill; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct nfc_dev*) ;
 int FUNC_5 (struct nfc_dev*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int ,int *,int ,int *,struct nfc_dev*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

int FUNC_11(struct nfc_dev *VAR_4)
{
 int VAR_5;

 FUNC_6("dev_name=%s\n", FUNC_0(&VAR_4->dev));

 FUNC_2(&VAR_2);
 VAR_1++;
 VAR_5 = FUNC_1(&VAR_4->dev);
 FUNC_3(&VAR_2);

 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  FUNC_7("Could not register llcp device\n");

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  FUNC_6("The userspace won't be notified that the device %s was added\n",
    FUNC_0(&VAR_4->dev));

 VAR_4->rfkill = FUNC_8(FUNC_0(&VAR_4->dev), &VAR_4->dev,
       VAR_0, &VAR_3, VAR_4);
 if (VAR_4->rfkill) {
  if (FUNC_10(VAR_4->rfkill) < 0) {
   FUNC_9(VAR_4->rfkill);
   VAR_4->rfkill = ((void*)0);
  }
 }

 return 0;
}
