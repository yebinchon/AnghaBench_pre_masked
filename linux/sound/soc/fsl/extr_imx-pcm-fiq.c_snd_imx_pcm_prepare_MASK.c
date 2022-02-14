
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct imx_pcm_runtime_data* private_data; } ;
struct pt_regs {int ARM_r8; int ARM_r9; } ;
struct imx_pcm_runtime_data {int period; int periods; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct imx_pcm_runtime_data *VAR_3 = VAR_2->private_data;
 struct pt_regs VAR_4;

 FUNC_0(&VAR_4);
 if (VAR_1->stream == VAR_0)
  VAR_4.ARM_r8 = (VAR_3->period * VAR_3->periods - 1) << 16;
 else
  VAR_4.ARM_r9 = (VAR_3->period * VAR_3->periods - 1) << 16;

 FUNC_1(&VAR_4);

 return 0;
}
