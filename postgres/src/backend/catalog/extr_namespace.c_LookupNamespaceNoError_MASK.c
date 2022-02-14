
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

Oid
FUNC_4(const char *VAR_2)
{

 if (FUNC_3(VAR_2, "pg_temp") == 0)
 {
  if (FUNC_1(VAR_1))
  {
   FUNC_0(VAR_1, 1);
   return VAR_1;
  }






  return VAR_0;
 }

 return FUNC_2(VAR_2, 1);
}
