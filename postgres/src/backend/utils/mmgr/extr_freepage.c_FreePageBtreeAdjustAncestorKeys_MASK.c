
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* internal_key; TYPE_1__* leaf_key; } ;
struct TYPE_10__ {scalar_t__ nused; scalar_t__ magic; int parent; } ;
struct TYPE_13__ {TYPE_4__ u; TYPE_2__ hdr; } ;
struct TYPE_11__ {size_t first_page; int child; } ;
struct TYPE_9__ {size_t first_page; } ;
typedef size_t Size ;
typedef int FreePageManager ;
typedef TYPE_5__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (TYPE_5__*,size_t) ;
 char* FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(FreePageManager *VAR_4, FreePageBtree *VAR_5)
{
 char *VAR_6 = FUNC_2(VAR_4);
 Size VAR_7;
 FreePageBtree *VAR_8;
 FreePageBtree *VAR_9;


 FUNC_0(VAR_5->hdr.nused > 0);
 if (VAR_5->hdr.magic == VAR_3)
 {
  FUNC_0(VAR_5->hdr.nused <= VAR_1);
  VAR_7 = VAR_5->u.leaf_key[0].first_page;
 }
 else
 {
  FUNC_0(VAR_5->hdr.magic == VAR_2);
  FUNC_0(VAR_5->hdr.nused <= VAR_0);
  VAR_7 = VAR_5->u.internal_key[0].first_page;
 }
 VAR_9 = VAR_5;


 for (;;)
 {
  Size VAR_10;

  VAR_8 = FUNC_3(VAR_6, VAR_9->hdr.parent);
  if (VAR_8 == ((void*)0))
   break;
  VAR_10 = FUNC_1(VAR_8, VAR_7);


  if (VAR_10 >= VAR_8->hdr.nused)
  {
   FUNC_0(VAR_10 == VAR_8->hdr.nused);
   --VAR_10;
  }
  else
  {
   FreePageBtree *VAR_11;

   VAR_11 = FUNC_3(VAR_6, VAR_8->u.internal_key[VAR_10].child);
   if (VAR_11 != VAR_9)
   {
    FUNC_0(VAR_10 > 0);
    --VAR_10;
   }
  }
  VAR_8->u.internal_key[VAR_10].first_page = VAR_7;





  if (VAR_10 > 0)
   break;
  VAR_9 = VAR_8;
 }
}
