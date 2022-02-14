
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kmem_cache {int gfporder; int allocflags; } ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct page*,int ) ;
 scalar_t__ FUNC_4 (struct page*,int ,int ,struct kmem_cache*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct kmem_cache*,int ,int) ;

__attribute__((used)) static struct page *FUNC_8(struct kmem_cache *VAR_0, gfp_t VAR_1,
        int VAR_2)
{
 struct page *VAR_3;

 VAR_1 |= VAR_0->allocflags;

 VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_0->gfporder);
 if (!VAR_3) {
  FUNC_7(VAR_0, VAR_1, VAR_2);
  return ((void*)0);
 }

 if (FUNC_4(VAR_3, VAR_1, VAR_0->gfporder, VAR_0)) {
  FUNC_3(VAR_3, VAR_0->gfporder);
  return ((void*)0);
 }

 FUNC_1(VAR_3);

 if (FUNC_6() && FUNC_5(VAR_3))
  FUNC_0(VAR_3);

 return VAR_3;
}
