
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp_dma_desc {unsigned int size; void* next; scalar_t__ status; void* addr; } ;
struct TYPE_6__ {scalar_t__ addr; int * area; } ;
struct atiixp_dma {unsigned int period_bytes; unsigned int periods; TYPE_2__* ops; TYPE_3__ desc_buf; } ;
struct atiixp {scalar_t__ remap_addr; int reg_lock; int pci; } ;
struct TYPE_5__ {scalar_t__ llp_offset; int (* enable_dma ) (struct atiixp*,int) ;} ;
struct TYPE_4__ {scalar_t__ dma_addr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct atiixp*,int) ;
 int FUNC_6 (struct atiixp*,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct atiixp *VAR_5, struct atiixp_dma *VAR_6,
        struct snd_pcm_substream *VAR_7,
        unsigned int VAR_8,
        unsigned int VAR_9)
{
 unsigned int VAR_10;
 u32 VAR_11, VAR_12;
 unsigned long VAR_13;

 if (VAR_8 > VAR_1)
  return -VAR_3;

 if (VAR_6->desc_buf.area == ((void*)0)) {
  if (FUNC_1(VAR_4,
     FUNC_2(VAR_5->pci),
     VAR_0,
     &VAR_6->desc_buf) < 0)
   return -VAR_3;
  VAR_6->period_bytes = VAR_6->periods = 0;
 }

 if (VAR_6->periods == VAR_8 && VAR_6->period_bytes == VAR_9)
  return 0;


 FUNC_3(&VAR_5->reg_lock, VAR_13);
 FUNC_7(0, VAR_5->remap_addr + VAR_6->ops->llp_offset);
 VAR_6->ops->enable_dma(VAR_5, 0);
 VAR_6->ops->enable_dma(VAR_5, 1);
 FUNC_4(&VAR_5->reg_lock, VAR_13);


 VAR_11 = (u32)VAR_7->runtime->dma_addr;
 VAR_12 = (u32)VAR_6->desc_buf.addr;
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  struct atiixp_dma_desc *VAR_14;
  VAR_14 = &((struct atiixp_dma_desc *)VAR_6->desc_buf.area)[VAR_10];
  VAR_14->addr = FUNC_0(VAR_11);
  VAR_14->status = 0;
  VAR_14->size = VAR_9 >> 2;
  VAR_12 += sizeof(struct atiixp_dma_desc);
  if (VAR_10 == VAR_8 - 1)
   VAR_14->next = FUNC_0((u32)VAR_6->desc_buf.addr);
  else
   VAR_14->next = FUNC_0(VAR_12);
  VAR_11 += VAR_9;
 }

 FUNC_7((u32)VAR_6->desc_buf.addr | VAR_2,
        VAR_5->remap_addr + VAR_6->ops->llp_offset);

 VAR_6->period_bytes = VAR_9;
 VAR_6->periods = VAR_8;

 return 0;
}
