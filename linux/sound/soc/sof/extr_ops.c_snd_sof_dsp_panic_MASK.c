
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_sof_dev {scalar_t__ dsp_oops_offset; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_sof_dev*,int) ;
 int FUNC_3 (struct snd_sof_dev*) ;

void FUNC_4(struct snd_sof_dev *VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_2->dev, "error : DSP panic!\n");






 if (!VAR_2->dsp_oops_offset)
  VAR_2->dsp_oops_offset = VAR_3;
 else
  FUNC_0(VAR_2->dev, "panic: dsp_oops_offset %zu offset %d\n",
   VAR_2->dsp_oops_offset, VAR_3);

 FUNC_2(VAR_2, VAR_1 | VAR_0);
 FUNC_3(VAR_2);
}
