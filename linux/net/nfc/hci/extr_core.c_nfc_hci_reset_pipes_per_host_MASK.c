
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nfc_hci_dev {TYPE_1__* pipes; } ;
struct TYPE_2__ {scalar_t__ dest_host; int gate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct nfc_hci_dev *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_3->pipes[VAR_5].dest_host != VAR_4)
   continue;

  VAR_3->pipes[VAR_5].gate = VAR_0;
  VAR_3->pipes[VAR_5].dest_host = VAR_1;
 }
}
