
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct sst_dsp*,int ) ;
 int FUNC_2 (struct sst_dsp*,int ) ;
 int FUNC_3 (struct sst_dsp*,int ) ;
 int FUNC_4 (struct sst_dsp*,int ) ;
 int FUNC_5 (struct sst_dsp*,int ) ;

int FUNC_6(struct sst_dsp *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_1, VAR_0)) {
  VAR_2 = FUNC_4(VAR_1, VAR_0);
  if (VAR_2 < 0) {
   FUNC_0(VAR_1->dev, "dsp core0 reset fail: %d\n", VAR_2);
   return VAR_2;
  }

  VAR_2 = FUNC_5(VAR_1, VAR_0);
  if (VAR_2 < 0) {
   FUNC_0(VAR_1->dev, "dsp core0 start fail: %d\n", VAR_2);
   return VAR_2;
  }
 } else {
  VAR_2 = FUNC_2(VAR_1, VAR_0);
  if (VAR_2 < 0) {
   FUNC_0(VAR_1->dev, "dsp core0 disable fail: %d\n", VAR_2);
   return VAR_2;
  }
  VAR_2 = FUNC_3(VAR_1, VAR_0);
 }

 return VAR_2;
}
