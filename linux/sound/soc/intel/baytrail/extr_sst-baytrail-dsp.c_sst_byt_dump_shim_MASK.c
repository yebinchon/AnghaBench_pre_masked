
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ pci_cfg; } ;
struct sst_dsp {int dev; TYPE_1__ addr; } ;


 int FUNC_0 (int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sst_dsp*,int) ;

__attribute__((used)) static void FUNC_3(struct sst_dsp *VAR_0)
{
 int VAR_1;
 u64 VAR_2;

 for (VAR_1 = 0; VAR_1 <= 0xF0; VAR_1 += 8) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  if (VAR_2)
   FUNC_0(VAR_0->dev, "shim 0x%2.2x value 0x%16.16llx\n",
    VAR_1, VAR_2);
 }

 for (VAR_1 = 0x00; VAR_1 <= 0xff; VAR_1 += 4) {
  VAR_2 = FUNC_1(VAR_0->addr.pci_cfg + VAR_1);
  if (VAR_2)
   FUNC_0(VAR_0->dev, "pci 0x%2.2x value 0x%8.8x\n",
    VAR_1, (u32)VAR_2);
 }
}
