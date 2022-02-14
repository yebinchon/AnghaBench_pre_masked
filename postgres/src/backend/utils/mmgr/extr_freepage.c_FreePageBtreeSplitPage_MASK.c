
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ magic; int nused; int parent; } ;
struct TYPE_8__ {int * internal_key; int * leaf_key; } ;
struct TYPE_10__ {TYPE_2__ hdr; TYPE_1__ u; } ;
typedef int FreePageManager ;
typedef int FreePageBtreeLeafKey ;
typedef int FreePageBtreeInternalKey ;
typedef TYPE_3__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static FreePageBtree *
FUNC_6(FreePageManager *VAR_2, FreePageBtree *VAR_3)
{
 FreePageBtree *VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 VAR_4->hdr.magic = VAR_3->hdr.magic;
 VAR_4->hdr.nused = VAR_3->hdr.nused / 2;
 FUNC_5(VAR_4->hdr.parent, VAR_3->hdr.parent);
 VAR_3->hdr.nused -= VAR_4->hdr.nused;

 if (VAR_3->hdr.magic == VAR_1)
  FUNC_4(&VAR_4->u.leaf_key,
      &VAR_3->u.leaf_key[VAR_3->hdr.nused],
      sizeof(FreePageBtreeLeafKey) * VAR_4->hdr.nused);
 else
 {
  FUNC_0(VAR_3->hdr.magic == VAR_0);
  FUNC_4(&VAR_4->u.internal_key,
      &VAR_3->u.internal_key[VAR_3->hdr.nused],
      sizeof(FreePageBtreeInternalKey) * VAR_4->hdr.nused);
  FUNC_2(FUNC_3(VAR_2), VAR_4);
 }

 return VAR_4;
}
