
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct intel8x0 {scalar_t__ spdif_idx; } ;
struct ichdev {int pcm_open_flag; scalar_t__ ichd; TYPE_2__* pcm; } ;
struct TYPE_5__ {TYPE_1__* r; } ;
struct TYPE_4__ {int * codec; int slots; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ichdev* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct snd_pcm_substream*,int ) ;
 struct intel8x0* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_2,
      struct snd_pcm_hw_params *VAR_3)
{
 struct intel8x0 *VAR_4 = FUNC_8(VAR_2);
 struct ichdev *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = FUNC_3(VAR_3) > 48000;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_2, FUNC_1(VAR_3));
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_5->pcm_open_flag) {
  FUNC_4(VAR_5->pcm);
  VAR_5->pcm_open_flag = 0;
 }
 VAR_7 = FUNC_5(VAR_5->pcm, FUNC_3(VAR_3),
    FUNC_2(VAR_3),
    VAR_5->pcm->r[VAR_6].slots);
 if (VAR_7 >= 0) {
  VAR_5->pcm_open_flag = 1;

  if (VAR_5->ichd == VAR_1 && VAR_4->spdif_idx < 0)
   FUNC_6(VAR_5->pcm->r[0].codec[0], VAR_0,
       FUNC_3(VAR_3));
 }
 return VAR_7;
}
