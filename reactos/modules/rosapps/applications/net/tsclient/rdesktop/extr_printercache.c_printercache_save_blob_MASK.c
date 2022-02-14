
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,int *,int ) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(char *VAR_3, uint8 * VAR_4, uint32 VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_3 == ((void*)0))
  return;

 VAR_6 = FUNC_1("HOME");
 if (VAR_6 == ((void*)0))
  return;

 if (!FUNC_4(VAR_6, VAR_3))
  return;

 VAR_7 = (char *) FUNC_10(FUNC_6(VAR_6) + sizeof("/.rdesktop/rdpdr/") + FUNC_6(VAR_3) +
    sizeof("/AutoPrinterCacheData") + 1);
 FUNC_5(VAR_7, "%s/.rdesktop/rdpdr/%s/AutoPrinterCacheData", VAR_6, VAR_3);

 VAR_8 = FUNC_2(VAR_7, VAR_2 | VAR_0 | VAR_1, 0600);
 if (VAR_8 == -1)
 {
  FUNC_3(VAR_7);
  FUNC_9(VAR_7);
  return;
 }

 if (FUNC_8(VAR_8, VAR_4, VAR_5) != VAR_5)
 {
  FUNC_3(VAR_7);
  FUNC_7(VAR_7);
 }

 FUNC_0(VAR_8);
 FUNC_9(VAR_7);
}
