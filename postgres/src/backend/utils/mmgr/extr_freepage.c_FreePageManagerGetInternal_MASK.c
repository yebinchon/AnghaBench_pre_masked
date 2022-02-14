
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_22__ {scalar_t__ npages; int first_page; } ;
struct TYPE_21__ {int found; size_t index; TYPE_14__* page; } ;
struct TYPE_20__ {size_t contiguous_pages; int contiguous_pages_dirty; size_t singleton_first_page; scalar_t__ singleton_npages; int btree_root; int * freelist; } ;
struct TYPE_19__ {size_t npages; scalar_t__ magic; int prev; int next; } ;
struct TYPE_18__ {TYPE_5__* leaf_key; } ;
struct TYPE_17__ {TYPE_1__ u; } ;
typedef size_t Size ;
typedef TYPE_2__ FreePageSpanLeader ;
typedef TYPE_3__ FreePageManager ;
typedef TYPE_4__ FreePageBtreeSearchResult ;
typedef TYPE_5__ FreePageBtreeLeafKey ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_14__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_14__*,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t,TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,size_t,size_t) ;
 size_t FUNC_5 (size_t,size_t) ;
 size_t FUNC_6 (char*,TYPE_2__*) ;
 char* FUNC_7 (TYPE_3__*) ;
 TYPE_2__* FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static bool
FUNC_11(FreePageManager *VAR_2, Size VAR_3, Size *VAR_4)
{
 char *VAR_5 = FUNC_7(VAR_2);
 FreePageSpanLeader *VAR_6 = ((void*)0);
 FreePageSpanLeader *VAR_7;
 FreePageSpanLeader *VAR_8;
 FreePageBtreeSearchResult VAR_9;
 Size VAR_10 = 0;
 Size VAR_11;
 for (VAR_11 = FUNC_5(VAR_3, VAR_0) - 1; VAR_11 < VAR_0; ++VAR_11)
 {

  if (FUNC_10(VAR_2->freelist[VAR_11]))
   continue;







  if (VAR_11 < VAR_0 - 1)
   VAR_6 = FUNC_8(VAR_5, VAR_2->freelist[VAR_11]);
  else
  {
   FreePageSpanLeader *VAR_12;

   VAR_12 = FUNC_8(VAR_5, VAR_2->freelist[VAR_11]);
   do
   {
    if (VAR_12->npages >= VAR_3 && (VAR_6 == ((void*)0) ||
             VAR_6->npages > VAR_12->npages))
    {
     VAR_6 = VAR_12;
     if (VAR_6->npages == VAR_3)
      break;
    }
    VAR_12 = FUNC_8(VAR_5, VAR_12->next);
   } while (VAR_12 != ((void*)0));
  }
  break;
 }


 if (VAR_6 == ((void*)0))
  return 0;


 FUNC_0(VAR_6->magic == VAR_1);
 VAR_7 = FUNC_8(VAR_5, VAR_6->prev);
 VAR_8 = FUNC_8(VAR_5, VAR_6->next);
 if (VAR_7 != ((void*)0))
  FUNC_9(VAR_7->next, VAR_6->next);
 else
  FUNC_9(VAR_2->freelist[VAR_11], VAR_6->next);
 if (VAR_8 != ((void*)0))
  FUNC_9(VAR_8->prev, VAR_6->prev);
 VAR_10 = FUNC_6(VAR_5, VAR_6);


 if (VAR_11 == VAR_0 - 1 &&
  VAR_6->npages == VAR_2->contiguous_pages)
 {






  VAR_2->contiguous_pages_dirty = 1;
 }
 else if (VAR_11 + 1 == VAR_2->contiguous_pages &&
    FUNC_10(VAR_2->freelist[VAR_11]))
 {






  VAR_2->contiguous_pages_dirty = 1;
 }






 if (FUNC_10(VAR_2->btree_root))
 {
  FUNC_0(VAR_10 == VAR_2->singleton_first_page);
  FUNC_0(VAR_6->npages == VAR_2->singleton_npages);
  FUNC_0(VAR_6->npages >= VAR_3);
  VAR_2->singleton_first_page += VAR_3;
  VAR_2->singleton_npages -= VAR_3;
  if (VAR_2->singleton_npages > 0)
   FUNC_4(VAR_2, VAR_2->singleton_first_page,
           VAR_2->singleton_npages);
 }
 else
 {






  FUNC_3(VAR_2, VAR_10, &VAR_9);
  FUNC_0(VAR_9.found);
  if (VAR_6->npages == VAR_3)
   FUNC_2(VAR_2, VAR_9.page, VAR_9.index);
  else
  {
   FreePageBtreeLeafKey *VAR_13;


   FUNC_0(VAR_6->npages > VAR_3);
   VAR_13 = &VAR_9.page->u.leaf_key[VAR_9.index];
   FUNC_0(VAR_13->npages == VAR_6->npages);
   VAR_13->first_page += VAR_3;
   VAR_13->npages -= VAR_3;
   if (VAR_9.index == 0)
    FUNC_1(VAR_2, VAR_9.page);


   FUNC_4(VAR_2, VAR_10 + VAR_3,
           VAR_6->npages - VAR_3);
  }
 }


 *VAR_4 = FUNC_6(VAR_5, VAR_6);
 return 1;
}
