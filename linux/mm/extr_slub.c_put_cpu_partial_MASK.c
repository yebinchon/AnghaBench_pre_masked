
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int pobjects; int pages; struct page* next; scalar_t__ inuse; scalar_t__ objects; } ;
struct kmem_cache {int cpu_partial; TYPE_1__* cpu_slab; } ;
struct TYPE_2__ {int partial; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct kmem_cache*,int ) ;
 struct page* FUNC_5 (int ,struct page*,struct page*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct page* FUNC_7 (int ) ;
 int FUNC_8 (struct kmem_cache*,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct kmem_cache *VAR_1, struct page *VAR_2, int VAR_3)
{
}
