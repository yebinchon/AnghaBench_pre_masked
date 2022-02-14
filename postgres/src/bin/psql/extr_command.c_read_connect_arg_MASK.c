
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PsqlScanState ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static char *
FUNC_3(PsqlScanState VAR_1)
{
 char *VAR_2;
 char VAR_3;
 VAR_2 = FUNC_1(VAR_1, VAR_0, &VAR_3, 1);

 if (!VAR_2)
  return ((void*)0);

 if (VAR_3)
  return VAR_2;

 if (*VAR_2 == '\0' || FUNC_2(VAR_2, "-") == 0)
 {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
