
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; int dev; } ;
struct TYPE_10__ {TYPE_4__ dev; } ;
struct snd_pcm_substream {TYPE_5__ dma_buffer; TYPE_3__* ops; TYPE_2__* runtime; } ;
struct TYPE_8__ {scalar_t__ mmap; } ;
struct TYPE_6__ {int info; } ;
struct TYPE_7__ {TYPE_1__ hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct snd_pcm_substream *VAR_2)
{
 if (!(VAR_2->runtime->hw.info & VAR_1))
  return 0;

 if (VAR_2->ops->mmap ||
     VAR_2->dma_buffer.dev.type != VAR_0)
  return 1;

 return FUNC_0(VAR_2->dma_buffer.dev.dev);
}
