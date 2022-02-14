
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct sst_dsp*,unsigned int) ;
 int FUNC_2 (struct sst_dsp*,unsigned int) ;

int FUNC_3(struct sst_dsp *VAR_0, unsigned int VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "dsp core power up failed: core_mask %x\n",
       VAR_1);
  return VAR_2;
 }

 return FUNC_2(VAR_0, VAR_1);
}
