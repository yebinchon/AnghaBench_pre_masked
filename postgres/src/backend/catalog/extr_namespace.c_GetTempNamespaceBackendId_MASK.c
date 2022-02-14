
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

int
FUNC_4(Oid VAR_1)
{
 int VAR_2;
 char *VAR_3;


 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return VAR_0;
 if (FUNC_3(VAR_3, "pg_temp_", 8) == 0)
  VAR_2 = FUNC_0(VAR_3 + 8);
 else if (FUNC_3(VAR_3, "pg_toast_temp_", 14) == 0)
  VAR_2 = FUNC_0(VAR_3 + 14);
 else
  VAR_2 = VAR_0;
 FUNC_2(VAR_3);
 return VAR_2;
}
