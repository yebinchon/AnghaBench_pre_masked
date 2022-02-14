
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* rd_rel; } ;
struct TYPE_5__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef int PartitionKey ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;
typedef int Bitmapset ;
typedef scalar_t__ AttrNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int,int **) ;

bool
FUNC_10(Relation VAR_2, Bitmapset *VAR_3, bool *VAR_4)
{
 PartitionKey VAR_5;
 int VAR_6;
 List *VAR_7;
 ListCell *VAR_8;
 int VAR_9;

 if (VAR_3 == ((void*)0) || VAR_2->rd_rel->relkind != VAR_1)
  return 0;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = FUNC_5(VAR_5);
 VAR_7 = FUNC_4(VAR_5);

 VAR_8 = FUNC_7(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
 {
  AttrNumber VAR_10 = FUNC_3(VAR_5, VAR_9);

  if (VAR_10 != 0)
  {
   if (FUNC_1(VAR_10 - VAR_0,
         VAR_3))
   {
    if (VAR_4)
     *VAR_4 = 0;
    return 1;
   }
  }
  else
  {

   Node *VAR_11 = (Node *) FUNC_6(VAR_8);
   Bitmapset *VAR_12 = ((void*)0);


   FUNC_9(VAR_11, 1, &VAR_12);
   VAR_8 = FUNC_8(VAR_7, VAR_8);

   if (FUNC_2(VAR_3, VAR_12))
   {
    if (VAR_4)
     *VAR_4 = 1;
    return 1;
   }
  }
 }

 return 0;
}
