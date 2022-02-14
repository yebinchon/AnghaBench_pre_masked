
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GucSource ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (int) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 char* FUNC_10 (char const*) ;

bool
FUNC_11(char **VAR_1, void **VAR_2, GucSource VAR_3)
{
 int VAR_4;
 const char *VAR_5;


 VAR_4 = FUNC_8(*VAR_1);
 if (VAR_4 < 0)
  return 0;


 VAR_5 = FUNC_7(VAR_4);
 if (FUNC_4(VAR_4) < 0)
 {
  if (FUNC_3())
  {

   FUNC_0(VAR_0);
   FUNC_1("Conversion between %s and %s is not supported.",
        VAR_5,
        FUNC_2());
  }
  else
  {

   FUNC_1("Cannot change \"client_encoding\" now.");
  }
  return 0;
 }
 if (FUNC_9(*VAR_1, VAR_5) != 0 &&
  FUNC_9(*VAR_1, "UNICODE") != 0)
 {
  FUNC_5(*VAR_1);
  *VAR_1 = FUNC_10(VAR_5);
  if (!*VAR_1)
   return 0;
 }




 *VAR_2 = FUNC_6(sizeof(int));
 if (!*VAR_2)
  return 0;
 *((int *) *VAR_2) = VAR_4;

 return 1;
}
