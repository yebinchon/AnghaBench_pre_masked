
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int order; int dma_dir; int dev; } ;
struct page_pool {int pages_state_release_cnt; TYPE_1__ p; } ;
struct page {scalar_t__ dma_addr; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int,int ,int ) ;
 int FUNC_3 (struct page_pool*,struct page*,int ) ;

__attribute__((used)) static void FUNC_4(struct page_pool *VAR_3,
       struct page *VAR_4)
{
 dma_addr_t VAR_5;

 if (!(VAR_3->p.flags & VAR_2))
  goto skip_dma_unmap;

 VAR_5 = VAR_4->dma_addr;

 FUNC_2(VAR_3->p.dev, VAR_5,
        VAR_1 << VAR_3->p.order, VAR_3->p.dma_dir,
        VAR_0);
 VAR_4->dma_addr = 0;
skip_dma_unmap:
 FUNC_0(&VAR_3->pages_state_release_cnt);
 FUNC_3(VAR_3, VAR_4,
         FUNC_1(&VAR_3->pages_state_release_cnt));
}
