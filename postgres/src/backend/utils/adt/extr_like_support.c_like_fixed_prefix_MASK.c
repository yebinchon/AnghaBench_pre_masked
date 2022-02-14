
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pg_locale_t ;
typedef int bytea ;
struct TYPE_6__ {scalar_t__ consttype; int constvalue; } ;
typedef int Selectivity ;
typedef scalar_t__ Pointer ;
typedef int Pattern_Prefix_Status ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ Const ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*,int ,int) ;
 char* FUNC_14 (int) ;
 scalar_t__ FUNC_15 (char,int,int ,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (scalar_t__) ;
 TYPE_1__* FUNC_19 (char*,int) ;
 TYPE_1__* FUNC_20 (char*,scalar_t__) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static Pattern_Prefix_Status
FUNC_22(Const *VAR_9, bool VAR_10, Oid VAR_11,
      Const **VAR_12, Selectivity *VAR_13)
{
 char *VAR_14;
 char *VAR_15;
 int VAR_16;
 Oid VAR_17 = VAR_9->consttype;
 int VAR_18,
    VAR_19;
 bool VAR_20 = (FUNC_17() > 1);
 pg_locale_t VAR_21 = 0;
 bool VAR_22 = 0;


 FUNC_0(VAR_17 == VAR_0 || VAR_17 == VAR_8);

 if (VAR_10)
 {
  if (VAR_17 == VAR_0)
   FUNC_7(VAR_4,
     (FUNC_8(VAR_2),
      FUNC_10("case insensitive matching not supported on type bytea")));


  if (FUNC_11(VAR_11))
   VAR_22 = 1;
  else if (VAR_11 != VAR_1)
  {
   if (!FUNC_3(VAR_11))
   {




    FUNC_7(VAR_4,
      (FUNC_8(VAR_3),
       FUNC_10("could not determine which collation to use for ILIKE"),
       FUNC_9("Use the COLLATE clause to set the collation explicitly.")));
   }
   VAR_21 = FUNC_18(VAR_11);
  }
 }

 if (VAR_17 != VAR_0)
 {
  VAR_15 = FUNC_4(VAR_9->constvalue);
  VAR_16 = FUNC_21(VAR_15);
 }
 else
 {
  bytea *VAR_23 = FUNC_1(VAR_9->constvalue);

  VAR_16 = FUNC_6(VAR_23);
  VAR_15 = (char *) FUNC_14(VAR_16);
  FUNC_13(VAR_15, FUNC_5(VAR_23), VAR_16);
  FUNC_0((Pointer) VAR_23 == FUNC_2(VAR_9->constvalue));
 }

 VAR_14 = FUNC_14(VAR_16 + 1);
 VAR_19 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
 {

  if (VAR_15[VAR_18] == '%' ||
   VAR_15[VAR_18] == '_')
   break;


  if (VAR_15[VAR_18] == '\\')
  {
   VAR_18++;
   if (VAR_18 >= VAR_16)
    break;
  }


  if (VAR_10 &&
   FUNC_15(VAR_15[VAR_18], VAR_20, VAR_21, VAR_22))
   break;

  VAR_14[VAR_19++] = VAR_15[VAR_18];
 }

 VAR_14[VAR_19] = '\0';

 if (VAR_17 != VAR_0)
  *VAR_12 = FUNC_20(VAR_14, VAR_17);
 else
  *VAR_12 = FUNC_19(VAR_14, VAR_19);

 if (VAR_13 != ((void*)0))
  *VAR_13 = FUNC_12(&VAR_15[VAR_18], VAR_16 - VAR_18,
            VAR_10);

 FUNC_16(VAR_15);
 FUNC_16(VAR_14);


 if (VAR_18 == VAR_16)
  return VAR_5;

 if (VAR_19 > 0)
  return VAR_7;

 return VAR_6;
}
