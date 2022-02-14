
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct hci_dev*) ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_request*,int ,int,int*) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct hci_request *VAR_9)
{
 struct hci_dev *VAR_10 = VAR_9->hdev;
 u8 VAR_11;

 if (!FUNC_1(VAR_10, VAR_0))
  return;

 if (!FUNC_3(VAR_10))
  return;

 if (FUNC_4(VAR_10))
  return;

 if (FUNC_1(VAR_10, VAR_1) ||
     FUNC_0(VAR_10))
  VAR_11 = VAR_8;
 else
  VAR_11 = VAR_6;

 if (FUNC_1(VAR_10, VAR_2))
  VAR_11 |= VAR_7;

 if (FUNC_5(VAR_5, &VAR_10->flags) == !!(VAR_11 & VAR_8) &&
     FUNC_5(VAR_3, &VAR_10->flags) == !!(VAR_11 & VAR_7))
  return;

 FUNC_2(VAR_9, VAR_4, 1, &VAR_11);
}
