
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_pool {int dummy; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 struct page* FUNC_0 (struct page_pool*,int ) ;
 struct page* FUNC_1 (struct page_pool*) ;

struct page *FUNC_2(struct page_pool *VAR_0, gfp_t VAR_1)
{
 struct page *VAR_2;


 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2;
}
