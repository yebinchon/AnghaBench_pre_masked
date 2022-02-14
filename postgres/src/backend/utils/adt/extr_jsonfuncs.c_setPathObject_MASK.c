
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {scalar_t__ len; void* val; } ;
struct TYPE_7__ {TYPE_1__ string; } ;
struct TYPE_8__ {TYPE_2__ val; void* type; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int Jsonb ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int **,TYPE_3__*,int) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 void* VAR_11 ;
 scalar_t__ FUNC_9 (void*,void*,scalar_t__) ;
 int FUNC_10 (int **,scalar_t__,TYPE_3__*) ;
 int FUNC_11 (int **,int *,int*,int,int **,int,int *,int) ;

__attribute__((used)) static void
FUNC_12(JsonbIterator **VAR_12, Datum *VAR_13, bool *VAR_14,
     int VAR_15, JsonbParseState **VAR_16, int VAR_17,
     Jsonb *VAR_18, uint32 VAR_19, int VAR_20)
{
 JsonbValue VAR_21;
 int VAR_22;
 JsonbValue VAR_23;
 bool VAR_24 = 0;

 if (VAR_17 >= VAR_15 || VAR_14[VAR_17])
  VAR_24 = 1;


 if ((VAR_19 == 0) && (VAR_20 & VAR_2) &&
  (VAR_17 == VAR_15 - 1))
 {
  JsonbValue VAR_25;

  VAR_25.type = VAR_11;
  VAR_25.val.string.len = FUNC_3(VAR_13[VAR_17]);
  VAR_25.val.string.val = FUNC_2(VAR_13[VAR_17]);

  (void) FUNC_10(VAR_16, VAR_10, &VAR_25);
  FUNC_4(VAR_16, VAR_18);
 }

 for (VAR_22 = 0; VAR_22 < VAR_19; VAR_22++)
 {
  JsonbIteratorToken VAR_26 = FUNC_1(VAR_12, &VAR_23, 1);

  FUNC_0(VAR_26 == VAR_10);

  if (!VAR_24 &&
   VAR_23.val.string.len == FUNC_3(VAR_13[VAR_17]) &&
   FUNC_9(VAR_23.val.string.val, FUNC_2(VAR_13[VAR_17]),
       VAR_23.val.string.len) == 0)
  {
   if (VAR_17 == VAR_15 - 1)
   {




    if (VAR_20 & (VAR_5 | VAR_4))
     FUNC_5(VAR_1,
       (FUNC_6(VAR_0),
        FUNC_8("cannot replace existing key"),
        FUNC_7("Try using the function jsonb_set "
          "to replace key value.")));

    VAR_26 = FUNC_1(VAR_12, &VAR_21, 1);
    if (!(VAR_20 & VAR_3))
    {
     (void) FUNC_10(VAR_16, VAR_10, &VAR_23);
     FUNC_4(VAR_16, VAR_18);
    }
    VAR_24 = 1;
   }
   else
   {
    (void) FUNC_10(VAR_16, VAR_26, &VAR_23);
    FUNC_11(VAR_12, VAR_13, VAR_14, VAR_15,
      VAR_16, VAR_17 + 1, VAR_18, VAR_20);
   }
  }
  else
  {
   if ((VAR_20 & VAR_2) && !VAR_24 &&
    VAR_17 == VAR_15 - 1 && VAR_22 == VAR_19 - 1)
   {
    JsonbValue VAR_27;

    VAR_27.type = VAR_11;
    VAR_27.val.string.len = FUNC_3(VAR_13[VAR_17]);
    VAR_27.val.string.val = FUNC_2(VAR_13[VAR_17]);

    (void) FUNC_10(VAR_16, VAR_10, &VAR_27);
    FUNC_4(VAR_16, VAR_18);
   }

   (void) FUNC_10(VAR_16, VAR_26, &VAR_23);
   VAR_26 = FUNC_1(VAR_12, &VAR_21, 0);
   (void) FUNC_10(VAR_16, VAR_26, VAR_26 < VAR_6 ? &VAR_21 : ((void*)0));
   if (VAR_26 == VAR_6 || VAR_26 == VAR_7)
   {
    int VAR_28 = 1;

    while (VAR_28 != 0)
    {
     VAR_26 = FUNC_1(VAR_12, &VAR_21, 0);

     if (VAR_26 == VAR_6 || VAR_26 == VAR_7)
      ++VAR_28;
     if (VAR_26 == VAR_8 || VAR_26 == VAR_9)
      --VAR_28;

     (void) FUNC_10(VAR_16, VAR_26, VAR_26 < VAR_6 ? &VAR_21 : ((void*)0));
    }
   }
  }
 }
}
