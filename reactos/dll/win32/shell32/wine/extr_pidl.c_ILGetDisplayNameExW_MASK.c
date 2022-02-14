
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int STRRET ;
typedef int LPWSTR ;
typedef int LPVOID ;
typedef scalar_t__ LPSHELLFOLDER ;
typedef scalar_t__ LPCITEMIDLIST ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;



 int FUNC_2 (scalar_t__,scalar_t__,int,int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__,int *,int *,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__,int ,...) ;
 int FUNC_9 (int ) ;

BOOL FUNC_10(LPSHELLFOLDER VAR_9, LPCITEMIDLIST VAR_10, LPWSTR VAR_11, DWORD VAR_12)
{
    LPSHELLFOLDER VAR_13, VAR_14 = VAR_9;
    HRESULT VAR_15 = VAR_4;
    LPCITEMIDLIST VAR_16;
    STRRET VAR_17;
    DWORD VAR_18;

    FUNC_8("%p %p %p %x\n", VAR_9, VAR_10, VAR_11, VAR_12);

    if (!VAR_10 || !VAR_11)
        return VAR_1;

    if (!VAR_14)
    {
        VAR_15 = FUNC_5(&VAR_14);
        if (FUNC_0(VAR_15))
            return VAR_1;
    }

    switch (VAR_12)
    {
    case 130:
        VAR_18 = VAR_6 | VAR_5;
        break;
    case 128:
        VAR_18 = VAR_8;
        break;
    case 129:
        VAR_18 = VAR_7;
        break;
    default:
        FUNC_1("Unknown type parameter = %x\n", VAR_12);
        VAR_18 = VAR_6 | VAR_5;
        break;
    }

    if (!*(const WORD*)VAR_10 || VAR_12 == 130)
    {
        VAR_15 = FUNC_2(VAR_14, VAR_10, VAR_18, &VAR_17);
        if (FUNC_6(VAR_15))
        {
            if(!FUNC_7(VAR_11, VAR_3, &VAR_17, VAR_10))
                VAR_15 = VAR_0;
        }
    }
    else
    {
        VAR_15 = FUNC_4(VAR_10, &VAR_2, (LPVOID*)&VAR_13, &VAR_16);
        if (FUNC_6(VAR_15))
        {
            VAR_15 = FUNC_2(VAR_13, VAR_16, VAR_18, &VAR_17);
            if (FUNC_6(VAR_15))
            {
                if(!FUNC_7(VAR_11, VAR_3, &VAR_17, VAR_16))
                    VAR_15 = VAR_0;
            }
            FUNC_3(VAR_13);
        }
    }

    FUNC_8("%p %p %s\n", VAR_9, VAR_10, FUNC_9(VAR_11));

    if (!VAR_9)
        FUNC_3(VAR_14);
    return FUNC_6(VAR_15);
}
