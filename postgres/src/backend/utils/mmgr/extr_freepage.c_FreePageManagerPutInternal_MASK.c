
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


struct TYPE_37__ {int nused; int parent; int magic; } ;
struct TYPE_36__ {TYPE_1__* internal_key; TYPE_6__* leaf_key; } ;
struct TYPE_41__ {TYPE_3__ hdr; TYPE_2__ u; } ;
struct TYPE_40__ {scalar_t__ first_page; scalar_t__ npages; } ;
struct TYPE_39__ {int index; scalar_t__ split_pages; TYPE_7__* page; int found; } ;
struct TYPE_38__ {int btree_depth; scalar_t__ singleton_npages; scalar_t__ singleton_first_page; scalar_t__ btree_recycle_count; int btree_root; int btree_recycle; } ;
struct TYPE_35__ {scalar_t__ first_page; int child; } ;
typedef scalar_t__ Size ;
typedef TYPE_4__ FreePageManager ;
typedef TYPE_5__ FreePageBtreeSearchResult ;
typedef TYPE_6__ FreePageBtreeLeafKey ;
typedef TYPE_7__ FreePageBtree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,TYPE_7__*) ;
 TYPE_7__* FUNC_2 (char*,TYPE_7__*) ;
 void* FUNC_3 (TYPE_7__*) ;
 TYPE_7__* FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,TYPE_7__*,scalar_t__,scalar_t__,TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,TYPE_7__*,scalar_t__) ;
 int FUNC_9 (TYPE_4__*,scalar_t__,TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_7__*,scalar_t__) ;
 TYPE_7__* FUNC_12 (TYPE_4__*,TYPE_7__*) ;
 scalar_t__ FUNC_13 (TYPE_4__*,int,scalar_t__*) ;
 int FUNC_14 (TYPE_4__*,scalar_t__) ;
 int FUNC_15 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int FUNC_16 (int ,char*) ;
 scalar_t__ FUNC_17 (char*,scalar_t__) ;
 char* FUNC_18 (TYPE_4__*) ;
 TYPE_7__* FUNC_19 (char*,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*,int ,TYPE_7__*) ;

