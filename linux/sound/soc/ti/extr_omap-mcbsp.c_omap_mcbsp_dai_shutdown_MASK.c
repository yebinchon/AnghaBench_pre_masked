
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int stream; } ;
struct omap_mcbsp {scalar_t__ configured; scalar_t__* latency; int pm_qos_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_mcbsp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct omap_mcbsp* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_2,
        struct snd_soc_dai *VAR_3)
{
 struct omap_mcbsp *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = (VAR_2->stream == VAR_1);
 int VAR_6 = VAR_5 ? VAR_1 : VAR_0;
 int VAR_7 = VAR_5 ? VAR_0 : VAR_1;

 if (VAR_4->latency[VAR_7])
  FUNC_2(&VAR_4->pm_qos_req,
          VAR_4->latency[VAR_7]);
 else if (VAR_4->latency[VAR_6])
  FUNC_1(&VAR_4->pm_qos_req);

 VAR_4->latency[VAR_6] = 0;

 if (!VAR_3->active) {
  FUNC_0(VAR_4);
  VAR_4->configured = 0;
 }
}
