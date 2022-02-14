
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,int ,int) ;

BOOL FUNC_7(LPCWSTR VAR_4, LPWSTR VAR_5, LPCWSTR VAR_6, DWORD VAR_7, int* VAR_8)
{
        static const WCHAR VAR_9[] = {'\\','D','e','f','a','u','l','t','I','c','o','n',0};
 HKEY VAR_10;
 WCHAR VAR_11[VAR_3];
 BOOL VAR_12 = VAR_0;

 FUNC_3("%s\n",FUNC_4(VAR_4) );

 FUNC_6(VAR_11, VAR_4, VAR_3);
 FUNC_5(VAR_11, VAR_9);

 if (!FUNC_2(VAR_1, VAR_11, 0, VAR_2, &VAR_10))
 {
   VAR_12 = FUNC_0(VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
   FUNC_1(VAR_10);
 }

        if(VAR_12)
            FUNC_3("-- %s %i\n", FUNC_4(VAR_5), *VAR_8);
        else
            FUNC_3("-- not found\n");

 return VAR_12;
}
