
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {int tree_walk; } ;
struct TYPE_4__ {int count; scalar_t__ shouldSort; int * list; int category; int key; int attnum; } ;
typedef int OffsetNumber ;
typedef int ItemPointerData ;
typedef int GinNullCategory ;
typedef TYPE_1__ GinEntryAccumulator ;
typedef int Datum ;
typedef TYPE_2__ BuildAccumulator ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

ItemPointerData *
FUNC_3(BuildAccumulator *VAR_1,
     OffsetNumber *VAR_2, Datum *VAR_3, GinNullCategory *VAR_4,
     uint32 *VAR_5)
{
 GinEntryAccumulator *VAR_6;
 ItemPointerData *VAR_7;

 VAR_6 = (GinEntryAccumulator *) FUNC_2(&VAR_1->tree_walk);

 if (VAR_6 == ((void*)0))
  return ((void*)0);

 *VAR_2 = VAR_6->attnum;
 *VAR_3 = VAR_6->key;
 *VAR_4 = VAR_6->category;
 VAR_7 = VAR_6->list;
 *VAR_5 = VAR_6->count;

 FUNC_0(VAR_7 != ((void*)0) && VAR_6->count > 0);

 if (VAR_6->shouldSort && VAR_6->count > 1)
  FUNC_1(VAR_7, VAR_6->count, sizeof(ItemPointerData),
     VAR_0);

 return VAR_7;
}
