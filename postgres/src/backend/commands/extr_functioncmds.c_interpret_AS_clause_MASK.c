
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int List ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(Oid VAR_5, const char *VAR_6,
     char *VAR_7, List *VAR_8,
     char **VAR_9, char **VAR_10)
{
 FUNC_0(VAR_8 != VAR_4);

 if (VAR_5 == VAR_0)
 {
  *VAR_10 = FUNC_7(FUNC_4(VAR_8));
  if (FUNC_5(VAR_8) == 1)
   *VAR_9 = VAR_7;
  else
  {
   *VAR_9 = FUNC_7(FUNC_6(VAR_8));
   if (FUNC_8(*VAR_9, "-") == 0)
    *VAR_9 = VAR_7;
  }
 }
 else
 {

  *VAR_9 = FUNC_7(FUNC_4(VAR_8));
  *VAR_10 = ((void*)0);

  if (FUNC_5(VAR_8) != 1)
   FUNC_1(VAR_2,
     (FUNC_2(VAR_1),
      FUNC_3("only one AS item needed for language \"%s\"",
       VAR_6)));

  if (VAR_5 == VAR_3)
  {
   if (FUNC_9(*VAR_9) == 0)
    *VAR_9 = VAR_7;
  }
 }
}
