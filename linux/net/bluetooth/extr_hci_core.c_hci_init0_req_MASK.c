
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {struct hci_dev* hdev; } ;
struct hci_dev {scalar_t__ set_bdaddr; int quirks; int name; } ;


 int FUNC_0 (char*,int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_request*,int ,int ,int *) ;
 int FUNC_2 (struct hci_request*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hci_request *VAR_3, unsigned long VAR_4)
{
 struct hci_dev *VAR_5 = VAR_3->hdev;

 FUNC_0("%s %ld", VAR_5->name, VAR_4);


 if (!FUNC_3(VAR_2, &VAR_5->quirks))
  FUNC_2(VAR_3, 0);


 FUNC_1(VAR_3, VAR_1, 0, ((void*)0));


 if (VAR_5->set_bdaddr)
  FUNC_1(VAR_3, VAR_0, 0, ((void*)0));

 return 0;
}
