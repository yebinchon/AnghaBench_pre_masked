
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char const*,int ,int ,int *) ;
 int FUNC_3 (int,scalar_t__*,int *,int ,int *) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 char const* VAR_4 ;
 char const* VAR_5 ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
   static const WCHAR VAR_6[] = {'S','o','f','t','w','a','r','e','\\','O','D','B','C','\\','O','D','B','C','.','I','N','I','\\','w','i','n','e','o','d','b','c',0};
   BOOL VAR_7;
   LONG VAR_8;
   DWORD VAR_9;

   VAR_7 = FUNC_4("wineodbc", "testing" , "value", "");
   FUNC_5(!VAR_7, "SQLWritePrivateProfileString passed\n");
   FUNC_3(1, &VAR_9, ((void*)0), 0, ((void*)0));
   FUNC_5(VAR_9 == VAR_3, "SQLInstallerErrorW ret: %d\n", VAR_9);

   VAR_7 = FUNC_4("wineodbc", "testing" , "value", ((void*)0));
   FUNC_5(!VAR_7, "SQLWritePrivateProfileString passed\n");
   FUNC_3(1, &VAR_9, ((void*)0), 0, ((void*)0));
   FUNC_5(VAR_9 == VAR_3, "SQLInstallerErrorW ret: %d\n", VAR_9);

   VAR_7 = FUNC_4("wineodbc", "testing" , "value", "odbc.ini");
   FUNC_5(VAR_7, "SQLWritePrivateProfileString failed\n");
   if(VAR_7)
   {
        HKEY VAR_10;

        VAR_7 = FUNC_4("wineodbc", "testing" , ((void*)0), "odbc.ini");
        FUNC_5(VAR_7, "SQLWritePrivateProfileString failed\n");

        VAR_8 = FUNC_2(VAR_1, VAR_6, 0, VAR_2, &VAR_10);
        FUNC_5(VAR_8 == VAR_0, "RegOpenKeyExW failed\n");
        if(VAR_8 == VAR_0)
        {
            VAR_8 = FUNC_1(VAR_1, VAR_6);
            FUNC_5(VAR_8 == VAR_0, "RegDeleteKeyW failed\n");

            FUNC_0(VAR_10);
        }
   }

   VAR_7 = FUNC_4("wineodbc", "testing" , "value", "abcd.ini");
   FUNC_5(VAR_7, "SQLWritePrivateProfileString failed\n");
   if(VAR_7)
   {
        HKEY VAR_11;

        VAR_8 = FUNC_2(VAR_1, VAR_4, 0, VAR_2, &VAR_11);
        FUNC_5(VAR_8 == VAR_0, "RegOpenKeyExW failed\n");
        if(VAR_8 == VAR_0)
        {
            VAR_8 = FUNC_1(VAR_1, VAR_4);
            FUNC_5(VAR_8 == VAR_0, "RegDeleteKeyW failed\n");

            FUNC_0(VAR_11);
        }


        VAR_8 = FUNC_1(VAR_1, VAR_5);
        FUNC_5(VAR_8 == VAR_0, "RegDeleteKeyW failed\n");
   }
}
