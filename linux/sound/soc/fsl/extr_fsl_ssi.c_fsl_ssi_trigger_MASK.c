
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct fsl_ssi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 int FUNC_0 (struct fsl_ssi*,int) ;
 int FUNC_1 (struct fsl_ssi*,int) ;
 int FUNC_2 (struct fsl_ssi*) ;
 int FUNC_3 (struct fsl_ssi*) ;
 struct fsl_ssi* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2, int VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct fsl_ssi *VAR_6 = FUNC_4(VAR_5->cpu_dai);
 bool VAR_7 = VAR_2->stream == VAR_1;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:







  if (VAR_7 && FUNC_2(VAR_6))
   FUNC_3(VAR_6);
  FUNC_1(VAR_6, VAR_7);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_0(VAR_6, VAR_7);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
