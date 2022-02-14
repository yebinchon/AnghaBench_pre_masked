
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int first_page; int child; } ;
struct TYPE_10__ {scalar_t__ magic; int nused; } ;
struct TYPE_9__ {TYPE_5__* internal_key; } ;
struct TYPE_11__ {TYPE_2__ hdr; TYPE_1__ u; } ;
typedef int Size ;
typedef int FreePageBtreeInternalKey ;
typedef TYPE_3__ FreePageBtree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_2 (char*,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_2, FreePageBtree *VAR_3, Size VAR_4,
       Size VAR_5, FreePageBtree *VAR_6)
{
 FUNC_0(VAR_3->hdr.magic == VAR_1);
 FUNC_0(VAR_3->hdr.nused <= VAR_0);
 FUNC_0(VAR_4 <= VAR_3->hdr.nused);
 FUNC_1(&VAR_3->u.internal_key[VAR_4 + 1], &VAR_3->u.internal_key[VAR_4],
   sizeof(FreePageBtreeInternalKey) * (VAR_3->hdr.nused - VAR_4));
 VAR_3->u.internal_key[VAR_4].first_page = VAR_5;
 FUNC_2(VAR_2, VAR_3->u.internal_key[VAR_4].child, VAR_6);
 ++VAR_3->hdr.nused;
}
