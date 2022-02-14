
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_request {int hdev; } ;


 int FUNC_0 (struct hci_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hci_request *VAR_0, unsigned long VAR_1)
{
 FUNC_1(VAR_0->hdev);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0->hdev);
 return 0;
}
