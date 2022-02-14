
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int stream; } ;
struct omap_mcpdm {int mutex; scalar_t__* latency; int pm_qos_req; TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ link_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct omap_mcpdm*) ;
 int FUNC_3 (struct omap_mcpdm*) ;
 int FUNC_4 (struct omap_mcpdm*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 struct omap_mcpdm* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_8(struct snd_pcm_substream *VAR_2,
      struct snd_soc_dai *VAR_3)
{
 struct omap_mcpdm *VAR_4 = FUNC_7(VAR_3);
 int VAR_5 = (VAR_2->stream == VAR_1);
 int VAR_6 = VAR_5 ? VAR_1 : VAR_0;
 int VAR_7 = VAR_5 ? VAR_0 : VAR_1;

 FUNC_0(&VAR_4->mutex);

 if (!VAR_3->active) {
  if (FUNC_2(VAR_4)) {
   FUNC_4(VAR_4);
   FUNC_3(VAR_4);
   VAR_4->config[0].link_mask = 0;
   VAR_4->config[1].link_mask = 0;
  }
 }

 if (VAR_4->latency[VAR_7])
  FUNC_6(&VAR_4->pm_qos_req,
          VAR_4->latency[VAR_7]);
 else if (VAR_4->latency[VAR_6])
  FUNC_5(&VAR_4->pm_qos_req);

 VAR_4->latency[VAR_6] = 0;

 FUNC_1(&VAR_4->mutex);
}
