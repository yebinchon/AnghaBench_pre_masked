
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_3__ {int (* close ) (struct snd_ice1712*,struct snd_pcm_substream*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct snd_ice1712 {TYPE_2__ spdif; int * capture_con_substream; int pro_rate_default; } ;


 scalar_t__ VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_ice1712*,int ,int ) ;
 int FUNC_2 (struct snd_ice1712*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_0(VAR_1);

 if (VAR_0)
  FUNC_1(VAR_2, VAR_2->pro_rate_default, 0);
 VAR_2->capture_con_substream = ((void*)0);
 if (VAR_2->spdif.ops.close)
  VAR_2->spdif.ops.close(VAR_2, VAR_1);

 return 0;
}
