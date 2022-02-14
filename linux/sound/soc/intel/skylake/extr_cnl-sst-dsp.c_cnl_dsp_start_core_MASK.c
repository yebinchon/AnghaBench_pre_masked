
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sst_dsp*,unsigned int) ;
 int FUNC_2 (struct sst_dsp*,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (struct sst_dsp*,unsigned int) ;
 int FUNC_5 (struct sst_dsp*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sst_dsp *VAR_2, unsigned int VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_5(VAR_2, VAR_0,
    FUNC_0(VAR_3), 0);

 if (!FUNC_4(VAR_2, VAR_3)) {
  FUNC_2(VAR_2, VAR_3);
  FUNC_3(VAR_2->dev, "DSP core mask %#x enable failed\n",
   VAR_3);
  VAR_4 = -VAR_1;
 }

 return VAR_4;
}
