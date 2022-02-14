
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef int* LPCWSTR ;
typedef int INT ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,char*,int*,int*,int,int*) ;
 scalar_t__ FUNC_3 (int*,int*,scalar_t__) ;
 scalar_t__ FUNC_4 (int*,scalar_t__,int*,int**) ;
 int VAR_0 ;
 int* FUNC_5 (int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int*) ;

__attribute__((used)) static BOOL
FUNC_8(
    LPCWSTR VAR_1,
    LPCWSTR VAR_2,
    LPCWSTR VAR_3,
    LPCWSTR VAR_4,
    INT VAR_5,
    LPCWSTR VAR_6)
{
    DWORD VAR_7;
    LPWSTR VAR_8;
    LPWSTR VAR_9;
    WCHAR VAR_10[VAR_0];
    WCHAR VAR_11[VAR_0];


    if (VAR_6 == ((void*)0) || VAR_6[0] == L'\0')
    {
        if (FUNC_3(VAR_3, VAR_10, FUNC_0(VAR_10)) == 0)
            FUNC_7(VAR_10, VAR_3);

        VAR_7 = FUNC_4(VAR_10,
                                 FUNC_0(VAR_11),
                                 VAR_11,
                                 &VAR_9);
        if (VAR_7 != 0 && VAR_7 <= FUNC_0(VAR_11))
        {


            FUNC_1(VAR_9 != ((void*)0));




            *(VAR_9--) = L'\0';
            if (!(VAR_9 - VAR_11 == 2 &&
                  VAR_11[1] == L':' && VAR_11[2] == L'\\'))
            {
                *VAR_9 = L'\0';
            }
            VAR_6 = VAR_11;
        }
    }


    if (VAR_6 && VAR_6[0] == L'\0')
        VAR_6 = ((void*)0);


    FUNC_7(VAR_10, VAR_1);
    VAR_8 = FUNC_5(VAR_10);
    FUNC_7(VAR_8, VAR_2);


    return FUNC_6(FUNC_2(VAR_10,
                                     VAR_3,
                                     L"",
                                     VAR_6,

                                     (VAR_5 != -1 ? VAR_3 : ((void*)0)),
                                     VAR_5,
                                     VAR_4));
}
