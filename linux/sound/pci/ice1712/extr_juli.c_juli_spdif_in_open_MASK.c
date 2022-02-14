
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_min; int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_ice1712 {int (* is_spdif_master ) (struct snd_ice1712*) ;struct juli_spec* spec; } ;
struct juli_spec {int ak4114; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_1,
    struct snd_pcm_substream *VAR_2)
{
 struct juli_spec *VAR_3 = VAR_1->spec;
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 if (VAR_2->stream == VAR_0 ||
   !VAR_1->is_spdif_master(VAR_1))
  return;
 VAR_5 = FUNC_0(VAR_3->ak4114);
 if (VAR_5 >= VAR_4->hw.rate_min && VAR_5 <= VAR_4->hw.rate_max) {
  VAR_4->hw.rate_min = VAR_5;
  VAR_4->hw.rate_max = VAR_5;
 }
}
