
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int * mapping; } ;
struct kmem_cache {int gfporder; } ;
struct TYPE_4__ {TYPE_1__* reclaim_state; } ;
struct TYPE_3__ {int reclaimed_slab; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int,struct kmem_cache*) ;

__attribute__((used)) static void FUNC_7(struct kmem_cache *VAR_1, struct page *VAR_2)
{
 int VAR_3 = VAR_1->gfporder;

 FUNC_0(!FUNC_1(VAR_2));
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2);
 VAR_2->mapping = ((void*)0);

 if (VAR_0->reclaim_state)
  VAR_0->reclaim_state->reclaimed_slab += 1 << VAR_3;
 FUNC_6(VAR_2, VAR_3, VAR_1);
 FUNC_4(VAR_2, VAR_3);
}
