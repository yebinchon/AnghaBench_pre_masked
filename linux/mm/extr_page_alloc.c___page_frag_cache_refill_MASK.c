
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_frag_cache {int * va; int size; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct page* FUNC_0 (int ,int,int ) ;
 int * FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct page *FUNC_3(struct page_frag_cache *VAR_8,
          gfp_t VAR_9)
{
 struct page *VAR_10 = ((void*)0);
 gfp_t VAR_11 = VAR_9;
 if (FUNC_2(!VAR_10))
  VAR_10 = FUNC_0(VAR_0, VAR_11, 0);

 VAR_8->va = VAR_10 ? FUNC_1(VAR_10) : ((void*)0);

 return VAR_10;
}
