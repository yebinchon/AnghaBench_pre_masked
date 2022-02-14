
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LSTATUS ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (int *,int *,int **,int **) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(int VAR_8, WCHAR* VAR_9[])
{
    HKEY VAR_10, VAR_11;
    LSTATUS VAR_12;
    WCHAR* VAR_13, * VAR_14;

    if (VAR_8 != 4) goto error;

    if (!FUNC_5(VAR_9[2], &VAR_10, &VAR_13, &VAR_14))
        return 1;

    if (FUNC_1(VAR_10, VAR_13, 0, VAR_1, &VAR_11))
    {
        FUNC_4(VAR_5);
        return 1;
    }

    if (!FUNC_6(VAR_2, VAR_7)) return 1;
    if (!FUNC_6(VAR_3, VAR_7)) return 1;

    VAR_12 = FUNC_2(VAR_11, VAR_9[3], 0);
    FUNC_0(VAR_11);

    if (VAR_12 != VAR_0) {
        FUNC_3(VAR_12);
        return 1;
    }

    return 0;

error:
    FUNC_4(VAR_6);
    FUNC_4(VAR_4, FUNC_7(VAR_9[1]));
    return 1;
}
