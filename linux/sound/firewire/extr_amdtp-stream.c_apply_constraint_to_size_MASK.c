
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int integer; int max; int min; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_6 (struct snd_interval const*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_4,
        struct snd_pcm_hw_rule *VAR_5)
{
 struct snd_interval *VAR_6 = FUNC_0(VAR_4, VAR_5->var);
 const struct snd_interval *VAR_7 =
  FUNC_1(VAR_4, VAR_1);
 struct snd_interval VAR_8 = {0};
 unsigned int VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
  if (FUNC_6(VAR_7, VAR_2[VAR_10]))
   VAR_9 = FUNC_2(VAR_9, VAR_3[VAR_10]);
 }

 VAR_8.min = FUNC_4(VAR_6->min, VAR_9);
 VAR_8.max = FUNC_3(VAR_6->max, VAR_9);
 VAR_8.integer = 1;

 return FUNC_5(VAR_6, &VAR_8);
}
