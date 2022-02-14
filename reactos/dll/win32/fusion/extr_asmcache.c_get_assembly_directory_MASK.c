
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int PEKIND ;
typedef int LPWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,char const*) ;




 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static BOOL FUNC_5(LPWSTR VAR_2, DWORD VAR_3, const char *VAR_4, PEKIND VAR_5)
{
    static const WCHAR VAR_6[] = {'\\','M','i','c','r','o','s','o','f','t','.','N','E','T','\\',0};
    static const WCHAR VAR_7[] = {'\\','a','s','s','e','m','b','l','y','\\','G','A','C',0};
    static const WCHAR VAR_8[] = {'_','M','S','I','L',0};
    static const WCHAR VAR_9[] = {'_','3','2',0};
    static const WCHAR VAR_10[] = {'_','6','4',0};
    DWORD VAR_11 = FUNC_1(VAR_2, VAR_3);

    if (!FUNC_4(VAR_4, "v4.0.30319"))
    {
        FUNC_3(VAR_2 + VAR_11, VAR_6);
        VAR_11 += FUNC_0(VAR_6) - 1;
        FUNC_3(VAR_2 + VAR_11, VAR_7 + 1);
        VAR_11 += FUNC_0(VAR_7) - 2;
    }
    else
    {
        FUNC_3(VAR_2 + VAR_11, VAR_7);
        VAR_11 += FUNC_0(VAR_7) - 1;
    }
    switch (VAR_5)
    {
        case 128:
            break;

        case 129:
            FUNC_3(VAR_2 + VAR_11, VAR_8);
            break;

        case 130:
            FUNC_3(VAR_2 + VAR_11, VAR_9);
            break;

        case 131:
            FUNC_3(VAR_2 + VAR_11, VAR_10);
            break;

        default:
            FUNC_2("unhandled architecture %u\n", VAR_5);
            return VAR_0;
    }
    return VAR_1;
}
