
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(enum ECPGttype VAR_1, char **VAR_2, char **VAR_3, char *VAR_4, char *VAR_5, int VAR_6, bool VAR_7)
{
 if (FUNC_0(VAR_5) >= 0)
 {
  if (FUNC_0(*VAR_3) >= 0)
   FUNC_2(VAR_0, "multidimensional arrays are not supported");

  *VAR_3 = VAR_5;
 }

 if (FUNC_0(VAR_4) >= 0)
 {
  if (FUNC_0(*VAR_2) >= 0 && FUNC_0(*VAR_3) >= 0)
   FUNC_2(VAR_0, "multidimensional arrays are not supported");

  if (FUNC_0(*VAR_2) >= 0)
   *VAR_3 = *VAR_2;

  *VAR_2 = VAR_4;
 }

 if (VAR_6 > 2)
  FUNC_2(VAR_0, FUNC_3("multilevel pointers (more than 2 levels) are not supported; found %d level",
           "multilevel pointers (more than 2 levels) are not supported; found %d levels", VAR_6),
    VAR_6);

 if (VAR_6 > 1 && VAR_1 != 133 && VAR_1 != 129 && VAR_1 != 132)
  FUNC_2(VAR_0, "pointer to pointer is not supported for this data type");

 if (VAR_6 > 1 && (FUNC_0(*VAR_3) >= 0 || FUNC_0(*VAR_2) >= 0))
  FUNC_2(VAR_0, "multidimensional arrays are not supported");

 if (FUNC_0(*VAR_3) >= 0 && FUNC_0(*VAR_2) >= 0 && VAR_6)
  FUNC_2(VAR_0, "multidimensional arrays are not supported");

 switch (VAR_1)
 {
  case 131:
  case 130:

   if (VAR_6)
   {
    *VAR_3 = *VAR_2;
    *VAR_2 = FUNC_1("0");
   }

   if (FUNC_0(*VAR_3) >= 0)
    FUNC_2(VAR_0, "multidimensional arrays for structures are not supported");

   break;
  case 128:
  case 134:

   if (VAR_6)
    *VAR_2 = FUNC_1("0");


   if (FUNC_0(*VAR_3) < 0)
   {
    *VAR_3 = *VAR_2;
    *VAR_2 = FUNC_1("-1");
   }

   break;
  case 133:
  case 129:
  case 132:

   if (VAR_6 == 2)
   {
    *VAR_3 = *VAR_2 = FUNC_1("0");
    break;
   }


   if (VAR_6 == 1)
    *VAR_3 = FUNC_1("0");


   if (FUNC_0(*VAR_3) < 0)
   {




    if (FUNC_0(*VAR_2) < 0 && !VAR_7)





     *VAR_3 = FUNC_1("1");
    else if (FUNC_4(*VAR_2, "0") == 0)
     *VAR_3 = FUNC_1("-1");
    else
     *VAR_3 = *VAR_2;

    *VAR_2 = FUNC_1("-1");
   }
   break;
  default:

   if (VAR_6)
   {
    *VAR_3 = *VAR_2;
    *VAR_2 = FUNC_1("0");
   }

   if (FUNC_0(*VAR_3) >= 0)
    FUNC_2(VAR_0, "multidimensional arrays for simple data types are not supported");

   break;
 }
}
