
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {TYPE_3__* leaf_key; TYPE_1__* internal_key; } ;
struct TYPE_19__ {int nused; scalar_t__ magic; int parent; } ;
struct TYPE_23__ {TYPE_4__ u; TYPE_2__ hdr; } ;
struct TYPE_22__ {scalar_t__ btree_depth; scalar_t__ singleton_first_page; scalar_t__ singleton_npages; scalar_t__ btree_recycle_count; int btree_root; } ;
struct TYPE_20__ {scalar_t__ first_page; scalar_t__ npages; } ;
struct TYPE_18__ {int child; } ;
typedef scalar_t__ Size ;
typedef TYPE_5__ FreePageManager ;
typedef TYPE_6__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_5__*,scalar_t__,int,int) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (char*,TYPE_6__*) ;
 char* FUNC_7 (TYPE_5__*) ;
 TYPE_6__* FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,TYPE_6__*) ;

__attribute__((used)) static Size
FUNC_12(FreePageManager *VAR_2)
{
 char *VAR_3 = FUNC_7(VAR_2);
 Size VAR_4 = 0;


 while (!FUNC_10(VAR_2->btree_root))
 {
  FreePageBtree *VAR_5 = FUNC_8(VAR_3, VAR_2->btree_root);


  if (VAR_5->hdr.nused == 1)
  {

   FUNC_0(VAR_2->btree_depth > 0);
   --VAR_2->btree_depth;
   if (VAR_5->hdr.magic == VAR_1)
   {

    FUNC_11(VAR_3, VAR_2->btree_root, (FreePageBtree *) ((void*)0));
    VAR_2->singleton_first_page = VAR_5->u.leaf_key[0].first_page;
    VAR_2->singleton_npages = VAR_5->u.leaf_key[0].npages;
   }
   else
   {
    FreePageBtree *VAR_6;


    FUNC_0(VAR_5->hdr.magic == VAR_0);
    FUNC_9(VAR_2->btree_root, VAR_5->u.internal_key[0].child);
    VAR_6 = FUNC_8(VAR_3, VAR_2->btree_root);
    FUNC_11(VAR_3, VAR_6->hdr.parent, (FreePageBtree *) ((void*)0));
   }
   FUNC_2(VAR_2, FUNC_6(VAR_3, VAR_5));
  }
  else if (VAR_5->hdr.nused == 2 &&
     VAR_5->hdr.magic == VAR_1)
  {
   Size VAR_7;
   Size VAR_8;

   VAR_7 = VAR_5->u.leaf_key[0].first_page +
    VAR_5->u.leaf_key[0].npages;
   VAR_8 = VAR_5->u.leaf_key[1].first_page;

   if (VAR_7 + 1 == VAR_8)
   {
    Size VAR_9 = FUNC_6(VAR_3, VAR_5);

    if (VAR_7 == VAR_9)
    {
     FUNC_4(VAR_2, VAR_5->u.leaf_key[0].first_page);
     FUNC_4(VAR_2, VAR_5->u.leaf_key[1].first_page);
     VAR_2->singleton_first_page = VAR_5->u.leaf_key[0].first_page;
     VAR_2->singleton_npages = VAR_5->u.leaf_key[0].npages +
      VAR_5->u.leaf_key[1].npages + 1;
     VAR_2->btree_depth = 0;
     FUNC_11(VAR_3, VAR_2->btree_root,
         (FreePageBtree *) ((void*)0));
     FUNC_5(VAR_2, VAR_2->singleton_first_page,
             VAR_2->singleton_npages);
     FUNC_0(VAR_4 == 0);
     VAR_4 = VAR_2->singleton_npages;
    }
   }


   break;
  }
  else
  {

   break;
  }
 }
 while (VAR_2->btree_recycle_count > 0)
 {
  FreePageBtree *VAR_10;
  Size VAR_11;
  Size VAR_12;

  VAR_10 = FUNC_1(VAR_2);
  VAR_11 = FUNC_6(VAR_3, VAR_10);
  VAR_12 = FUNC_3(VAR_2, VAR_11, 1, 1);
  if (VAR_12 == 0)
  {
   FUNC_2(VAR_2, VAR_11);
   break;
  }
  else
  {
   if (VAR_12 > VAR_4)
    VAR_4 = VAR_12;
  }
 }

 return VAR_4;
}
