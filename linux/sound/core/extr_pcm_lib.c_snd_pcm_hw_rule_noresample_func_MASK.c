
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {scalar_t__ private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int dummy; } ;


 int VAR_0 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*,int,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_hw_params *VAR_1,
        struct snd_pcm_hw_rule *VAR_2)
{
 unsigned int VAR_3 = (unsigned int)(uintptr_t)VAR_2->private;
 struct snd_interval *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 return FUNC_1(VAR_4, 1, &VAR_3, 0);
}
