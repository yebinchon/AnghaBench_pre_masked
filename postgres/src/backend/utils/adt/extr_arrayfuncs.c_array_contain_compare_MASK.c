
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef int array_iter ;
struct TYPE_18__ {int fn_oid; } ;
struct TYPE_20__ {scalar_t__ type_id; int typlen; int typbyval; char typalign; TYPE_13__ eq_opr_finfo; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_23__ {void** dvalues; int* dnulls; int nelems; } ;
struct TYPE_22__ {int isnull; TYPE_1__* args; } ;
struct TYPE_21__ {TYPE_6__ xpn; } ;
struct TYPE_19__ {int isnull; void* value; } ;
typedef scalar_t__ Oid ;
typedef void* Datum ;
typedef int ArrayType ;
typedef TYPE_3__ AnyArrayType ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__,TYPE_13__*,int,scalar_t__,int *,int *) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 void* FUNC_10 (int *,int*,int,int,int,char) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *,scalar_t__,int,int,char,void***,int**,int*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (scalar_t__) ;
 TYPE_5__* VAR_4 ;
 TYPE_2__* FUNC_18 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_19(AnyArrayType *VAR_5, AnyArrayType *VAR_6, Oid VAR_7,
       bool VAR_8, void **VAR_9)
{
 FUNC_7(VAR_4, 2);
 bool VAR_10 = VAR_8;
 Oid VAR_11 = FUNC_1(VAR_5);
 TypeCacheEntry *VAR_12;
 int VAR_13;
 Datum *VAR_14;
 bool *VAR_15;
 int VAR_16;
 int VAR_17;
 bool VAR_18;
 char VAR_19;
 int VAR_20;
 int VAR_21;
 array_iter VAR_22;

 if (VAR_11 != FUNC_1(VAR_6))
  FUNC_14(VAR_2,
    (FUNC_15(VAR_0),
     FUNC_16("cannot compare arrays of different element types")));







 VAR_12 = (TypeCacheEntry *) *VAR_9;
 if (VAR_12 == ((void*)0) ||
  VAR_12->type_id != VAR_11)
 {
  VAR_12 = FUNC_18(VAR_11,
          VAR_3);
  if (!FUNC_8(VAR_12->eq_opr_finfo.fn_oid))
   FUNC_14(VAR_2,
     (FUNC_15(VAR_1),
      FUNC_16("could not identify an equality operator for type %s",
       FUNC_17(VAR_11))));
  *VAR_9 = (void *) VAR_12;
 }
 VAR_17 = VAR_12->typlen;
 VAR_18 = VAR_12->typbyval;
 VAR_19 = VAR_12->typalign;






 if (FUNC_9(VAR_6))
 {

  FUNC_13(&(VAR_6->xpn));
  VAR_14 = VAR_6->xpn.dvalues;
  VAR_15 = VAR_6->xpn.dnulls;
  VAR_16 = VAR_6->xpn.nelems;
 }
 else
  FUNC_12((ArrayType *) VAR_6,
        VAR_11, VAR_17, VAR_18, VAR_19,
        &VAR_14, &VAR_15, &VAR_16);




 FUNC_6(*VAR_4, &VAR_12->eq_opr_finfo, 2,
        VAR_7, ((void*)0), ((void*)0));


 VAR_13 = FUNC_3(FUNC_2(VAR_5), FUNC_0(VAR_5));
 FUNC_11(&VAR_22, VAR_5);

 for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++)
 {
  Datum VAR_23;
  bool VAR_24;


  VAR_23 = FUNC_10(&VAR_22, &VAR_24, VAR_20, VAR_17, VAR_18, VAR_19);






  if (VAR_24)
  {
   if (VAR_8)
   {
    VAR_10 = 0;
    break;
   }
   continue;
  }

  for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++)
  {
   Datum VAR_25 = VAR_14[VAR_21];
   bool VAR_26 = VAR_15 ? VAR_15[VAR_21] : 0;
   bool VAR_27;

   if (VAR_26)
    continue;




   VAR_4->args[0].value = VAR_23;
   VAR_4->args[0].isnull = 0;
   VAR_4->args[1].value = VAR_25;
   VAR_4->args[1].isnull = 0;
   VAR_4->isnull = 0;
   VAR_27 = FUNC_4(FUNC_5(VAR_4));
   if (VAR_27)
    break;
  }

  if (VAR_21 < VAR_16)
  {

   if (!VAR_8)
   {
    VAR_10 = 1;
    break;
   }
  }
  else
  {

   if (VAR_8)
   {
    VAR_10 = 0;
    break;
   }
  }
 }

 return VAR_10;
}
