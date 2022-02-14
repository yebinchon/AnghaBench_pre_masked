
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_private {size_t current_link; int dma_buf_next; int dma_buf_end; int dma_buf_phys; scalar_t__ period_size; TYPE_1__* substream; struct fsl_dma_link_descriptor* link; } ;
struct fsl_dma_link_descriptor {void* dest_attr; void* dest_addr; void* source_attr; void* source_addr; } ;
struct TYPE_2__ {scalar_t__ stream; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct fsl_dma_private *VAR_3)
{
 struct fsl_dma_link_descriptor *VAR_4 =
  &VAR_3->link[VAR_3->current_link];





 if (VAR_3->substream->stream == VAR_2) {
  VAR_4->source_addr = FUNC_0(VAR_3->dma_buf_next);




 } else {
  VAR_4->dest_addr = FUNC_0(VAR_3->dma_buf_next);




 }


 VAR_3->dma_buf_next += VAR_3->period_size;

 if (VAR_3->dma_buf_next >= VAR_3->dma_buf_end)
  VAR_3->dma_buf_next = VAR_3->dma_buf_phys;

 if (++VAR_3->current_link >= VAR_1)
  VAR_3->current_link = 0;
}
