
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,char const*) ;
 int FUNC_4 (char const*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

Oid
FUNC_7(const char *VAR_5, bool VAR_6)
{
 Oid VAR_7;
 AclResult VAR_8;


 if (FUNC_6(VAR_5, "pg_temp") == 0)
 {
  if (FUNC_2(VAR_4))
   return VAR_4;






 }

 VAR_7 = FUNC_4(VAR_5, VAR_6);
 if (VAR_6 && !FUNC_2(VAR_7))
  return VAR_2;

 VAR_8 = FUNC_5(VAR_7, FUNC_0(), VAR_1);
 if (VAR_8 != VAR_0)
  FUNC_3(VAR_8, VAR_3,
        VAR_5);

 FUNC_1(VAR_7, 1);

 return VAR_7;
}
