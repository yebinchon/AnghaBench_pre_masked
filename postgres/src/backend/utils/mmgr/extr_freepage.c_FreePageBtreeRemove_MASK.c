
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ magic; size_t nused; } ;
struct TYPE_8__ {int * leaf_key; } ;
struct TYPE_10__ {TYPE_2__ hdr; TYPE_1__ u; } ;
typedef size_t Size ;
typedef int FreePageManager ;
typedef int FreePageBtreeLeafKey ;
typedef TYPE_3__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_5(FreePageManager *VAR_1, FreePageBtree *VAR_2, Size VAR_3)
{
 FUNC_0(VAR_2->hdr.magic == VAR_0);
 FUNC_0(VAR_3 < VAR_2->hdr.nused);


 if (VAR_2->hdr.nused == 1)
 {
  FUNC_3(VAR_1, VAR_2);
  return;
 }


 --VAR_2->hdr.nused;
 if (VAR_3 < VAR_2->hdr.nused)
  FUNC_4(&VAR_2->u.leaf_key[VAR_3], &VAR_2->u.leaf_key[VAR_3 + 1],
    sizeof(FreePageBtreeLeafKey) * (VAR_2->hdr.nused - VAR_3));


 if (VAR_3 == 0)
  FUNC_1(VAR_1, VAR_2);


 FUNC_2(VAR_1, VAR_2);
}
