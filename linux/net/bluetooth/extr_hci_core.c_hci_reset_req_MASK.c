
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {TYPE_1__* hdev; } ;
struct TYPE_2__ {int flags; int name; } ;


 int FUNC_0 (char*,int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_request*,int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hci_request *VAR_2, unsigned long VAR_3)
{
 FUNC_0("%s %ld", VAR_2->hdev->name, VAR_3);


 FUNC_2(VAR_1, &VAR_2->hdev->flags);
 FUNC_1(VAR_2, VAR_0, 0, ((void*)0));
 return 0;
}
