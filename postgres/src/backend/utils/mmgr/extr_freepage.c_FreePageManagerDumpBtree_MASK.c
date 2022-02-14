
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {size_t relptr_off; } ;
struct TYPE_14__ {TYPE_3__* internal_key; TYPE_1__* leaf_key; } ;
struct TYPE_12__ {scalar_t__ magic; size_t nused; TYPE_7__ parent; } ;
struct TYPE_15__ {TYPE_4__ u; TYPE_2__ hdr; } ;
struct TYPE_13__ {size_t first_page; TYPE_7__ child; } ;
struct TYPE_11__ {size_t first_page; size_t npages; } ;
typedef int StringInfo ;
typedef size_t Size ;
typedef int FreePageManager ;
typedef TYPE_5__ FreePageBtree ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,size_t,size_t,...) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 () ;
 size_t FUNC_3 (char*,TYPE_5__*) ;
 char* FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (char*,TYPE_7__) ;

__attribute__((used)) static void
FUNC_6(FreePageManager *VAR_2, FreePageBtree *VAR_3,
       FreePageBtree *VAR_4, int VAR_5, StringInfo VAR_6)
{
 char *VAR_7 = FUNC_4(VAR_2);
 Size VAR_8 = FUNC_3(VAR_7, VAR_3);
 Size VAR_9;
 FreePageBtree *VAR_10;

 FUNC_2();
 VAR_10 = FUNC_5(VAR_7, VAR_3->hdr.parent);
 FUNC_0(VAR_6, "  %zu@%d %c", VAR_8, VAR_5,
      VAR_3->hdr.magic == VAR_1 ? 'i' : 'l');
 if (VAR_4 != VAR_10)
  FUNC_0(VAR_6, " [actual parent %zu, expected %zu]",
       FUNC_3(VAR_7, VAR_10),
       FUNC_3(VAR_7, VAR_4));
 FUNC_1(VAR_6, ':');
 for (VAR_9 = 0; VAR_9 < VAR_3->hdr.nused; ++VAR_9)
 {
  if (VAR_3->hdr.magic == VAR_1)
   FUNC_0(VAR_6, " %zu->%zu",
        VAR_3->u.internal_key[VAR_9].first_page,
        VAR_3->u.internal_key[VAR_9].child.relptr_off / VAR_0);
  else
   FUNC_0(VAR_6, " %zu(%zu)",
        VAR_3->u.leaf_key[VAR_9].first_page,
        VAR_3->u.leaf_key[VAR_9].npages);
 }
 FUNC_1(VAR_6, '\n');

 if (VAR_3->hdr.magic == VAR_1)
 {
  for (VAR_9 = 0; VAR_9 < VAR_3->hdr.nused; ++VAR_9)
  {
   FreePageBtree *VAR_11;

   VAR_11 = FUNC_5(VAR_7, VAR_3->u.internal_key[VAR_9].child);
   FUNC_6(VAR_2, VAR_11, VAR_3, VAR_5 + 1, VAR_6);
  }
 }
}
