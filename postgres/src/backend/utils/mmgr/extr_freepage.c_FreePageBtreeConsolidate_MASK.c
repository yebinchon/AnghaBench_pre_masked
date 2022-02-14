
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ magic; int nused; } ;
struct TYPE_11__ {int * internal_key; int * leaf_key; } ;
struct TYPE_13__ {TYPE_2__ hdr; TYPE_1__ u; } ;
typedef int Size ;
typedef int FreePageManager ;
typedef int FreePageBtreeLeafKey ;
typedef int FreePageBtreeInternalKey ;
typedef TYPE_3__ FreePageBtree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_1 (char*,TYPE_3__*) ;
 TYPE_3__* FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_3__*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_7(FreePageManager *VAR_4, FreePageBtree *VAR_5)
{
 char *VAR_6 = FUNC_5(VAR_4);
 FreePageBtree *VAR_7;
 Size VAR_8;
 if (VAR_5->hdr.magic == VAR_3)
  VAR_8 = VAR_1;
 else
 {
  FUNC_0(VAR_5->hdr.magic == VAR_2);
  VAR_8 = VAR_0;
 }
 if (VAR_5->hdr.nused >= VAR_8 / 3)
  return;




 VAR_7 = FUNC_2(VAR_6, VAR_5);
 if (VAR_7 != ((void*)0) && VAR_5->hdr.nused + VAR_7->hdr.nused <= VAR_8)
 {
  if (VAR_5->hdr.magic == VAR_3)
  {
   FUNC_6(&VAR_5->u.leaf_key[VAR_5->hdr.nused], &VAR_7->u.leaf_key[0],
       sizeof(FreePageBtreeLeafKey) * VAR_7->hdr.nused);
   VAR_5->hdr.nused += VAR_7->hdr.nused;
  }
  else
  {
   FUNC_6(&VAR_5->u.internal_key[VAR_5->hdr.nused], &VAR_7->u.internal_key[0],
       sizeof(FreePageBtreeInternalKey) * VAR_7->hdr.nused);
   VAR_5->hdr.nused += VAR_7->hdr.nused;
   FUNC_4(VAR_6, VAR_5);
  }
  FUNC_3(VAR_4, VAR_7);
  return;
 }






 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 != ((void*)0) && VAR_5->hdr.nused + VAR_7->hdr.nused <= VAR_8)
 {
  if (VAR_5->hdr.magic == VAR_3)
  {
   FUNC_6(&VAR_7->u.leaf_key[VAR_7->hdr.nused], &VAR_5->u.leaf_key[0],
       sizeof(FreePageBtreeLeafKey) * VAR_5->hdr.nused);
   VAR_7->hdr.nused += VAR_5->hdr.nused;
  }
  else
  {
   FUNC_6(&VAR_7->u.internal_key[VAR_7->hdr.nused], &VAR_5->u.internal_key[0],
       sizeof(FreePageBtreeInternalKey) * VAR_5->hdr.nused);
   VAR_7->hdr.nused += VAR_5->hdr.nused;
   FUNC_4(VAR_6, VAR_7);
  }
  FUNC_3(VAR_4, VAR_5);
  return;
 }
}
