
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct TYPE_4__ {scalar_t__ host; int gate; } ;
struct TYPE_3__ {TYPE_2__* pipes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct nci_dev *VAR_3, u8 VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_3->hci_dev->pipes[VAR_5].host == VAR_4) {
   VAR_3->hci_dev->pipes[VAR_5].gate = VAR_0;
   VAR_3->hci_dev->pipes[VAR_5].host = VAR_1;
  }
 }
}
