
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int SV ;
typedef int Oid ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int ArrayBuildState ;
typedef int AV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int ,int ) ;
 int ** FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,int *,int *,int ,int*) ;

__attribute__((used)) static void
FUNC_9(AV *VAR_7, ArrayBuildState *VAR_8,
      int *VAR_9, int *VAR_10, int VAR_11,
      Oid VAR_12, Oid VAR_13, int32 VAR_14,
      FmgrInfo *VAR_15, Oid VAR_16)
{
 VAR_6;
 int VAR_17;
 int VAR_18 = FUNC_3(VAR_7) + 1;

 for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
 {

  SV **VAR_19 = FUNC_2(VAR_7, VAR_17, VAR_4);


  SV *VAR_20 = VAR_19 ? FUNC_7(*VAR_19) : ((void*)0);


  if (VAR_20)
  {
   AV *VAR_21 = (AV *) FUNC_0(VAR_20);


   if (VAR_11 + 1 > VAR_5)
    FUNC_4(VAR_3,
      (FUNC_5(VAR_2),
       FUNC_6("number of array dimensions (%d) exceeds the maximum allowed (%d)",
        VAR_11 + 1, VAR_5)));


   if (VAR_17 == 0 && *VAR_9 == VAR_11)
   {
    VAR_10[*VAR_9] = FUNC_3(VAR_21) + 1;
    (*VAR_9)++;
   }
   else if (FUNC_3(VAR_21) + 1 != VAR_10[VAR_11])
    FUNC_4(VAR_3,
      (FUNC_5(VAR_1),
       FUNC_6("multidimensional arrays must have array expressions with matching dimensions")));


   FUNC_9(VAR_21, VAR_8,
         VAR_9, VAR_10, VAR_11 + 1,
         VAR_12, VAR_13, VAR_14,
         VAR_15, VAR_16);
  }
  else
  {
   Datum VAR_22;
   bool VAR_23;


   if (*VAR_9 != VAR_11)
    FUNC_4(VAR_3,
      (FUNC_5(VAR_1),
       FUNC_6("multidimensional arrays must have array expressions with matching dimensions")));

   VAR_22 = FUNC_8(VAR_19 ? *VAR_19 : ((void*)0),
          VAR_13,
          VAR_14,
          ((void*)0),
          VAR_15,
          VAR_16,
          &VAR_23);

   (void) FUNC_1(VAR_8, VAR_22, VAR_23,
         VAR_13, VAR_0);
  }
 }
}
