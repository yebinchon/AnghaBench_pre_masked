
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ int32 ;
typedef int array_iter ;
struct TYPE_12__ {int fn_oid; } ;
struct TYPE_15__ {scalar_t__ type_id; int typlen; int typbyval; char typalign; TYPE_10__ cmp_proc_finfo; } ;
typedef TYPE_3__ TypeCacheEntry ;
struct TYPE_17__ {int isnull; TYPE_2__* args; } ;
struct TYPE_16__ {TYPE_1__* flinfo; } ;
struct TYPE_14__ {int isnull; void* value; } ;
struct TYPE_13__ {void* fn_extra; } ;
typedef scalar_t__ Oid ;
typedef TYPE_4__* FunctionCallInfo ;
typedef void* Datum ;
typedef int AnyArrayType ;


 int* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__,TYPE_10__*,int,scalar_t__,int *,int *) ;
 int FUNC_9 (TYPE_6__*,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int * FUNC_12 (int) ;
 scalar_t__ FUNC_13 () ;
 int VAR_3 ;
 void* FUNC_14 (int *,int*,int,int,int,char) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (scalar_t__) ;
 TYPE_6__* VAR_4 ;
 TYPE_3__* FUNC_20 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_21(FunctionCallInfo VAR_5)
{
 FUNC_9(VAR_4, 2);
 AnyArrayType *VAR_6 = FUNC_12(0);
 AnyArrayType *VAR_7 = FUNC_12(1);
 Oid VAR_8 = FUNC_13();
 int VAR_9 = FUNC_4(VAR_6);
 int VAR_10 = FUNC_4(VAR_7);
 int *VAR_11 = FUNC_0(VAR_6);
 int *VAR_12 = FUNC_0(VAR_7);
 int VAR_13 = FUNC_5(VAR_9, VAR_11);
 int VAR_14 = FUNC_5(VAR_10, VAR_12);
 Oid VAR_15 = FUNC_1(VAR_6);
 int VAR_16 = 0;
 TypeCacheEntry *VAR_17;
 int VAR_18;
 bool VAR_19;
 char VAR_20;
 int VAR_21;
 array_iter VAR_22;
 array_iter VAR_23;
 int VAR_24;

 if (VAR_15 != FUNC_1(VAR_7))
  FUNC_16(VAR_2,
    (FUNC_17(VAR_0),
     FUNC_18("cannot compare arrays of different element types")));







 VAR_17 = (TypeCacheEntry *) VAR_5->flinfo->fn_extra;
 if (VAR_17 == ((void*)0) ||
  VAR_17->type_id != VAR_15)
 {
  VAR_17 = FUNC_20(VAR_15,
          VAR_3);
  if (!FUNC_11(VAR_17->cmp_proc_finfo.fn_oid))
   FUNC_16(VAR_2,
     (FUNC_17(VAR_1),
      FUNC_18("could not identify a comparison function for type %s",
       FUNC_19(VAR_15))));
  VAR_5->flinfo->fn_extra = (void *) VAR_17;
 }
 VAR_18 = VAR_17->typlen;
 VAR_19 = VAR_17->typbyval;
 VAR_20 = VAR_17->typalign;




 FUNC_8(*VAR_4, &VAR_17->cmp_proc_finfo, 2,
        VAR_8, ((void*)0), ((void*)0));


 VAR_21 = FUNC_10(VAR_13, VAR_14);
 FUNC_15(&VAR_22, VAR_6);
 FUNC_15(&VAR_23, VAR_7);

 for (VAR_24 = 0; VAR_24 < VAR_21; VAR_24++)
 {
  Datum VAR_25;
  Datum VAR_26;
  bool VAR_27;
  bool VAR_28;
  int32 VAR_29;


  VAR_25 = FUNC_14(&VAR_22, &VAR_27, VAR_24, VAR_18, VAR_19, VAR_20);
  VAR_26 = FUNC_14(&VAR_23, &VAR_28, VAR_24, VAR_18, VAR_19, VAR_20);




  if (VAR_27 && VAR_28)
   continue;
  if (VAR_27)
  {

   VAR_16 = 1;
   break;
  }
  if (VAR_28)
  {

   VAR_16 = -1;
   break;
  }


  VAR_4->args[0].value = VAR_25;
  VAR_4->args[0].isnull = 0;
  VAR_4->args[1].value = VAR_26;
  VAR_4->args[1].isnull = 0;
  VAR_4->isnull = 0;
  VAR_29 = FUNC_6(FUNC_7(VAR_4));

  if (VAR_29 == 0)
   continue;

  if (VAR_29 < 0)
  {

   VAR_16 = -1;
   break;
  }
  else
  {

   VAR_16 = 1;
   break;
  }
 }







 if (VAR_16 == 0)
 {
  if (VAR_13 != VAR_14)
   VAR_16 = (VAR_13 < VAR_14) ? -1 : 1;
  else if (VAR_9 != VAR_10)
   VAR_16 = (VAR_9 < VAR_10) ? -1 : 1;
  else
  {
   for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++)
   {
    if (VAR_11[VAR_24] != VAR_12[VAR_24])
    {
     VAR_16 = (VAR_11[VAR_24] < VAR_12[VAR_24]) ? -1 : 1;
     break;
    }
   }
   if (VAR_16 == 0)
   {
    int *VAR_30 = FUNC_3(VAR_6);
    int *VAR_31 = FUNC_3(VAR_7);

    for (VAR_24 = 0; VAR_24 < VAR_9; VAR_24++)
    {
     if (VAR_30[VAR_24] != VAR_31[VAR_24])
     {
      VAR_16 = (VAR_30[VAR_24] < VAR_31[VAR_24]) ? -1 : 1;
      break;
     }
    }
   }
  }
 }


 FUNC_2(VAR_6, 0);
 FUNC_2(VAR_7, 1);

 return VAR_16;
}
