
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_page_iter {scalar_t__ sg_pgoffset; int __pg_advance; scalar_t__ sg; int __nents; } ;
struct sg_dma_page_iter {struct sg_page_iter base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

bool FUNC_2(struct sg_dma_page_iter *VAR_0)
{
 struct sg_page_iter *VAR_1 = &VAR_0->base;

 if (!VAR_1->__nents || !VAR_1->sg)
  return 0;

 VAR_1->sg_pgoffset += VAR_1->__pg_advance;
 VAR_1->__pg_advance = 1;

 while (VAR_1->sg_pgoffset >= FUNC_0(VAR_1->sg)) {
  VAR_1->sg_pgoffset -= FUNC_0(VAR_1->sg);
  VAR_1->sg = FUNC_1(VAR_1->sg);
  if (!--VAR_1->__nents || !VAR_1->sg)
   return 0;
 }

 return 1;
}
