
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_10__ {TYPE_2__* tupDesc; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_13__ {int shared_typmod_table; int area; int * shared_typmod_registry; } ;
struct TYPE_12__ {int shared_tupdesc; } ;
struct TYPE_11__ {size_t tdtypmod; int tdrefcount; } ;
typedef TYPE_3__ SharedTypmodTableEntry ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int) ;
 TYPE_9__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__** VAR_4 ;
 size_t VAR_5 ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_3__* FUNC_2 (int ,size_t*,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_1__* FUNC_9 (scalar_t__,int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static TupleDesc
FUNC_10(Oid VAR_9, int32 VAR_10, bool VAR_11)
{
 if (VAR_9 != VAR_3)
 {



  TypeCacheEntry *VAR_12;

  VAR_12 = FUNC_9(VAR_9, VAR_7);
  if (VAR_12->tupDesc == ((void*)0) && !VAR_11)
   FUNC_5(VAR_2,
     (FUNC_6(VAR_1),
      FUNC_7("type %s is not composite",
       FUNC_8(VAR_9))));
  return VAR_12->tupDesc;
 }
 else
 {



  if (VAR_10 >= 0)
  {

   if (VAR_10 < VAR_5 &&
    VAR_4[VAR_10] != ((void*)0))
    return VAR_4[VAR_10];


   if (VAR_0->shared_typmod_registry != ((void*)0))
   {
    SharedTypmodTableEntry *VAR_13;


    VAR_13 = FUNC_2(VAR_0->shared_typmod_table,
         &VAR_10, 0);
    if (VAR_13 != ((void*)0))
    {
     TupleDesc VAR_14;

     VAR_14 = (TupleDesc)
      FUNC_1(VAR_0->area,
          VAR_13->shared_tupdesc);
     FUNC_0(VAR_10 == VAR_14->tdtypmod);


     FUNC_4(VAR_10);





     VAR_4[VAR_10] = VAR_14;
     FUNC_0(VAR_14->tdrefcount == -1);





     VAR_6[VAR_10] = ++VAR_8;

     FUNC_3(VAR_0->shared_typmod_table,
          VAR_13);

     return VAR_4[VAR_10];
    }
   }
  }

  if (!VAR_11)
   FUNC_5(VAR_2,
     (FUNC_6(VAR_1),
      FUNC_7("record type has not been registered")));
  return ((void*)0);
 }
}
