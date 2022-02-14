
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pg_tz ;
typedef int GucSource ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;

bool
FUNC_5(char **VAR_0, void **VAR_1, GucSource VAR_2)
{
 pg_tz *VAR_3;




 VAR_3 = FUNC_4(*VAR_0);

 if (!VAR_3)
 {

  return 0;
 }

 if (!FUNC_3(VAR_3))
 {
  FUNC_1("time zone \"%s\" appears to use leap seconds",
       *VAR_0);
  FUNC_0("PostgreSQL does not support leap seconds.");
  return 0;
 }




 *VAR_1 = FUNC_2(sizeof(pg_tz *));
 if (!*VAR_1)
  return 0;
 *((pg_tz **) *VAR_1) = VAR_3;

 return 1;
}
