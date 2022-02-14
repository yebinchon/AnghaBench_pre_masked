
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {TYPE_1__* hdev; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_request*,unsigned long) ;
 int FUNC_2 (struct hci_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct hci_request *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0("%s", VAR_1->hdev->name);

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(VAR_1, VAR_0);
}
