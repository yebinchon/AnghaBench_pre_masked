
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_dsp {struct sst_dma* dma; } ;
struct sst_dma {int * ch; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sst_dsp *VAR_0)
{
 struct sst_dma *VAR_1 = VAR_0->dma;

 if (!VAR_1->ch)
  return;

 FUNC_0(VAR_1->ch);
 VAR_1->ch = ((void*)0);
}
