
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int nused; scalar_t__ magic; int parent; } ;
struct TYPE_11__ {TYPE_1__* internal_key; } ;
struct TYPE_13__ {TYPE_3__ hdr; TYPE_2__ u; } ;
struct TYPE_10__ {int first_page; int child; } ;
typedef int Size ;
typedef TYPE_4__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_3 (char*,int ) ;

__attribute__((used)) static FreePageBtree *
FUNC_4(char *VAR_1, FreePageBtree *VAR_2)
{
 FreePageBtree *VAR_3 = VAR_2;
 int VAR_4 = 0;


 for (;;)
 {
  Size VAR_5;
  Size VAR_6;

  VAR_5 = FUNC_1(VAR_3);
  VAR_3 = FUNC_3(VAR_1, VAR_3->hdr.parent);

  if (VAR_3 == ((void*)0))
   return ((void*)0);

  VAR_6 = FUNC_2(VAR_3, VAR_5);
  if (VAR_6 < VAR_3->hdr.nused - 1)
  {
   FUNC_0(VAR_3->u.internal_key[VAR_6].first_page == VAR_5);
   VAR_3 = FUNC_3(VAR_1, VAR_3->u.internal_key[VAR_6 + 1].child);
   break;
  }
  FUNC_0(VAR_6 == VAR_3->hdr.nused - 1);
  ++VAR_4;
 }


 while (VAR_4 > 0)
 {
  FUNC_0(VAR_3->hdr.magic == VAR_0);
  VAR_3 = FUNC_3(VAR_1, VAR_3->u.internal_key[0].child);
  --VAR_4;
 }
 FUNC_0(VAR_3->hdr.magic == VAR_2->hdr.magic);

 return VAR_3;
}
