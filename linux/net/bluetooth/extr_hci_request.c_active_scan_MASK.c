
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint16_t ;
typedef int u8 ;
struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hci_request*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_request*) ;
 int FUNC_8 (struct hci_request*,int ,unsigned long,int ,int ,int ) ;
 int FUNC_9 (struct hci_request*,int,int ,int *) ;
 int FUNC_10 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_11(struct hci_request *VAR_6, unsigned long VAR_7)
{
 uint16_t VAR_8 = VAR_7;
 struct hci_dev *VAR_9 = VAR_6->hdev;
 u8 VAR_10;
 int VAR_11;

 FUNC_0("%s", VAR_9->name);

 if (FUNC_4(VAR_9, VAR_3)) {
  FUNC_3(VAR_9);




  if (FUNC_6(VAR_9)) {
   FUNC_5(VAR_9);
   return -VAR_2;
  }

  FUNC_2(VAR_9);
  FUNC_5(VAR_9);

  FUNC_1(VAR_6);
 }





 if (FUNC_4(VAR_9, VAR_4))
  FUNC_7(VAR_6);





 VAR_11 = FUNC_9(VAR_6, 1, FUNC_10(VAR_9),
     &VAR_10);
 if (VAR_11 < 0)
  VAR_10 = VAR_0;

 FUNC_8(VAR_6, VAR_5, VAR_8, VAR_1,
      VAR_10, 0);
 return 0;
}
