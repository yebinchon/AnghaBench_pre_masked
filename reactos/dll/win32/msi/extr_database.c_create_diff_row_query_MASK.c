
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIQUERY ;
typedef int MSIDATABASE ;
typedef char const* LPWSTR ;
typedef char const* LPCWSTR ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,TYPE_1__**) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (TYPE_1__*,scalar_t__) ;
 char* FUNC_3 (int *,char const*,TYPE_1__*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char const*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*,char const*,char const*,char const*) ;

__attribute__((used)) static LPWSTR FUNC_11(MSIDATABASE *VAR_1, MSIQUERY *VAR_2,
                                    LPWSTR VAR_3, MSIRECORD *VAR_4)
{
    LPWSTR VAR_5 = ((void*)0), VAR_6 = ((void*)0), VAR_7;
    LPCWSTR VAR_8, VAR_9;
    DWORD VAR_10, VAR_11;
    MSIRECORD *VAR_12;
    UINT VAR_13, VAR_14, VAR_15;

    static const WCHAR VAR_16[] = {
        '`','%','s','`',' ','=',' ','%','s',' ','A','N','D',' ',0};
    static const WCHAR VAR_17[] = {
        '`','%','s','`',' ','=',' ','%','s',' ',0};
    static const WCHAR VAR_18[] = {'S','E','L','E','C','T',' ','*',' ',
        'F','R','O','M',' ','`','%','s','`',' ',
        'W','H','E','R','E',' ','%','s',0};

    VAR_13 = FUNC_0(VAR_1, VAR_3, &VAR_12);
    if (VAR_13 != VAR_0)
        return ((void*)0);

    VAR_6 = FUNC_6(sizeof(WCHAR));
    if (!VAR_6)
        goto done;

    VAR_10 = 1;
    VAR_15 = FUNC_1(VAR_12);
    for (VAR_14 = 1; VAR_14 <= VAR_15; VAR_14++)
    {
        VAR_9 = FUNC_2(VAR_12, VAR_14);
        VAR_7 = FUNC_3(VAR_2, VAR_9, VAR_4);

        if (VAR_14 == VAR_15)
            VAR_8 = VAR_17;
        else
            VAR_8 = VAR_16;

        VAR_11 = VAR_10;
        VAR_10 += FUNC_4(VAR_8) + FUNC_4(VAR_9) + FUNC_4(VAR_7) - 4;
        VAR_6 = FUNC_8(VAR_6, VAR_10 * sizeof (WCHAR));
        if (!VAR_6)
        {
            FUNC_7(VAR_7);
            goto done;
        }

        FUNC_10(VAR_6 + VAR_11 - 1, VAR_8, VAR_9, VAR_7);
        FUNC_7(VAR_7);
    }

    VAR_10 = FUNC_4(VAR_18) + FUNC_4(VAR_3) + FUNC_4(VAR_6) + 1;
    VAR_5 = FUNC_5(VAR_10 * sizeof(WCHAR));
    if (!VAR_5)
        goto done;

    FUNC_10(VAR_5, VAR_18, VAR_3, VAR_6);

done:
    FUNC_7(VAR_6);
    FUNC_9(&VAR_12->hdr);
    return VAR_5;
}
