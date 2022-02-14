
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union config_status_reg_mrfld {int full; } ;
struct intel_sst_drv {int dev; int shim; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct intel_sst_drv *VAR_1)
{
 union config_status_reg_mrfld VAR_2;

 FUNC_0(VAR_1->dev, "sst: Resetting the DSP in mrfld\n");
 VAR_2.full = FUNC_1(VAR_1->shim, VAR_0);

 FUNC_0(VAR_1->dev, "value:0x%llx\n", VAR_2.full);

 VAR_2.full |= 0x7;
 FUNC_2(VAR_1->shim, VAR_0, VAR_2.full);
 VAR_2.full = FUNC_1(VAR_1->shim, VAR_0);

 FUNC_0(VAR_1->dev, "value:0x%llx\n", VAR_2.full);

 VAR_2.full &= ~(0x1);
 FUNC_2(VAR_1->shim, VAR_0, VAR_2.full);

 VAR_2.full = FUNC_1(VAR_1->shim, VAR_0);
 FUNC_0(VAR_1->dev, "value:0x%llx\n", VAR_2.full);
 return 0;
}
