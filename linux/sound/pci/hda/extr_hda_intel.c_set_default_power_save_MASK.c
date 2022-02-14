
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pci_quirk {int subdevice; int subvendor; } ;
struct azx {int bus; TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 struct snd_pci_quirk* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct azx *VAR_3)
{
 int VAR_4 = VAR_1;
 FUNC_1(&VAR_3->bus, VAR_4 * 1000);
}
