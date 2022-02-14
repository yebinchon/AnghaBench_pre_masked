
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,scalar_t__) ;
 int FUNC_5 (int ,int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(HKEY VAR_6, WCHAR *VAR_7, WCHAR *VAR_8, WCHAR *VAR_9,
                     BOOL VAR_10, BOOL VAR_11)
{
    HKEY VAR_12;
    int VAR_13;

    if (FUNC_1(VAR_6, VAR_7, 0, VAR_1, &VAR_12) != VAR_0)
    {
        FUNC_2(VAR_2);
        return 1;
    }

    FUNC_3(VAR_4);

    if (VAR_9 || VAR_10)
    {
        VAR_13 = FUNC_5(VAR_12, VAR_9, VAR_8, VAR_11);
        if (VAR_11)
            FUNC_2(VAR_3, VAR_5);
    }
    else
        VAR_13 = FUNC_4(VAR_12, VAR_8, VAR_11);

    FUNC_0(VAR_12);

    return VAR_13;
}
