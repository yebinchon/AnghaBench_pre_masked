
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LRESULT ;
typedef int LPWSTR ;
typedef scalar_t__ LPDWORD ;
typedef char* LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ,int *,int ,int,int *,int *,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static LRESULT FUNC_8(HKEY *VAR_5, LPDWORD VAR_6, LPCWSTR VAR_7)
{
    LONG VAR_8;
    static const WCHAR VAR_9[] = {'S','o','f','t','w','a','r','e','\\',
        'M','i','c','r','o','s','o','f','t','\\',
        'W','i','n','d','o','w','s','\\',
        'C','u','r','r','e','n','t','V','e','r','s','i','o','n','\\',
        'A','p','p','l','e','t','s','\\',
        'W','o','r','d','p','a','d',0};
        LPWSTR VAR_10 = (LPWSTR)VAR_9;

        if(VAR_7)
        {
            WCHAR VAR_11[] = {'\\',0};
            VAR_10 = FUNC_1(FUNC_0(), VAR_0,
                            (FUNC_7(VAR_9)+FUNC_7(VAR_7)+FUNC_7(VAR_11)+1)
                                    *sizeof(WCHAR));

            if(!VAR_10)
                return 1;

            FUNC_6(VAR_10, VAR_9);
            FUNC_5(VAR_10, VAR_11);
            FUNC_5(VAR_10, VAR_7);
        }

        if(VAR_6)
        {
            VAR_8 = FUNC_3(VAR_1, VAR_10, 0, ((void*)0), VAR_4,
                                  VAR_2 | VAR_3, ((void*)0), VAR_5, VAR_6);
        } else
        {
            VAR_8 = FUNC_4(VAR_1, VAR_10, 0, VAR_2 | VAR_3, VAR_5);
        }

        if(VAR_7)
            FUNC_2(FUNC_0(), 0, VAR_10);

        return VAR_8;
}
