
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_frag_cache {void* va; unsigned int size; unsigned int offset; void* pagecnt_bias; int pfmemalloc; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 void* VAR_0 ;
 unsigned int VAR_1 ;
 struct page* FUNC_0 (struct page_frag_cache*,int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,void*) ;
 int FUNC_3 (struct page*,void*) ;
 int FUNC_4 (struct page*,void*) ;
 scalar_t__ FUNC_5 (int) ;
 struct page* FUNC_6 (void*) ;

void *FUNC_7(struct page_frag_cache *VAR_2,
        unsigned int VAR_3, gfp_t VAR_4)
{
 unsigned int VAR_5 = VAR_1;
 struct page *VAR_6;
 int VAR_7;

 if (FUNC_5(!VAR_2->va)) {
refill:
  VAR_6 = FUNC_0(VAR_2, VAR_4);
  if (!VAR_6)
   return ((void*)0);
  FUNC_2(VAR_6, VAR_0);


  VAR_2->pfmemalloc = FUNC_1(VAR_6);
  VAR_2->pagecnt_bias = VAR_0 + 1;
  VAR_2->offset = VAR_5;
 }

 VAR_7 = VAR_2->offset - VAR_3;
 if (FUNC_5(VAR_7 < 0)) {
  VAR_6 = FUNC_6(VAR_2->va);

  if (!FUNC_3(VAR_6, VAR_2->pagecnt_bias))
   goto refill;






  FUNC_4(VAR_6, VAR_0 + 1);


  VAR_2->pagecnt_bias = VAR_0 + 1;
  VAR_7 = VAR_5 - VAR_3;
 }

 VAR_2->pagecnt_bias--;
 VAR_2->offset = VAR_7;

 return VAR_2->va + VAR_7;
}
