
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sst_dsp*) ;

__attribute__((used)) static int FUNC_2(struct sst_dsp *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->dev, "HSW_PM dsp runtime resume\n");

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 FUNC_0(VAR_0->dev, "HSW_PM dsp runtime resume exit\n");

 return 0;
}
