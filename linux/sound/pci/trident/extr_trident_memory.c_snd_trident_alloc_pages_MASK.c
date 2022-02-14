
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_util_memblk {int dummy; } ;
struct snd_trident {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct snd_pcm_substream {TYPE_2__ dma_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_util_memblk* FUNC_1 (struct snd_trident*,struct snd_pcm_substream*) ;
 struct snd_util_memblk* FUNC_2 (struct snd_trident*,struct snd_pcm_substream*) ;

struct snd_util_memblk *
FUNC_3(struct snd_trident *VAR_1,
   struct snd_pcm_substream *VAR_2)
{
 if (FUNC_0(!VAR_1 || !VAR_2))
  return ((void*)0);
 if (VAR_2->dma_buffer.dev.type == VAR_0)
  return FUNC_2(VAR_1, VAR_2);
 else
  return FUNC_1(VAR_1, VAR_2);
}
