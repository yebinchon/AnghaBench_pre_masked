
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_3__ {scalar_t__ typtype; int * tupDesc; int domainBaseTypmod; int domainBaseType; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int * TupleDesc ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int * FUNC_5 (scalar_t__,int ,int) ;
 int * FUNC_6 (int ,int ,int) ;
 TYPE_1__* FUNC_7 (scalar_t__,int) ;

TupleDesc
FUNC_8(Oid VAR_6, int32 VAR_7, bool VAR_8)
{
 TupleDesc VAR_9;

 if (VAR_6 != VAR_2)
 {




  TypeCacheEntry *VAR_10;

  VAR_10 = FUNC_7(VAR_6,
          VAR_4 |
          VAR_3);
  if (VAR_10->typtype == VAR_5)
   return FUNC_6(VAR_10->domainBaseType,
              VAR_10->domainBaseTypmod,
              VAR_8);
  if (VAR_10->tupDesc == ((void*)0) && !VAR_8)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("type %s is not composite",
       FUNC_4(VAR_6))));
  VAR_9 = VAR_10->tupDesc;
 }
 else
  VAR_9 = FUNC_5(VAR_6, VAR_7, VAR_8);
 if (VAR_9 != ((void*)0))
  FUNC_0(VAR_9);
 return VAR_9;
}
