
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_mask*) ;
 int FUNC_3 (struct snd_mask*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_pcm_runtime *VAR_4,
 struct snd_pcm_hw_params *VAR_5)
{
 struct snd_interval *VAR_6 = FUNC_0(VAR_5,
   VAR_3);
 struct snd_interval *VAR_7 = FUNC_0(VAR_5,
   VAR_1);
 struct snd_mask *VAR_8 = FUNC_1(VAR_5, VAR_2);


 VAR_6->min = VAR_6->max = 48000;
 VAR_7->min = VAR_7->max = 2;


 FUNC_2(VAR_8);
 FUNC_3(VAR_8, VAR_0);

 return 0;
}
