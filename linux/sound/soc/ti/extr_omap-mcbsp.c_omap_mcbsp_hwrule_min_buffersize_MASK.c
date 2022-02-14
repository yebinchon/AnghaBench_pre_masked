
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_hw_rule {struct omap_mcbsp* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int integer; } ;
struct omap_mcbsp {TYPE_1__* pdata; } ;
struct TYPE_2__ {int buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_interval*) ;
 int FUNC_2 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_hw_params *VAR_2,
        struct snd_pcm_hw_rule *VAR_3)
{
 struct snd_interval *VAR_4 = FUNC_0(VAR_2,
     VAR_0);
 struct snd_interval *VAR_5 = FUNC_0(VAR_2,
     VAR_1);
 struct omap_mcbsp *VAR_6 = VAR_3->private;
 struct snd_interval VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7);
 VAR_8 = VAR_6->pdata->buffer_size;

 VAR_7.min = VAR_8 / VAR_5->min;
 VAR_7.integer = 1;
 return FUNC_2(VAR_4, &VAR_7);
}