__attribute__((used)) static Size
FUNC_22(FreePageManager *VAR_5, Size VAR_6, Size VAR_7,
         bool VAR_8)
{
 char *VAR_9 = FUNC_18(VAR_5);
 FreePageBtreeSearchResult VAR_10;
 FreePageBtreeLeafKey *VAR_11 = ((void*)0);
 FreePageBtreeLeafKey *VAR_12 = ((void*)0);
 FreePageBtree *VAR_13;
 Size VAR_14;

 FUNC_0(VAR_7 > 0);


 if (VAR_5->btree_depth == 0)
 {
  if (VAR_5->singleton_npages == 0)
  {

   VAR_5->singleton_first_page = VAR_6;
   VAR_5->singleton_npages = VAR_7;
   FUNC_15(VAR_5, VAR_6, VAR_7);
   return VAR_5->singleton_npages;
  }
  else if (VAR_5->singleton_first_page + VAR_5->singleton_npages ==
     VAR_6)
  {

   VAR_5->singleton_npages += VAR_7;
   FUNC_14(VAR_5, VAR_5->singleton_first_page);
   FUNC_15(VAR_5, VAR_5->singleton_first_page,
           VAR_5->singleton_npages);
   return VAR_5->singleton_npages;
  }
  else if (VAR_6 + VAR_7 == VAR_5->singleton_first_page)
  {

   FUNC_14(VAR_5, VAR_5->singleton_first_page);
   VAR_5->singleton_first_page = VAR_6;
   VAR_5->singleton_npages += VAR_7;
   FUNC_15(VAR_5, VAR_5->singleton_first_page,
           VAR_5->singleton_npages);
   return VAR_5->singleton_npages;
  }
  else
  {

   Size VAR_15;
   FreePageBtree *VAR_16;

   if (!FUNC_20(VAR_5->btree_recycle))
    VAR_16 = FUNC_4(VAR_5);
   else if (VAR_8)
    return 0;
   else if (FUNC_13(VAR_5, 1, &VAR_15))
    VAR_16 = (FreePageBtree *) FUNC_17(VAR_9, VAR_15);
   else
   {

    FUNC_16(VAR_0, "free page manager btree is corrupt");
   }


   VAR_16->hdr.magic = VAR_4;
   VAR_16->hdr.nused = 1;
   FUNC_21(VAR_9, VAR_16->hdr.parent, (FreePageBtree *) ((void*)0));
   VAR_16->u.leaf_key[0].first_page = VAR_5->singleton_first_page;
   VAR_16->u.leaf_key[0].npages = VAR_5->singleton_npages;
   FUNC_21(VAR_9, VAR_5->btree_root, VAR_16);
   VAR_5->singleton_first_page = 0;
   VAR_5->singleton_npages = 0;
   VAR_5->btree_depth = 1;







   if (VAR_16->u.leaf_key[0].npages == 0)
   {
    VAR_16->u.leaf_key[0].first_page = VAR_6;
    VAR_16->u.leaf_key[0].npages = VAR_7;
    FUNC_15(VAR_5, VAR_6, VAR_7);
    return VAR_7;
   }


  }
 }


 FUNC_9(VAR_5, VAR_6, &VAR_10);
 FUNC_0(!VAR_10.found);
 if (VAR_10.index > 0)
  VAR_11 = &VAR_10.page->u.leaf_key[VAR_10.index - 1];
 if (VAR_10.index < VAR_10.page->hdr.nused)
 {
  VAR_13 = VAR_10.page;
  VAR_14 = VAR_10.index;
  VAR_12 = &VAR_10.page->u.leaf_key[VAR_10.index];
 }
 else
 {
  VAR_13 = FUNC_2(VAR_9, VAR_10.page);
  VAR_14 = 0;
  if (VAR_13 != ((void*)0))
   VAR_12 = &VAR_13->u.leaf_key[0];
 }


 if (VAR_11 != ((void*)0) && VAR_11->first_page + VAR_11->npages >= VAR_6)
 {
  bool VAR_17 = 0;
  Size VAR_18;

  FUNC_0(VAR_11->first_page + VAR_11->npages == VAR_6);
  VAR_11->npages = (VAR_6 - VAR_11->first_page) + VAR_7;


  if (VAR_12 != ((void*)0) &&
   VAR_11->first_page + VAR_11->npages >= VAR_12->first_page)
  {
   FUNC_0(VAR_11->first_page + VAR_11->npages ==
       VAR_12->first_page);
   VAR_11->npages = (VAR_12->first_page - VAR_11->first_page)
    + VAR_12->npages;
   FUNC_14(VAR_5, VAR_12->first_page);
   VAR_17 = 1;
  }


  FUNC_14(VAR_5, VAR_11->first_page);
  FUNC_15(VAR_5, VAR_11->first_page, VAR_11->npages);
  VAR_18 = VAR_11->npages;
  if (VAR_17)
   FUNC_8(VAR_5, VAR_13, VAR_14);

  return VAR_18;
 }


 if (VAR_12 != ((void*)0) && VAR_6 + VAR_7 >= VAR_12->first_page)
 {
  Size VAR_19;


  FUNC_0(VAR_6 + VAR_7 == VAR_12->first_page);
  VAR_19 = (VAR_12->first_page - VAR_6) + VAR_12->npages;


  FUNC_14(VAR_5, VAR_12->first_page);
  FUNC_15(VAR_5, VAR_6, VAR_19);


  VAR_12->first_page = VAR_6;
  VAR_12->npages = VAR_19;


  if (VAR_14 == 0)
   FUNC_1(VAR_5, VAR_13);

  return VAR_12->npages;
 }


 if (VAR_10.split_pages > 0)
 {
  if (VAR_8)
   return 0;


  if (VAR_10.split_pages > VAR_5->btree_recycle_count)
  {
   Size VAR_20;
   Size VAR_21;
   Size VAR_22;
   VAR_20 = VAR_10.split_pages - VAR_5->btree_recycle_count;
   for (VAR_22 = 0; VAR_22 < VAR_20; ++VAR_22)
   {
    if (!FUNC_13(VAR_5, 1, &VAR_21))
     FUNC_16(VAR_0, "free page manager btree is corrupt");
    FUNC_7(VAR_5, VAR_21);
   }
   FUNC_9(VAR_5, VAR_6, &VAR_10);
   FUNC_0(VAR_10.split_pages <= VAR_5->btree_recycle_count);
  }


  if (VAR_10.split_pages > 0)
  {
   FreePageBtree *VAR_23 = VAR_10.page;
   FreePageBtree *VAR_24 = ((void*)0);
   Size VAR_25 = VAR_6;

   for (;;)
   {
    FreePageBtree *VAR_26;
    FreePageBtree *VAR_27;


    VAR_27 = FUNC_19(VAR_9, VAR_23->hdr.parent);


    VAR_26 = FUNC_12(VAR_5, VAR_23);
    if (VAR_24 == ((void*)0))
    {
     Size VAR_28;
     FreePageBtree *VAR_29;

     VAR_29 = VAR_25 < VAR_26->u.leaf_key[0].first_page ?
      VAR_23 : VAR_26;
     VAR_28 = FUNC_11(VAR_29, VAR_25);
     FUNC_6(VAR_29, VAR_28, VAR_25, VAR_7);
     if (VAR_28 == 0 && VAR_29 == VAR_23)
      FUNC_1(VAR_5, VAR_23);
    }
    else
    {
     Size VAR_30;
     FreePageBtree *VAR_31;

     VAR_31 =
      VAR_25 < VAR_26->u.internal_key[0].first_page ?
      VAR_23 : VAR_26;
     VAR_30 = FUNC_10(VAR_31, VAR_25);
     FUNC_5(VAR_9, VAR_31, VAR_30,
            VAR_25, VAR_24);
     FUNC_21(VAR_9, VAR_24->hdr.parent, VAR_31);
     if (VAR_30 == 0 && VAR_31 == VAR_23)
      FUNC_1(VAR_5, VAR_23);
    }


    if (VAR_27 == ((void*)0))
    {
     FreePageBtree *VAR_32;

     VAR_32 = FUNC_4(VAR_5);
     VAR_32->hdr.magic = VAR_3;
     VAR_32->hdr.nused = 2;
     FUNC_21(VAR_9, VAR_32->hdr.parent,
         (FreePageBtree *) ((void*)0));
     VAR_32->u.internal_key[0].first_page =
      FUNC_3(VAR_23);
     FUNC_21(VAR_9, VAR_32->u.internal_key[0].child,
         VAR_23);
     FUNC_21(VAR_9, VAR_23->hdr.parent, VAR_32);
     VAR_32->u.internal_key[1].first_page =
      FUNC_3(VAR_26);
     FUNC_21(VAR_9, VAR_32->u.internal_key[1].child,
         VAR_26);
     FUNC_21(VAR_9, VAR_26->hdr.parent, VAR_32);
     FUNC_21(VAR_9, VAR_5->btree_root, VAR_32);
     VAR_5->btree_depth++;

     break;
    }


    VAR_25 = VAR_26->u.internal_key[0].first_page;
    if (VAR_27->hdr.nused < VAR_1)
    {
     Size VAR_33;

     VAR_33 = FUNC_10(VAR_27, VAR_25);
     FUNC_5(VAR_9, VAR_27, VAR_33,
            VAR_25, VAR_26);
     FUNC_21(VAR_9, VAR_26->hdr.parent, VAR_27);
     if (VAR_33 == 0)
      FUNC_1(VAR_5, VAR_27);
     break;
    }


    VAR_24 = VAR_26;
    VAR_23 = VAR_27;
   }





   FUNC_15(VAR_5, VAR_6, VAR_7);

   return VAR_7;
  }
 }


 FUNC_0(VAR_10.page->hdr.nused < VAR_2);
 FUNC_6(VAR_10.page, VAR_10.index, VAR_6, VAR_7);


 if (VAR_10.index == 0)
  FUNC_1(VAR_5, VAR_10.page);


 FUNC_15(VAR_5, VAR_6, VAR_7);

 return VAR_7;
}
