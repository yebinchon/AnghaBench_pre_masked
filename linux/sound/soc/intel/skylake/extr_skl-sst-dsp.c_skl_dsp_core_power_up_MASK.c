
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (struct sst_dsp*,int ,int,int,int ,char*) ;
 int FUNC_4 (struct sst_dsp*,int ) ;
 int FUNC_5 (struct sst_dsp*,int ,int ,int ) ;

int FUNC_6(struct sst_dsp *VAR_3, unsigned int VAR_4)
{
 int VAR_5;


 FUNC_5(VAR_3, VAR_1,
   FUNC_1(VAR_4),
   FUNC_1(VAR_4));


 VAR_5 = FUNC_3(VAR_3,
   VAR_1,
   FUNC_0(VAR_4),
   FUNC_0(VAR_4),
   VAR_2,
   "Power up");

 if ((FUNC_4(VAR_3, VAR_1) &
   FUNC_0(VAR_4)) !=
   FUNC_0(VAR_4)) {
  FUNC_2(VAR_3->dev, "DSP core power up failed: core_mask %x\n",
    VAR_4);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
