
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int first_page; int npages; } ;
struct TYPE_8__ {scalar_t__ magic; int nused; } ;
struct TYPE_7__ {TYPE_4__* leaf_key; } ;
struct TYPE_9__ {TYPE_2__ hdr; TYPE_1__ u; } ;
typedef int Size ;
typedef int FreePageBtreeLeafKey ;
typedef TYPE_3__ FreePageBtree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_2(FreePageBtree *VAR_2, Size VAR_3, Size VAR_4,
      Size VAR_5)
{
 FUNC_0(VAR_2->hdr.magic == VAR_1);
 FUNC_0(VAR_2->hdr.nused <= VAR_0);
 FUNC_0(VAR_3 <= VAR_2->hdr.nused);
 FUNC_1(&VAR_2->u.leaf_key[VAR_3 + 1], &VAR_2->u.leaf_key[VAR_3],
   sizeof(FreePageBtreeLeafKey) * (VAR_2->hdr.nused - VAR_3));
 VAR_2->u.leaf_key[VAR_3].first_page = VAR_4;
 VAR_2->u.leaf_key[VAR_3].npages = VAR_5;
 ++VAR_2->hdr.nused;
}
