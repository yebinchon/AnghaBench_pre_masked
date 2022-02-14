
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_request*,int ,int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_3(struct hci_request *VAR_4)
{
 struct hci_dev *VAR_5 = VAR_4->hdev;


 FUNC_1(VAR_4, VAR_1, 0, ((void*)0));


 FUNC_1(VAR_4, VAR_2, 0, ((void*)0));


 FUNC_1(VAR_4, VAR_3, 0, ((void*)0));


 if (!FUNC_2(VAR_5))
  FUNC_0(VAR_5, VAR_0);
}
