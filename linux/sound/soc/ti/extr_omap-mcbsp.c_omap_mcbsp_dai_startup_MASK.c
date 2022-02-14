
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct omap_mcbsp {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct omap_mcbsp*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ,struct omap_mcbsp*,int ,int) ;
 struct omap_mcbsp* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
      struct snd_soc_dai *VAR_6)
{
 struct omap_mcbsp *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = 0;

 if (!VAR_6->active)
  VAR_8 = FUNC_0(VAR_7);
 if (VAR_7->pdata->buffer_size) {





  if (VAR_5->stream == VAR_3)
   FUNC_2(VAR_5->runtime, 0,
         VAR_0,
         VAR_4,
         VAR_7,
         VAR_1, -1);


  FUNC_1(VAR_5->runtime, 0,
        VAR_2, 2);
 }

 return VAR_8;
}
