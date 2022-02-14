
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16 ;
struct TYPE_5__ {scalar_t__ strategy; int ndatums; scalar_t__ null_index; scalar_t__ default_index; scalar_t__* indexes; scalar_t__** datums; scalar_t__** kind; } ;
typedef TYPE_1__* PartitionBoundInfo ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

bool
FUNC_3(int VAR_3, int16 *VAR_4, bool *VAR_5,
        PartitionBoundInfo VAR_6, PartitionBoundInfo VAR_7)
{
 int VAR_8;

 if (VAR_6->strategy != VAR_7->strategy)
  return 0;

 if (VAR_6->ndatums != VAR_7->ndatums)
  return 0;

 if (VAR_6->null_index != VAR_7->null_index)
  return 0;

 if (VAR_6->default_index != VAR_7->default_index)
  return 0;

 if (VAR_6->strategy == VAR_1)
 {
  int VAR_9 = FUNC_2(VAR_6);





  if (VAR_9 != FUNC_2(VAR_7))
   return 0;
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   if (VAR_6->indexes[VAR_8] != VAR_7->indexes[VAR_8])
    return 0;
 }
 else
 {
  for (VAR_8 = 0; VAR_8 < VAR_6->ndatums; VAR_8++)
  {
   int VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
   {

    if (VAR_6->kind != ((void*)0))
    {

     if (VAR_6->kind[VAR_8][VAR_10] != VAR_7->kind[VAR_8][VAR_10])
      return 0;





     if (VAR_6->kind[VAR_8][VAR_10] != VAR_0)
      continue;
    }
    if (!FUNC_1(VAR_6->datums[VAR_8][VAR_10], VAR_7->datums[VAR_8][VAR_10],
          VAR_5[VAR_10], VAR_4[VAR_10]))
     return 0;
   }

   if (VAR_6->indexes[VAR_8] != VAR_7->indexes[VAR_8])
    return 0;
  }


  if (VAR_6->strategy == VAR_2 &&
   VAR_6->indexes[VAR_8] != VAR_7->indexes[VAR_8])
   return 0;
 }
 return 1;
}
