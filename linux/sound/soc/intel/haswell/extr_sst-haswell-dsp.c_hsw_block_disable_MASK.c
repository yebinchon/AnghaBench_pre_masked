
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_mem_block {scalar_t__ users; int offset; int index; int type; struct sst_dsp* dsp; } ;
struct TYPE_2__ {scalar_t__ pci_cfg; } ;
struct sst_dsp {TYPE_1__ addr; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (struct sst_mem_block*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sst_mem_block *VAR_4)
{
 struct sst_dsp *VAR_5 = VAR_4->dsp;
 u32 VAR_6, VAR_7;

 if (--VAR_4->users > 0)
  return 0;

 FUNC_0(VAR_4->dsp->dev, " disabled block %d:%d at offset 0x%x\n",
  VAR_4->type, VAR_4->index, VAR_4->offset);


 VAR_7 = FUNC_2(VAR_5->addr.pci_cfg + VAR_3);
 VAR_7 &= ~VAR_1;
 FUNC_4(VAR_7, VAR_5->addr.pci_cfg + VAR_3);


 VAR_7 = FUNC_2(VAR_5->addr.pci_cfg + VAR_2);
 VAR_6 = FUNC_1(VAR_4);

 if (VAR_6 != (1 << VAR_0))
  FUNC_4(VAR_7 | VAR_6, VAR_5->addr.pci_cfg + VAR_2);


 FUNC_3(10);


 VAR_7 = FUNC_2(VAR_5->addr.pci_cfg + VAR_3);
 VAR_7 |= VAR_1;
 FUNC_4(VAR_7, VAR_5->addr.pci_cfg + VAR_3);

 FUNC_3(50);

 return 0;
}
