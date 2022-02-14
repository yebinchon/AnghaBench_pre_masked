
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pci_cfg; int lpe; } ;
struct sst_dsp {TYPE_1__ addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sst_dsp*) ;

__attribute__((used)) static void FUNC_2(struct sst_dsp *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->addr.lpe);
 FUNC_0(VAR_0->addr.pci_cfg);
}
