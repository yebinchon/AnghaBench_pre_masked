
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQEnvironmentOption ;
typedef int PGconn ;


 int FUNC_0 (int *,char*,int const*) ;
 scalar_t__ FUNC_1 (int) ;

char *
FUNC_2(PGconn *VAR_0, int *VAR_1,
       const PQEnvironmentOption *VAR_2)
{
 char *VAR_3;

 *VAR_1 = FUNC_0(VAR_0, ((void*)0), VAR_2);
 VAR_3 = (char *) FUNC_1(*VAR_1);
 if (!VAR_3)
  return ((void*)0);
 *VAR_1 = FUNC_0(VAR_0, VAR_3, VAR_2);
 return VAR_3;
}
