
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_pdata {int dummy; } ;
struct TYPE_2__ {int shim_offset; int dram_offset; int iram_offset; } ;
struct sst_dsp {int id; int dma_dev; TYPE_1__ addr; struct device* dev; } ;
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
 struct sst_adsp_memregion* VAR_6 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sst_dsp*,struct sst_pdata*) ;
 int FUNC_5 (struct sst_dsp*,int ,int,int) ;
 int FUNC_6 (struct sst_dsp*,int,int,int ,int *,int,struct sst_dsp*) ;

__attribute__((used)) static int FUNC_7(struct sst_dsp *VAR_7, struct sst_pdata *VAR_8)
{
 const struct sst_adsp_memregion *VAR_9;
 struct device *VAR_10;
 int VAR_11 = -VAR_0, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 VAR_10 = VAR_7->dev;

 switch (VAR_7->id) {
 case 128:
  VAR_9 = VAR_6;
  VAR_14 = FUNC_0(VAR_6);
  VAR_7->addr.iram_offset = VAR_2;
  VAR_7->addr.dram_offset = VAR_1;
  VAR_7->addr.shim_offset = VAR_3;
  break;
 default:
  FUNC_2(VAR_10, "failed to get mem resources\n");
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_7, VAR_8);
 if (VAR_11 < 0) {
  FUNC_2(VAR_10, "failed to map resources\n");
  return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_7->dma_dev, FUNC_1(32));
 if (VAR_11)
  return VAR_11;


 FUNC_5(VAR_7, VAR_5, 0x3, 0x0);
 FUNC_5(VAR_7, VAR_4, 0x3, 0x0);


 for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++) {
  VAR_15 = VAR_9[VAR_12].start;
  VAR_16 = (VAR_9[VAR_12].end - VAR_9[VAR_12].start) / VAR_9[VAR_12].blocks;


  for (VAR_13 = 0; VAR_13 < VAR_9[VAR_12].blocks; VAR_13++) {
   FUNC_6(VAR_7, VAR_15, VAR_16,
            VAR_9[VAR_12].type, ((void*)0), VAR_13, VAR_7);
   VAR_15 += VAR_16;
  }
 }

 return 0;
}
