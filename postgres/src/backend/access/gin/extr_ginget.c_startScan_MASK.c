
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_8__ {int predictNumberResult; int reduceResult; } ;
struct TYPE_7__ {size_t totalentries; size_t nkeys; scalar_t__ keys; TYPE_4__** entries; int ginstate; } ;
struct TYPE_6__ {int xs_snapshot; int opaque; } ;
typedef TYPE_1__* IndexScanDesc ;
typedef int GinState ;
typedef TYPE_2__* GinScanOpaque ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;
 int FUNC_1 (int *,TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(IndexScanDesc VAR_1)
{
 GinScanOpaque VAR_2 = (GinScanOpaque) VAR_1->opaque;
 GinState *VAR_3 = &VAR_2->ginstate;
 uint32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->totalentries; VAR_4++)
  FUNC_0(VAR_3, VAR_2->entries[VAR_4], VAR_1->xs_snapshot);

 if (VAR_0 > 0)
 {






  bool VAR_5 = 1;

  for (VAR_4 = 0; VAR_4 < VAR_2->totalentries; VAR_4++)
  {
   if (VAR_2->entries[VAR_4]->predictNumberResult <= VAR_2->totalentries * VAR_0)
   {
    VAR_5 = 0;
    break;
   }
  }
  if (VAR_5)
  {
   for (VAR_4 = 0; VAR_4 < VAR_2->totalentries; VAR_4++)
   {
    VAR_2->entries[VAR_4]->predictNumberResult /= VAR_2->totalentries;
    VAR_2->entries[VAR_4]->reduceResult = 1;
   }
  }
 }





 for (VAR_4 = 0; VAR_4 < VAR_2->nkeys; VAR_4++)
  FUNC_1(VAR_3, VAR_2, VAR_2->keys + VAR_4);
}
