
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int relptr_off; } ;
struct TYPE_15__ {size_t btree_depth; int * freelist; int btree_recycle; int singleton_npages; int singleton_first_page; int btree_root; int contiguous_pages; TYPE_1__ self; } ;
struct TYPE_14__ {char* data; } ;
typedef TYPE_2__ StringInfoData ;
typedef size_t Size ;
typedef int FreePageSpanLeader ;
typedef TYPE_3__ FreePageManager ;
typedef int FreePageBtree ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,int *,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,int *,size_t,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,size_t,...) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 char* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

char *
FUNC_8(FreePageManager *VAR_1)
{
 char *VAR_2 = FUNC_4(VAR_1);
 StringInfoData VAR_3;
 FreePageSpanLeader *VAR_4;
 bool VAR_5 = 0;
 Size VAR_6;


 FUNC_5(&VAR_3);


 FUNC_2(&VAR_3, "metadata: self %zu max contiguous pages = %zu\n",
      VAR_1->self.relptr_off, VAR_1->contiguous_pages);


 if (VAR_1->btree_depth > 0)
 {
  FreePageBtree *VAR_7;

  FUNC_2(&VAR_3, "btree depth %u:\n", VAR_1->btree_depth);
  VAR_7 = FUNC_6(VAR_2, VAR_1->btree_root);
  FUNC_0(VAR_1, VAR_7, ((void*)0), 0, &VAR_3);
 }
 else if (VAR_1->singleton_npages > 0)
 {
  FUNC_2(&VAR_3, "singleton: %zu(%zu)\n",
       VAR_1->singleton_first_page, VAR_1->singleton_npages);
 }


 VAR_4 = FUNC_6(VAR_2, VAR_1->btree_recycle);
 if (VAR_4 != ((void*)0))
 {
  FUNC_3(&VAR_3, "btree recycle:");
  FUNC_1(VAR_1, VAR_4, 1, &VAR_3);
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
 {
  FreePageSpanLeader *VAR_8;

  if (FUNC_7(VAR_1->freelist[VAR_6]))
   continue;
  if (!VAR_5)
  {
   FUNC_3(&VAR_3, "freelists:\n");
   VAR_5 = 1;
  }
  FUNC_2(&VAR_3, "  %zu:", VAR_6 + 1);
  VAR_8 = FUNC_6(VAR_2, VAR_1->freelist[VAR_6]);
  FUNC_1(VAR_1, VAR_8, VAR_6 + 1, &VAR_3);
 }


 return VAR_3.data;
}
