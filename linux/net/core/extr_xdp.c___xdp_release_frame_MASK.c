
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_mem_info {int id; } ;
struct xdp_mem_allocator {int page_pool; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct page*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct xdp_mem_allocator* FUNC_3 (int ,int *,int ) ;
 struct page* FUNC_4 (void*) ;

void FUNC_5(void *VAR_2, struct xdp_mem_info *VAR_3)
{
 struct xdp_mem_allocator *VAR_4;
 struct page *VAR_5;

 FUNC_1();
 VAR_4 = FUNC_3(VAR_0, &VAR_3->id, VAR_1);
 VAR_5 = FUNC_4(VAR_2);
 if (VAR_4)
  FUNC_0(VAR_4->page_pool, VAR_5);
 FUNC_2();
}
