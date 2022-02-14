
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {TYPE_1__* hdev; } ;
struct TYPE_2__ {int* commands; } ;


 int VAR_0 ;
 int FUNC_0 (struct hci_request*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct hci_request *VAR_1)
{




 if (VAR_1->hdev->commands[14] & 0x20)
  FUNC_0(VAR_1, VAR_0, 0, ((void*)0));

 return 0;
}
