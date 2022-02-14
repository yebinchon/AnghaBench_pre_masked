
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_mem_block {int offset; int index; int type; struct sst_dsp* dsp; int users; } ;
struct TYPE_2__ {scalar_t__ pci_cfg; } ;
struct sst_dsp {TYPE_1__ addr; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct sst_mem_block*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sst_mem_block*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sst_mem_block *VAR_3)
{
 struct sst_dsp *VAR_4 = VAR_3->dsp;
 u32 VAR_5, VAR_6;

 if (VAR_3->users++ > 0)
  return 0;

 FUNC_0(VAR_3->dsp->dev, " enabled block %d:%d at offset 0x%x\n",
  VAR_3->type, VAR_3->index, VAR_3->offset);


 VAR_6 = FUNC_2(VAR_4->addr.pci_cfg + VAR_2);
 VAR_6 &= ~VAR_0;
 FUNC_5(VAR_6, VAR_4->addr.pci_cfg + VAR_2);

 VAR_6 = FUNC_2(VAR_4->addr.pci_cfg + VAR_1);
 VAR_5 = FUNC_1(VAR_3);
 FUNC_5(VAR_6 & ~VAR_5, VAR_4->addr.pci_cfg + VAR_1);


 FUNC_4(10);


 VAR_6 = FUNC_2(VAR_4->addr.pci_cfg + VAR_2);
 VAR_6 |= VAR_0;
 FUNC_5(VAR_6, VAR_4->addr.pci_cfg + VAR_2);

 FUNC_4(50);


 FUNC_3(VAR_3);
 return 0;
}
