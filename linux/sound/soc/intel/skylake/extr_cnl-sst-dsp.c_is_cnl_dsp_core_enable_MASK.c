
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,int,unsigned int) ;
 int FUNC_5 (struct sst_dsp*,int ) ;

__attribute__((used)) static bool FUNC_6(struct sst_dsp *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_5(VAR_1, VAR_0);

 VAR_4 = (VAR_3 & FUNC_0(VAR_2)) &&
   (VAR_3 & FUNC_3(VAR_2)) &&
   !(VAR_3 & FUNC_1(VAR_2)) &&
   !(VAR_3 & FUNC_2(VAR_2));

 FUNC_4(VAR_1->dev, "DSP core(s) enabled? %d: core_mask %#x\n",
  VAR_4, VAR_2);

 return VAR_4;
}
