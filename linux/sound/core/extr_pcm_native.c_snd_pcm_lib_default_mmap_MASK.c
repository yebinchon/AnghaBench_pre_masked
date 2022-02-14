
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int * vm_ops; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct TYPE_6__ {scalar_t__ type; int dev; } ;
struct TYPE_7__ {int addr; TYPE_2__ dev; } ;
struct snd_pcm_substream {TYPE_4__* runtime; TYPE_3__ dma_buffer; TYPE_1__* ops; } ;
struct TYPE_8__ {int dma_bytes; int dma_addr; int dma_area; } ;
struct TYPE_5__ {int page; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct vm_area_struct*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;
 int VAR_6 ;

int FUNC_4(struct snd_pcm_substream *VAR_7,
        struct vm_area_struct *VAR_8)
{
 VAR_8->vm_flags |= VAR_5 | VAR_4;
 if (FUNC_0(VAR_0) && !VAR_7->ops->page &&
     VAR_7->dma_buffer.dev.type == VAR_2)
  return FUNC_1(VAR_7->dma_buffer.dev.dev,
      VAR_8,
      VAR_7->runtime->dma_area,
      VAR_7->runtime->dma_addr,
      VAR_7->runtime->dma_bytes);


 VAR_8->vm_ops = &VAR_6;
 return 0;
}
