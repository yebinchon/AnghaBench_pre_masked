
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfc_hci_dev {int gate2pipe; TYPE_1__* pipes; } ;
struct TYPE_2__ {int dest_host; int gate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct nfc_hci_dev *VAR_4)
{
 int VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->pipes[VAR_5].gate = VAR_0;
  VAR_4->pipes[VAR_5].dest_host = VAR_1;
 }
 FUNC_0(VAR_4->gate2pipe, VAR_2, sizeof(VAR_4->gate2pipe));
}
