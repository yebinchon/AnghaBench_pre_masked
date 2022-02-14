
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_pdata {int dummy; } ;
struct TYPE_2__ {scalar_t__ pci_cfg; int shim_offset; int dsp_dram_offset; int dsp_iram_offset; int iram_offset; } ;
struct sst_dsp {int id; TYPE_1__ addr; struct device* dma_dev; } ;
struct sst_adsp_memregion {int start; int end; int blocks; int type; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct sst_adsp_memregion*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct sst_dsp*,struct sst_pdata*) ;
 int FUNC_5 (struct sst_dsp*) ;
 struct sst_adsp_memregion* VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct sst_dsp*,int,int,int ,int *,int,struct sst_dsp*) ;
 struct sst_adsp_memregion* VAR_13 ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct sst_dsp *VAR_14, struct sst_pdata *VAR_15)
{
 const struct sst_adsp_memregion *VAR_16;
 struct device *VAR_17;
 int VAR_18 = -VAR_0, VAR_19, VAR_20, VAR_21;
 u32 VAR_22, VAR_23, VAR_24;

 VAR_17 = VAR_14->dma_dev;

 switch (VAR_14->id) {
 case 129:
  VAR_16 = VAR_11;
  VAR_21 = FUNC_0(VAR_11);
  VAR_14->addr.iram_offset = VAR_3;
  VAR_14->addr.dsp_iram_offset = VAR_2;
  VAR_14->addr.dsp_dram_offset = VAR_1;
  VAR_14->addr.shim_offset = VAR_4;
  break;
 case 128:
  VAR_16 = VAR_13;
  VAR_21 = FUNC_0(VAR_13);
  VAR_14->addr.iram_offset = VAR_9;
  VAR_14->addr.dsp_iram_offset = VAR_8;
  VAR_14->addr.dsp_dram_offset = VAR_7;
  VAR_14->addr.shim_offset = VAR_10;
  break;
 default:
  FUNC_2(VAR_17, "error: failed to get mem resources\n");
  return VAR_18;
 }

 VAR_18 = FUNC_4(VAR_14, VAR_15);
 if (VAR_18 < 0) {
  FUNC_2(VAR_17, "error: failed to map resources\n");
  return VAR_18;
 }


 VAR_18 = FUNC_5(VAR_14);
 if (VAR_18 < 0) {
  FUNC_2(VAR_17, "error: failed to set DSP D0 and reset SHIM\n");
  return VAR_18;
 }

 VAR_18 = FUNC_3(VAR_17, FUNC_1(31));
 if (VAR_18)
  return VAR_18;



 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  VAR_22 = VAR_16[VAR_19].start;
  VAR_23 = (VAR_16[VAR_19].end - VAR_16[VAR_19].start) / VAR_16[VAR_19].blocks;


  for (VAR_20 = 0; VAR_20 < VAR_16[VAR_19].blocks; VAR_20++) {
   FUNC_6(VAR_14, VAR_22, VAR_23,
    VAR_16[VAR_19].type, &VAR_12, VAR_20, VAR_14);
   VAR_22 += VAR_23;
  }
 }


 VAR_24 = 1 << VAR_5;


 FUNC_7(0xffffffff & ~VAR_24, VAR_14->addr.pci_cfg + VAR_6);

 return 0;
}
