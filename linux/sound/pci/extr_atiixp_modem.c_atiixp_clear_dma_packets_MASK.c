
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct atiixp_modem {scalar_t__ remap_addr; } ;
struct TYPE_4__ {int * area; } ;
struct atiixp_dma {TYPE_2__ desc_buf; TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ llp_offset; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atiixp_modem *VAR_0,
         struct atiixp_dma *VAR_1,
         struct snd_pcm_substream *VAR_2)
{
 if (VAR_1->desc_buf.area) {
  FUNC_1(0, VAR_0->remap_addr + VAR_1->ops->llp_offset);
  FUNC_0(&VAR_1->desc_buf);
  VAR_1->desc_buf.area = ((void*)0);
 }
}
