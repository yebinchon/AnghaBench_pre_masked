
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct stat {int st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,int *,int) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int) ;

int
FUNC_9(char *VAR_1, uint8 ** VAR_2)
{
 char *VAR_3, *VAR_4;
 struct stat VAR_5;
 int VAR_6, VAR_7;

 if (VAR_1 == ((void*)0))
  return 0;

 *VAR_2 = ((void*)0);

 VAR_3 = FUNC_2("HOME");
 if (VAR_3 == ((void*)0))
  return 0;

 VAR_4 = (char *) FUNC_8(FUNC_6(VAR_3) + sizeof("/.rdesktop/rdpdr/") + FUNC_6(VAR_1) +
    sizeof("/AutoPrinterCacheData") + 1);
 FUNC_5(VAR_4, "%s/.rdesktop/rdpdr/%s/AutoPrinterCacheData", VAR_3, VAR_1);

 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_6 == -1)
 {
  FUNC_7(VAR_4);
  return 0;
 }

 if (FUNC_1(VAR_6, &VAR_5))
 {
  FUNC_7(VAR_4);
  FUNC_0(VAR_6);
  return 0;
 }

 *VAR_2 = (uint8 *) FUNC_8(VAR_5.st_size);
 VAR_7 = FUNC_4(VAR_6, *VAR_2, VAR_5.st_size);
 FUNC_0(VAR_6);
 FUNC_7(VAR_4);
 return VAR_7;
}
