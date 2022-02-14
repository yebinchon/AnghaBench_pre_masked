
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,...) ;
 int FUNC_9 (int *,int *,int **,int **) ;
 int FUNC_10 (int *) ;

int FUNC_11(int VAR_5, WCHAR *VAR_6[])
{
    HKEY VAR_7, VAR_8;
    WCHAR *VAR_9, *VAR_10;
    BOOL VAR_11 = VAR_0;
    HANDLE VAR_12;
    int VAR_13;

    if (VAR_5 == 3 || VAR_5 > 5)
        goto error;

    if (!FUNC_9(VAR_6[2], &VAR_7, &VAR_9, &VAR_10))
        return 1;

    if (VAR_5 == 5 && !(VAR_11 = FUNC_7(VAR_6[4])))
        goto error;

    if (FUNC_2(VAR_7, VAR_9, 0, VAR_1, &VAR_8))
    {
        FUNC_8(VAR_3);
        return 1;
    }

    VAR_12 = FUNC_6(VAR_6[3], VAR_11);
    FUNC_3(VAR_12);
    VAR_13 = FUNC_5(VAR_12, VAR_8, VAR_10);
    FUNC_4(VAR_12);
    FUNC_0(VAR_12);

    FUNC_1(VAR_8);

    return VAR_13;

error:
    FUNC_8(VAR_4);
    FUNC_8(VAR_2, FUNC_10(VAR_6[1]));
    return 1;
}
