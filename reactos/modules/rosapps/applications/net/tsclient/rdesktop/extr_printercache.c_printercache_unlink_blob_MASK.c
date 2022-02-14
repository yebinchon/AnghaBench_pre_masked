
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static BOOL
FUNC_7(char *VAR_2)
{
 char *VAR_3;
 char *VAR_4;

 if (VAR_2 == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_0("HOME");
 if (VAR_4 == ((void*)0))
  return VAR_0;

 VAR_3 = (char *) FUNC_6(FUNC_3(VAR_4) + sizeof("/.rdesktop/rdpdr/") + FUNC_3(VAR_2) +
    sizeof("/AutoPrinterCacheData") + 1);

 FUNC_2(VAR_3, "%s/.rdesktop/rdpdr/%s/AutoPrinterCacheData", VAR_4, VAR_2);

 if (FUNC_4(VAR_3) < 0)
 {
  FUNC_5(VAR_3);
  return VAR_0;
 }

 FUNC_2(VAR_3, "%s/.rdesktop/rdpdr/%s", VAR_4, VAR_2);

 if (FUNC_1(VAR_3) < 0)
 {
  FUNC_5(VAR_3);
  return VAR_0;
 }

 FUNC_5(VAR_3);
 return VAR_1;
}
