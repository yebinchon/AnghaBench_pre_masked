
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; void* private_data; } ;
struct TYPE_3__ {int (* open ) (struct snd_ice1712*,struct snd_pcm_substream*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct snd_ice1712 {TYPE_2__ spdif; scalar_t__ force_pdma4; struct snd_pcm_substream* playback_con_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_ice1712*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_5 (struct snd_pcm_substream*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct snd_ice1712*,struct snd_pcm_substream*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6)
{
 struct snd_ice1712 *VAR_7 = FUNC_5(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;

 VAR_8->private_data = (void *)&VAR_5;
 VAR_7->playback_con_substream = VAR_6;
 if (VAR_7->force_pdma4) {
  VAR_8->hw = VAR_3;
  FUNC_1(VAR_7, VAR_6);
 } else
  VAR_8->hw = VAR_4;
 FUNC_4(VAR_6);
 FUNC_2(VAR_8, 0, 32, 24);
 FUNC_3(VAR_8, 0, VAR_1,
       VAR_2);
 FUNC_3(VAR_8, 0, VAR_0,
       VAR_2);
 FUNC_0(VAR_6);
 if (VAR_7->spdif.ops.open)
  VAR_7->spdif.ops.open(VAR_7, VAR_6);
 return 0;
}
