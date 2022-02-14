
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SV ;
typedef int HV ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;
 int ** FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static SV *
FUNC_7(SV *VAR_3)
{
 VAR_2;

 if (FUNC_0(VAR_3) && FUNC_1(VAR_3))
 {
  if (FUNC_3(FUNC_2(VAR_3)) == VAR_1)
   return VAR_3;
  else if (FUNC_6(VAR_3, "PostgreSQL::InServer::ARRAY"))
  {
   HV *VAR_4 = (HV *) FUNC_2(VAR_3);
   SV **VAR_5 = FUNC_5(VAR_4, "array");

   if (*VAR_5 && FUNC_0(*VAR_5) && FUNC_1(*VAR_5) &&
    FUNC_3(FUNC_2(*VAR_5)) == VAR_1)
    return *VAR_5;

   FUNC_4(VAR_0, "could not get array reference from PostgreSQL::InServer::ARRAY object");
  }
 }
 return ((void*)0);
}
