
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_fw {int dmable_fw_paddr; scalar_t__ dma_buf; int size; int list; struct sst_dsp* dsp; } ;
struct sst_dsp {int dma_dev; int mutex; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct sst_fw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct sst_fw *VAR_0)
{
 struct sst_dsp *VAR_1 = VAR_0->dsp;

 FUNC_3(&VAR_1->mutex);
 FUNC_2(&VAR_0->list);
 FUNC_4(&VAR_1->mutex);

 if (VAR_0->dma_buf)
  FUNC_0(VAR_1->dma_dev, VAR_0->size, VAR_0->dma_buf,
   VAR_0->dmable_fw_paddr);
 FUNC_1(VAR_0);
}
