
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* leaf_key; TYPE_1__* internal_key; } ;
struct TYPE_15__ {scalar_t__ magic; size_t nused; int parent; } ;
struct TYPE_20__ {TYPE_4__ u; TYPE_2__ hdr; } ;
struct TYPE_19__ {int split_pages; int found; size_t index; TYPE_7__* page; } ;
struct TYPE_18__ {int btree_root; } ;
struct TYPE_16__ {size_t first_page; } ;
struct TYPE_14__ {size_t first_page; int child; } ;
typedef size_t Size ;
typedef TYPE_5__ FreePageManager ;
typedef TYPE_6__ FreePageBtreeSearchResult ;
typedef TYPE_7__ FreePageBtree ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (TYPE_7__*,size_t) ;
 size_t FUNC_2 (TYPE_7__*,size_t) ;
 char* FUNC_3 (TYPE_5__*) ;
 TYPE_7__* FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(FreePageManager *VAR_3, Size VAR_4,
     FreePageBtreeSearchResult *VAR_5)
{
 char *VAR_6 = FUNC_3(VAR_3);
 FreePageBtree *VAR_7 = FUNC_4(VAR_6, VAR_3->btree_root);
 Size VAR_8;

 VAR_5->split_pages = 1;


 if (VAR_7 == ((void*)0))
 {
  VAR_5->page = ((void*)0);
  VAR_5->found = 0;
  return;
 }


 while (VAR_7->hdr.magic == VAR_2)
 {
  FreePageBtree *VAR_9;
  bool VAR_10;

  VAR_8 = FUNC_1(VAR_7, VAR_4);
  VAR_10 = VAR_8 < VAR_7->hdr.nused &&
   VAR_7->u.internal_key[VAR_8].first_page == VAR_4;






  if (!VAR_10 && VAR_8 > 0)
   --VAR_8;


  if (VAR_7->hdr.nused >= VAR_0)
  {
   FUNC_0(VAR_7->hdr.nused == VAR_0);
   VAR_5->split_pages++;
  }
  else
   VAR_5->split_pages = 0;


  FUNC_0(VAR_8 < VAR_7->hdr.nused);
  VAR_9 = FUNC_4(VAR_6, VAR_7->u.internal_key[VAR_8].child);
  FUNC_0(FUNC_4(VAR_6, VAR_9->hdr.parent) == VAR_7);
  VAR_7 = VAR_9;
 }


 if (VAR_7->hdr.nused >= VAR_1)
 {
  FUNC_0(VAR_7->hdr.nused == VAR_0);
  VAR_5->split_pages++;
 }
 else
  VAR_5->split_pages = 0;


 VAR_8 = FUNC_2(VAR_7, VAR_4);


 VAR_5->page = VAR_7;
 VAR_5->index = VAR_8;
 VAR_5->found = VAR_8 < VAR_7->hdr.nused &&
  VAR_4 == VAR_7->u.leaf_key[VAR_8].first_page;
}
