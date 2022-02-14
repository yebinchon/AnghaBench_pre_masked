
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ magic; size_t nused; int parent; } ;
struct TYPE_9__ {TYPE_1__* internal_key; } ;
struct TYPE_11__ {TYPE_3__ hdr; TYPE_2__ u; } ;
struct TYPE_8__ {int child; } ;
typedef size_t Size ;
typedef TYPE_4__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, FreePageBtree *VAR_2)
{
 Size VAR_3;

 FUNC_0(VAR_2->hdr.magic == VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2->hdr.nused; ++VAR_3)
 {
  FreePageBtree *VAR_4;

  VAR_4 = FUNC_1(VAR_1, VAR_2->u.internal_key[VAR_3].child);
  FUNC_2(VAR_1, VAR_4->hdr.parent, VAR_2);
 }
}
