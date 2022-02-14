
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* internal_key; TYPE_1__* leaf_key; } ;
struct TYPE_8__ {scalar_t__ nused; scalar_t__ magic; } ;
struct TYPE_11__ {TYPE_3__ u; TYPE_2__ hdr; } ;
struct TYPE_10__ {int first_page; } ;
struct TYPE_7__ {int first_page; } ;
typedef int Size ;
typedef TYPE_5__ FreePageBtree ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static Size
FUNC_1(FreePageBtree *VAR_2)
{
 FUNC_0(VAR_2->hdr.nused > 0);

 if (VAR_2->hdr.magic == VAR_1)
  return VAR_2->u.leaf_key[0].first_page;
 else
 {
  FUNC_0(VAR_2->hdr.magic == VAR_0);
  return VAR_2->u.internal_key[0].first_page;
 }
}
