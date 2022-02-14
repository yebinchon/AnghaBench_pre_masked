
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regsvr_category {int * clsid; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int,int *) ;
 int VAR_6 ;
 int FUNC_4 (int *,int *,int) ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static HRESULT FUNC_5(const struct regsvr_category *VAR_9)
{
    LONG VAR_10;
    WCHAR VAR_11[39];
    HKEY VAR_12, VAR_13, VAR_14;

    VAR_10 = FUNC_3(VAR_3, VAR_7, 0,
                        VAR_4 | VAR_5, &VAR_12);
    if (VAR_10 != VAR_2) return FUNC_0(VAR_10);

    FUNC_4(&VAR_0, VAR_11, 39);
    VAR_10 = FUNC_3(VAR_12, VAR_11, 0,
                        VAR_4 | VAR_5, &VAR_13);
    if (VAR_10 != VAR_2)
    {
        if (VAR_10 == VAR_1) VAR_10 = VAR_2;
        FUNC_1(VAR_12);
        return FUNC_0(VAR_10);
    }

    VAR_10 = FUNC_3(VAR_13, VAR_8, 0,
                          VAR_4 | VAR_5, &VAR_14);

    for (; VAR_10 == VAR_2 && VAR_9->clsid; VAR_9++)
    {
        FUNC_4(VAR_9->clsid, VAR_11, 39);
        VAR_10 = FUNC_2(VAR_14, VAR_11);
    }

    FUNC_1(VAR_14);
    FUNC_1(VAR_13);

    FUNC_4(&VAR_0, VAR_11, 39);
    VAR_10 = FUNC_2(VAR_12, VAR_11);

    FUNC_1(VAR_12);

    return VAR_10 != VAR_2 ? FUNC_0(VAR_10) : VAR_6;
}
