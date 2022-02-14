
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int float4 ;
struct TYPE_6__ {scalar_t__ value; int isnull; } ;
struct TYPE_5__ {int xs_recheckorderby; int numberOfOrderBys; int* xs_orderbynulls; void** xs_orderbyvals; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__* IndexScanDesc ;
typedef TYPE_2__ IndexOrderByDistance ;
typedef void* Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(IndexScanDesc VAR_3, Oid *VAR_4,
          IndexOrderByDistance *VAR_5,
          bool VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5 || !VAR_6);

 VAR_3->xs_recheckorderby = VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_3->numberOfOrderBys; VAR_7++)
 {
  if (VAR_4[VAR_7] == VAR_2)
  {


   if (!VAR_3->xs_orderbynulls[VAR_7])
    FUNC_5(FUNC_1(VAR_3->xs_orderbyvals[VAR_7]));

   if (VAR_5 && !VAR_5[VAR_7].isnull)
   {
    VAR_3->xs_orderbyvals[VAR_7] = FUNC_3(VAR_5[VAR_7].value);
    VAR_3->xs_orderbynulls[VAR_7] = 0;
   }
   else
   {
    VAR_3->xs_orderbyvals[VAR_7] = (Datum) 0;
    VAR_3->xs_orderbynulls[VAR_7] = 1;
   }
  }
  else if (VAR_4[VAR_7] == VAR_1)
  {



   if (!VAR_3->xs_orderbynulls[VAR_7])
    FUNC_5(FUNC_1(VAR_3->xs_orderbyvals[VAR_7]));

   if (VAR_5 && !VAR_5[VAR_7].isnull)
   {
    VAR_3->xs_orderbyvals[VAR_7] = FUNC_2((float4) VAR_5[VAR_7].value);
    VAR_3->xs_orderbynulls[VAR_7] = 0;
   }
   else
   {
    VAR_3->xs_orderbyvals[VAR_7] = (Datum) 0;
    VAR_3->xs_orderbynulls[VAR_7] = 1;
   }
  }
  else
  {
   if (VAR_3->xs_recheckorderby)
    FUNC_4(VAR_0, "ORDER BY operator must return float8 or float4 if the distance function is lossy");
   VAR_3->xs_orderbynulls[VAR_7] = 1;
  }
 }
}
