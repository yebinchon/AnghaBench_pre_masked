
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int JsonbValue ;
typedef int JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int Jsonb ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int **,int *,int) ;
 char* FUNC_2 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int **,scalar_t__,int *) ;
 int FUNC_8 (int **,int *,int*,int,int **,int,int *,int) ;
 long FUNC_9 (char*,char**,int) ;

__attribute__((used)) static void
FUNC_10(JsonbIterator **VAR_14, Datum *VAR_15, bool *VAR_16,
    int VAR_17, JsonbParseState **VAR_18, int VAR_19,
    Jsonb *VAR_20, uint32 VAR_21, int VAR_22)
{
 JsonbValue VAR_23;
 int VAR_24,
    VAR_25;
 bool VAR_26 = 0;


 if (VAR_19 < VAR_17 && !VAR_16[VAR_19])
 {
  char *VAR_27 = FUNC_2(VAR_15[VAR_19]);
  long VAR_28;
  char *VAR_29;

  VAR_13 = 0;
  VAR_28 = FUNC_9(VAR_27, &VAR_29, 10);
  if (VAR_13 != 0 || VAR_29 == VAR_27 || *VAR_29 != '\0' || VAR_28 > VAR_2 ||
   VAR_28 < VAR_3)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("path element at position %d is not an integer: \"%s\"",
       VAR_19 + 1, VAR_27)));
  VAR_24 = VAR_28;
 }
 else
  VAR_24 = VAR_21;

 if (VAR_24 < 0)
 {
  if (-VAR_24 > VAR_21)
   VAR_24 = VAR_3;
  else
   VAR_24 = VAR_21 + VAR_24;
 }

 if (VAR_24 > 0 && VAR_24 > VAR_21)
  VAR_24 = VAR_21;







 if ((VAR_24 == VAR_3 || VAR_21 == 0) && (VAR_19 == VAR_17 - 1) &&
  (VAR_22 & VAR_5))
 {
  FUNC_0(VAR_20 != ((void*)0));
  FUNC_3(VAR_18, VAR_20);
  VAR_26 = 1;
 }


 for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++)
 {
  JsonbIteratorToken VAR_30;

  if (VAR_25 == VAR_24 && VAR_19 < VAR_17)
  {
   if (VAR_19 == VAR_17 - 1)
   {
    VAR_30 = FUNC_1(VAR_14, &VAR_23, 1);

    if (VAR_22 & (VAR_7 | VAR_4))
     FUNC_3(VAR_18, VAR_20);






    if (VAR_22 & (VAR_6 | VAR_7))
     (void) FUNC_7(VAR_18, VAR_30, &VAR_23);

    if (VAR_22 & (VAR_6 | VAR_8))
     FUNC_3(VAR_18, VAR_20);

    VAR_26 = 1;
   }
   else
    (void) FUNC_8(VAR_14, VAR_15, VAR_16, VAR_17,
          VAR_18, VAR_19 + 1, VAR_20, VAR_22);
  }
  else
  {
   VAR_30 = FUNC_1(VAR_14, &VAR_23, 0);

   (void) FUNC_7(VAR_18, VAR_30, VAR_30 < VAR_9 ? &VAR_23 : ((void*)0));

   if (VAR_30 == VAR_9 || VAR_30 == VAR_10)
   {
    int VAR_31 = 1;

    while (VAR_31 != 0)
    {
     VAR_30 = FUNC_1(VAR_14, &VAR_23, 0);

     if (VAR_30 == VAR_9 || VAR_30 == VAR_10)
      ++VAR_31;
     if (VAR_30 == VAR_11 || VAR_30 == VAR_12)
      --VAR_31;

     (void) FUNC_7(VAR_18, VAR_30, VAR_30 < VAR_9 ? &VAR_23 : ((void*)0));
    }
   }

   if ((VAR_22 & VAR_5) && !VAR_26 &&
    VAR_19 == VAR_17 - 1 && VAR_25 == VAR_21 - 1)
   {
    FUNC_3(VAR_18, VAR_20);
   }
  }
 }
}
