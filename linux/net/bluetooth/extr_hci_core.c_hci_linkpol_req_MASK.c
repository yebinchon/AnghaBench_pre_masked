
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {TYPE_1__* hdev; } ;
typedef int __le16 ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct hci_request*,int ,int,int *) ;

__attribute__((used)) static int FUNC_3(struct hci_request *VAR_1, unsigned long VAR_2)
{
 __le16 VAR_3 = FUNC_1(VAR_2);

 FUNC_0("%s %x", VAR_1->hdev->name, VAR_3);


 FUNC_2(VAR_1, VAR_0, 2, &VAR_3);
 return 0;
}
