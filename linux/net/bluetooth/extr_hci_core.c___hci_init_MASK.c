
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*,int ,int ,int ,int *) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 scalar_t__ FUNC_5 (struct hci_dev*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;
 scalar_t__ FUNC_7 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_4, 0, VAR_1, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_5(VAR_8, VAR_3))
  FUNC_1(VAR_8);

 VAR_9 = FUNC_0(VAR_8, VAR_5, 0, VAR_1, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;





 if (VAR_8->dev_type != VAR_2)
  return 0;

 VAR_9 = FUNC_0(VAR_8, VAR_6, 0, VAR_1, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_7, 0, VAR_1, ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;
 if (!FUNC_5(VAR_8, VAR_3) &&
     !FUNC_5(VAR_8, VAR_0))
  return 0;

 FUNC_3(VAR_8);

 if (FUNC_6(VAR_8))
  FUNC_2(VAR_8);

 if (FUNC_7(VAR_8))
  FUNC_4(VAR_8);

 return 0;
}
