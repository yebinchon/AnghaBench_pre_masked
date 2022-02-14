
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_category {int * clsid; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int const*,int) ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int) ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static HRESULT FUNC_5(const struct regsvr_category *VAR_10)
{
    LONG VAR_11;
    WCHAR VAR_12[39];
    HKEY VAR_13, VAR_14, VAR_15;

    VAR_11 = FUNC_2(VAR_2, VAR_7, 0, ((void*)0), 0,
                          VAR_3 | VAR_4, ((void*)0), &VAR_13, ((void*)0));
    if (VAR_11 != VAR_1) return FUNC_0(VAR_11);

    FUNC_4(&VAR_0, VAR_12, 39);
    VAR_11 = FUNC_2(VAR_13, VAR_12, 0, ((void*)0), 0,
                          VAR_3 | VAR_4, ((void*)0), &VAR_14, ((void*)0));
    if (VAR_11 != VAR_1)
    {
        FUNC_1(VAR_13);
        return FUNC_0(VAR_11);
    }

    VAR_11 = FUNC_2(VAR_14, VAR_9, 0, ((void*)0), 0,
                          VAR_3 | VAR_4, ((void*)0), &VAR_15, ((void*)0));

    for (; VAR_11 == VAR_1 && VAR_10->clsid; VAR_10++)
    {
        HKEY VAR_16;

        FUNC_4(VAR_10->clsid, VAR_12, 39);
        VAR_11 = FUNC_2(VAR_15, VAR_12, 0, ((void*)0), 0,
                              VAR_3 | VAR_4, ((void*)0), &VAR_16, ((void*)0));
        if (VAR_11 == VAR_1)
        {
            VAR_11 = FUNC_3(VAR_16, VAR_8, 0, VAR_5,
                                 (const BYTE *)VAR_12, 78);
            FUNC_1(VAR_16);
        }
    }

    FUNC_1(VAR_15);
    FUNC_1(VAR_14);
    FUNC_1(VAR_13);

    return VAR_11 != VAR_1 ? FUNC_0(VAR_11) : VAR_6;
}
