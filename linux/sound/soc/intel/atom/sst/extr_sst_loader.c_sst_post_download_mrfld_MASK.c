
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int dev; int ddr_base; int dram; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct intel_sst_drv *VAR_0)
{
 FUNC_1(VAR_0->dram, VAR_0->ddr_base);
 FUNC_0(VAR_0->dev, "config written to DCCM\n");
}
