
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct davinci_vcif_dev {struct davinci_vc* davinci_vc; } ;
struct davinci_vc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 struct davinci_vcif_dev* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 struct davinci_vcif_dev *VAR_6 =
   FUNC_2(VAR_5->cpu_dai);
 struct davinci_vc *VAR_7 = VAR_6->davinci_vc;
 u32 VAR_8;


 VAR_8 = FUNC_1(VAR_7->base + VAR_0);
 if (VAR_4->stream == VAR_3)
  FUNC_0(VAR_8, VAR_2, 1);
 else
  FUNC_0(VAR_8, VAR_1, 1);

 FUNC_3(VAR_8, VAR_7->base + VAR_0);
}
