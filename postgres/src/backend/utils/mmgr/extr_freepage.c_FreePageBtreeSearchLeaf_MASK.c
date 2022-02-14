
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* leaf_key; } ;
struct TYPE_8__ {int nused; scalar_t__ magic; } ;
struct TYPE_9__ {TYPE_2__ u; TYPE_3__ hdr; } ;
struct TYPE_6__ {int first_page; } ;
typedef int Size ;
typedef TYPE_4__ FreePageBtree ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Size
FUNC_1(FreePageBtree *VAR_2, Size VAR_3)
{
 Size VAR_4 = 0;
 Size VAR_5 = VAR_2->hdr.nused;

 FUNC_0(VAR_2->hdr.magic == VAR_1);
 FUNC_0(VAR_5 > 0 && VAR_5 <= VAR_0);

 while (VAR_4 < VAR_5)
 {
  Size VAR_6 = (VAR_4 + VAR_5) / 2;
  Size VAR_7 = VAR_2->u.leaf_key[VAR_6].first_page;

  if (VAR_3 == VAR_7)
   return VAR_6;
  else if (VAR_3 < VAR_7)
   VAR_5 = VAR_6;
  else
   VAR_4 = VAR_6 + 1;
 }

 return VAR_4;
}
