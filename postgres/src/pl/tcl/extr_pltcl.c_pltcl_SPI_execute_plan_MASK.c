
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nargs; int plan; int * argtypioparams; int * arginfuncs; } ;
typedef TYPE_3__ pltcl_query_desc ;
typedef enum options { ____Placeholder_options } options ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
typedef int Tcl_HashTable ;
typedef int Tcl_HashEntry ;
struct TYPE_8__ {TYPE_2__* prodesc; } ;
struct TYPE_6__ {int fn_readonly; TYPE_1__* interp_desc; } ;
struct TYPE_5__ {int query_hash; } ;
typedef int ResourceOwner ;
typedef int MemoryContext ;
typedef int Datum ;
typedef int ClientData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,char const*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *,char*,char*,char*,int *) ;
 int * FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int * const,char const**,int *,int ,int*) ;
 scalar_t__ FUNC_9 (int *,int * const,int*) ;
 char* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int * const,int*,int ***) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int,int * const*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int) ;
 TYPE_4__* VAR_9 ;
 int FUNC_17 (int *,char const*,int *,int,int ,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static int
FUNC_22(ClientData VAR_10, Tcl_Interp *VAR_11,
        int VAR_12, Tcl_Obj *const VAR_13[])
{
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 Tcl_HashEntry *VAR_19;
 pltcl_query_desc *VAR_20;
 const char *VAR_21 = ((void*)0);
 const char *VAR_22 = ((void*)0);
 Tcl_Obj *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 int VAR_25;
 Tcl_Obj **VAR_26 = ((void*)0);
 Datum *VAR_27;
 MemoryContext VAR_28 = VAR_0;
 ResourceOwner VAR_29 = VAR_1;
 Tcl_HashTable *VAR_30;

 enum options
 {
  OPT_ARRAY, OPT_COUNT, OPT_NULLS
 };

 static const char *VAR_31[] = {
  "-array", "-count", "-nulls", (const char *) ((void*)0)
 };




 VAR_16 = 1;
 while (VAR_16 < VAR_12)
 {
  if (FUNC_8(((void*)0), VAR_13[VAR_16], VAR_31, ((void*)0),
        VAR_5, &VAR_18) != VAR_6)
   break;

  if (++VAR_16 >= VAR_12)
  {
   FUNC_13(VAR_11,
        FUNC_12("missing argument to -array, -count or -nulls", -1));
   return VAR_4;
  }

  switch ((enum options) VAR_18)
  {
   case OPT_ARRAY:
    VAR_22 = FUNC_10(VAR_13[VAR_16++]);
    break;

   case OPT_COUNT:
    if (FUNC_9(VAR_11, VAR_13[VAR_16++], &VAR_24) != VAR_6)
     return VAR_4;
    break;

   case OPT_NULLS:
    VAR_21 = FUNC_10(VAR_13[VAR_16++]);
    break;
  }
 }




 if (VAR_16 >= VAR_12)
 {
  FUNC_13(VAR_11,
       FUNC_12("missing argument to -count or -array", -1));
  return VAR_4;
 }

 VAR_30 = &VAR_9->prodesc->interp_desc->query_hash;

 VAR_19 = FUNC_6(VAR_30, FUNC_10(VAR_13[VAR_16]));
 if (VAR_19 == ((void*)0))
 {
  FUNC_5(VAR_11, "invalid queryid '", FUNC_10(VAR_13[VAR_16]), "'", ((void*)0));
  return VAR_4;
 }
 VAR_20 = (pltcl_query_desc *) FUNC_7(VAR_19);
 VAR_16++;




 if (VAR_21 != ((void*)0))
 {
  if (FUNC_21(VAR_21) != VAR_20->nargs)
  {
   FUNC_13(VAR_11,
        FUNC_12(
             "length of nulls string doesn't match number of arguments",
             -1));
   return VAR_4;
  }
 }





 if (VAR_20->nargs > 0)
 {
  if (VAR_16 >= VAR_12)
  {
   FUNC_13(VAR_11,
        FUNC_12(
             "argument list length doesn't match number of arguments for query"
             ,-1));
   return VAR_4;
  }




  if (FUNC_11(VAR_11, VAR_13[VAR_16++], &VAR_25, &VAR_26) != VAR_6)
   return VAR_4;




  if (VAR_25 != VAR_20->nargs)
  {
   FUNC_13(VAR_11,
        FUNC_12(
             "argument list length doesn't match number of arguments for query"
             ,-1));
   return VAR_4;
  }
 }
 else
  VAR_25 = 0;




 if (VAR_16 < VAR_12)
  VAR_23 = VAR_13[VAR_16++];

 if (VAR_16 != VAR_12)
 {
  FUNC_14(VAR_11, 1, VAR_13,
       "?-count n? ?-array name? ?-nulls string? "
       "query ?args? ?loop body?");
  return VAR_4;
 }






 FUNC_19(VAR_28, VAR_29);

 FUNC_3();
 {




  VAR_27 = (Datum *) FUNC_16(VAR_25 * sizeof(Datum));

  for (VAR_17 = 0; VAR_17 < VAR_25; VAR_17++)
  {
   if (VAR_21 && VAR_21[VAR_17] == 'n')
   {
    VAR_27[VAR_17] = FUNC_0(&VAR_20->arginfuncs[VAR_17],
             ((void*)0),
             VAR_20->argtypioparams[VAR_17],
             -1);
   }
   else
   {
    VAR_7;
    VAR_27[VAR_17] = FUNC_0(&VAR_20->arginfuncs[VAR_17],
             FUNC_15(FUNC_10(VAR_26[VAR_17])),
             VAR_20->argtypioparams[VAR_17],
             -1);
    VAR_8;
   }
  }




  VAR_15 = FUNC_4(VAR_20->plan, VAR_27, VAR_21,
          VAR_9->prodesc->fn_readonly,
          VAR_24);

  VAR_14 = FUNC_17(VAR_11,
           VAR_22,
           VAR_23,
           VAR_15,
           VAR_3,
           VAR_2);

  FUNC_20(VAR_28, VAR_29);
 }
 FUNC_1();
 {
  FUNC_18(VAR_11, VAR_28, VAR_29);
  return VAR_4;
 }
 FUNC_2();

 return VAR_14;
}
