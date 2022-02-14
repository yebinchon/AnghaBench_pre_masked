
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txx9aclc_dmadata {scalar_t__ frag_count; scalar_t__ dmacount; int dma_lock; int tasklet; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct txx9aclc_dmadata *VAR_1 = VAR_0;
 unsigned long VAR_2;


 FUNC_1(&VAR_1->dma_lock, VAR_2);
 if (VAR_1->frag_count >= 0) {
  VAR_1->dmacount--;
  if (!FUNC_0(VAR_1->dmacount < 0))
   FUNC_3(&VAR_1->tasklet);
 }
 FUNC_2(&VAR_1->dma_lock, VAR_2);
}
