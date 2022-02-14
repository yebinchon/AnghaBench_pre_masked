
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int integer; int max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_5 (struct snd_interval const*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_hw_params *VAR_6,
   struct snd_pcm_hw_rule *VAR_7)
{
 struct snd_interval *VAR_8 =
  FUNC_0(VAR_6, VAR_1);
 const struct snd_interval *VAR_9 =
  FUNC_1(VAR_6, VAR_0);
 struct snd_interval VAR_10 = {
  .min = VAR_3, .max = 0, .integer = 1,
 };
 unsigned int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!FUNC_5(VAR_9,
           VAR_4[VAR_11]))
   continue;

  VAR_10.min = FUNC_3(VAR_10.min, VAR_5[VAR_11]);
  VAR_10.max = FUNC_2(VAR_10.max, VAR_5[VAR_11]);
 }

 return FUNC_4(VAR_8, &VAR_10);
}
