
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_4__ {scalar_t__ nr_ch; int * substream; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_3__ {int * private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_0)
{

 stream_t *VAR_1 = (stream_t *) VAR_0->runtime->private_data;


 if (VAR_1 != ((void*)0)) {
  VAR_1->substream = ((void*)0);
  VAR_1->nr_ch = 0;
 }
 VAR_0->runtime->private_data = ((void*)0);
 return 0;
}
