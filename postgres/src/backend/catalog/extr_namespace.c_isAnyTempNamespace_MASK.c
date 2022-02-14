
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;

bool
FUNC_3(Oid VAR_0)
{
 bool VAR_1;
 char *VAR_2;


 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return 0;
 VAR_1 = (FUNC_2(VAR_2, "pg_temp_", 8) == 0) ||
  (FUNC_2(VAR_2, "pg_toast_temp_", 14) == 0);
 FUNC_1(VAR_2);
 return VAR_1;
}
