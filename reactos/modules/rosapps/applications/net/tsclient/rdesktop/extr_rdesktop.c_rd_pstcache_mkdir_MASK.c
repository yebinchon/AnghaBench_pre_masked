
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;

BOOL
FUNC_4(void)
{
 char *VAR_5;
 char VAR_6[256];

 VAR_5 = FUNC_0("HOME");

 if (VAR_5 == ((void*)0))
  return VAR_1;

 FUNC_3(VAR_6, "%s/%s", VAR_5, ".rdesktop");

 if ((FUNC_1(VAR_6, VAR_2) == -1) && VAR_4 != VAR_0)
 {
  FUNC_2(VAR_6);
  return VAR_1;
 }

 FUNC_3(VAR_6, "%s/%s", VAR_5, ".rdesktop/cache");

 if ((FUNC_1(VAR_6, VAR_2) == -1) && VAR_4 != VAR_0)
 {
  FUNC_2(VAR_6);
  return VAR_1;
 }

 return VAR_3;
}
