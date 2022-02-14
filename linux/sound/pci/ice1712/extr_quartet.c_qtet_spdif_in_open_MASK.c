
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate_min; int rate_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct snd_ice1712 {struct qtet_spec* spec; } ;
struct qtet_spec {int ak4113; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_ice1712 *VAR_1,
  struct snd_pcm_substream *VAR_2)
{
 struct qtet_spec *VAR_3 = VAR_1->spec;
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 if (FUNC_0(VAR_1) != VAR_0)

  return;

 VAR_5 = FUNC_1(VAR_3->ak4113);
 if (VAR_5 >= VAR_4->hw.rate_min && VAR_5 <= VAR_4->hw.rate_max) {
  VAR_4->hw.rate_min = VAR_5;
  VAR_4->hw.rate_max = VAR_5;
 }
}
