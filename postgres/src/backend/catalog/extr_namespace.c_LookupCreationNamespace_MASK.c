
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,char const*) ;
 int FUNC_3 (char const*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

Oid
FUNC_6(const char *VAR_4)
{
 Oid VAR_5;
 AclResult VAR_6;


 if (FUNC_5(VAR_4, "pg_temp") == 0)
 {

  FUNC_0(0);
  return VAR_3;
 }

 VAR_5 = FUNC_3(VAR_4, 0);

 VAR_6 = FUNC_4(VAR_5, FUNC_1(), VAR_1);
 if (VAR_6 != VAR_0)
  FUNC_2(VAR_6, VAR_2,
        VAR_4);

 return VAR_5;
}
