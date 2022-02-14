
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef size_t int32 ;
struct TYPE_3__ {scalar_t__ tupDesc_identifier; int * tupDesc; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef scalar_t__ Oid ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int ** VAR_3 ;
 size_t VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (scalar_t__,int ) ;
 scalar_t__ VAR_7 ;

uint64
FUNC_6(Oid VAR_8, int32 VAR_9)
{
 if (VAR_8 != VAR_2)
 {



  TypeCacheEntry *VAR_10;

  VAR_10 = FUNC_5(VAR_8, VAR_6);
  if (VAR_10->tupDesc == ((void*)0))
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("type %s is not composite",
       FUNC_4(VAR_8))));
  FUNC_0(VAR_10->tupDesc_identifier != 0);
  return VAR_10->tupDesc_identifier;
 }
 else
 {



  if (VAR_9 >= 0 && VAR_9 < VAR_4 &&
   VAR_3[VAR_9] != ((void*)0))
  {
   FUNC_0(VAR_5[VAR_9] != 0);
   return VAR_5[VAR_9];
  }


  return ++VAR_7;
 }
}
