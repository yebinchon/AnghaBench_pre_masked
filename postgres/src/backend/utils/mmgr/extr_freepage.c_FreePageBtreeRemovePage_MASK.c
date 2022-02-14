
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int nused; scalar_t__ magic; int parent; } ;
struct TYPE_19__ {int * internal_key; int * leaf_key; } ;
struct TYPE_22__ {TYPE_2__ hdr; TYPE_1__ u; } ;
struct TYPE_21__ {scalar_t__ singleton_first_page; scalar_t__ singleton_npages; scalar_t__ btree_depth; int btree_root; } ;
typedef int Size ;
typedef TYPE_3__ FreePageManager ;
typedef int FreePageBtreeLeafKey ;
typedef int FreePageBtreeInternalKey ;
typedef TYPE_4__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (char*,TYPE_4__*) ;
 char* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,int *,int) ;
 TYPE_4__* FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_12(FreePageManager *VAR_1, FreePageBtree *VAR_2)
{
 char *VAR_3 = FUNC_8(VAR_1);
 FreePageBtree *VAR_4;
 Size VAR_5;
 Size VAR_6;

 for (;;)
 {

  VAR_4 = FUNC_10(VAR_3, VAR_2->hdr.parent);
  if (VAR_4 == ((void*)0))
  {

   FUNC_11(VAR_3, VAR_1->btree_root, (FreePageBtree *) ((void*)0));
   VAR_1->btree_depth = 0;
   FUNC_0(VAR_1->singleton_first_page == 0);
   FUNC_0(VAR_1->singleton_npages == 0);
   return;
  }




  if (VAR_4->hdr.nused > 1)
   break;
  FUNC_4(VAR_1, FUNC_7(VAR_3, VAR_2));
  VAR_2 = VAR_4;
 }


 VAR_6 = FUNC_3(VAR_2);
 if (VAR_4->hdr.magic == VAR_0)
 {
  VAR_5 = FUNC_6(VAR_4, VAR_6);
  FUNC_0(VAR_5 < VAR_4->hdr.nused);
  if (VAR_5 < VAR_4->hdr.nused - 1)
   FUNC_9(&VAR_4->u.leaf_key[VAR_5],
     &VAR_4->u.leaf_key[VAR_5 + 1],
     sizeof(FreePageBtreeLeafKey)
     * (VAR_4->hdr.nused - VAR_5 - 1));
 }
 else
 {
  VAR_5 = FUNC_5(VAR_4, VAR_6);
  FUNC_0(VAR_5 < VAR_4->hdr.nused);
  if (VAR_5 < VAR_4->hdr.nused - 1)
   FUNC_9(&VAR_4->u.internal_key[VAR_5],
     &VAR_4->u.internal_key[VAR_5 + 1],
     sizeof(FreePageBtreeInternalKey)
     * (VAR_4->hdr.nused - VAR_5 - 1));
 }
 VAR_4->hdr.nused--;
 FUNC_0(VAR_4->hdr.nused > 0);


 FUNC_4(VAR_1, FUNC_7(VAR_3, VAR_2));


 if (VAR_5 == 0)
  FUNC_1(VAR_1, VAR_4);


 FUNC_2(VAR_1, VAR_4);
}
