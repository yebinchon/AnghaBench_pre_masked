
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mbochs_dmabuf {struct page** pages; } ;
struct dma_buf {struct mbochs_dmabuf* priv; } ;


 void* FUNC_0 (struct page*) ;

__attribute__((used)) static void *FUNC_1(struct dma_buf *VAR_0, unsigned long VAR_1)
{
 struct mbochs_dmabuf *VAR_2 = VAR_0->priv;
 struct page *VAR_3 = VAR_2->pages[VAR_1];

 return FUNC_0(VAR_3);
}
