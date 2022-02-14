
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGconn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2(PGconn *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);


 FUNC_1(VAR_0, "SET search_path = pg_catalog");
 FUNC_1(VAR_0, "SET timezone = 'UTC'");






 FUNC_1(VAR_0, "SET datestyle = ISO");
 if (VAR_1 >= 80400)
  FUNC_1(VAR_0, "SET intervalstyle = postgres");
 if (VAR_1 >= 90000)
  FUNC_1(VAR_0, "SET extra_float_digits = 3");
 else
  FUNC_1(VAR_0, "SET extra_float_digits = 2");
}
