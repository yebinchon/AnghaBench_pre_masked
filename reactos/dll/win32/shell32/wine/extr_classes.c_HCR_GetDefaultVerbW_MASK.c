
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (int ,int ,char*,int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*,int ) ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;

BOOL FUNC_9( HKEY VAR_7, LPCWSTR VAR_8, LPWSTR VAR_9, DWORD VAR_10 )
{
        WCHAR VAR_11[VAR_2];
        LONG VAR_12;
        HKEY VAR_13;

 FUNC_4("%p %s %p\n", VAR_7, FUNC_5(VAR_8), VAR_9);

        if (VAR_8 && *VAR_8)
        {
            FUNC_8(VAR_9, VAR_8, VAR_10);
            return VAR_3;
        }

        VAR_12=VAR_10;
        *VAR_9='\0';
        if (!FUNC_3(VAR_7, VAR_6, VAR_9, &VAR_12) && *VAR_9)
        {

            FUNC_7(VAR_11, VAR_6);
            FUNC_6(VAR_11, VAR_9);
            FUNC_6(VAR_11, VAR_4);
            if (!FUNC_2(VAR_7, VAR_11, 0, VAR_1, &VAR_13))
            {
                FUNC_0(VAR_13);
                FUNC_4("default verb=%s\n", FUNC_5(VAR_9));
                return VAR_3;
            }
        }


        FUNC_7(VAR_11, VAR_6);
        FUNC_6(VAR_11, VAR_5);
        FUNC_6(VAR_11, VAR_4);
        if (!FUNC_2(VAR_7, VAR_11, 0, VAR_1, &VAR_13))
        {
            FUNC_0(VAR_13);
            FUNC_8(VAR_9, VAR_5, VAR_10);
            FUNC_4("default verb=open\n");
            return VAR_3;
        }
        if (!FUNC_1(VAR_7, 0, VAR_9, VAR_10) && *VAR_9)
        {
            FUNC_4("default verb=first verb=%s\n", FUNC_5(VAR_9));
            return VAR_3;
        }


        FUNC_4("no default verb!\n");
 return VAR_0;
}
