
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sst_dsp*,unsigned int) ;
 int FUNC_1 (struct sst_dsp*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_3 (struct sst_dsp*,unsigned int) ;

int FUNC_4(struct sst_dsp *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_1->dev, "DSP core mask %#x reset failed\n",
   VAR_2);
  return VAR_3;
 }


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_1->dev, "DSP core mask %#x power down failed\n",
   VAR_2);
  return VAR_3;
 }

 if (FUNC_3(VAR_1, VAR_2)) {
  FUNC_2(VAR_1->dev, "DSP core mask %#x disable failed\n",
   VAR_2);
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
