
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int contiguous_pages_dirty; int * freelist; scalar_t__ free_pages; scalar_t__ contiguous_pages; scalar_t__ singleton_npages; scalar_t__ singleton_first_page; scalar_t__ btree_recycle_count; scalar_t__ btree_depth; int btree_recycle; int btree_root; int self; } ;
typedef size_t Size ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef TYPE_1__ FreePageManager ;
typedef TYPE_1__ FreePageBtree ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,TYPE_1__*) ;

void
FUNC_1(FreePageManager *VAR_1, char *VAR_2)
{
 Size VAR_3;

 FUNC_0(VAR_2, VAR_1->self, VAR_1);
 FUNC_0(VAR_2, VAR_1->btree_root, (FreePageBtree *) ((void*)0));
 FUNC_0(VAR_2, VAR_1->btree_recycle, (FreePageSpanLeader *) ((void*)0));
 VAR_1->btree_depth = 0;
 VAR_1->btree_recycle_count = 0;
 VAR_1->singleton_first_page = 0;
 VAR_1->singleton_npages = 0;
 VAR_1->contiguous_pages = 0;
 VAR_1->contiguous_pages_dirty = 1;




 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, VAR_1->freelist[VAR_3], (FreePageSpanLeader *) ((void*)0));
}
