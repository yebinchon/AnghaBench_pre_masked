
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_3__ {struct snd_pcm_substream* substream; } ;
struct azx_dev {TYPE_1__ core; } ;
struct azx {int dummy; } ;
struct TYPE_4__ {int delay; } ;



__attribute__((used)) static int FUNC_0(struct azx *VAR_0, struct azx_dev *VAR_1,
       unsigned int VAR_2)
{
 struct snd_pcm_substream *VAR_3 = VAR_1->core.substream;


 return VAR_3->runtime->delay;
}
