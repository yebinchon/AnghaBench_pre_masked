
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LSTATUS ;
typedef int HKEY ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,...) ;
 int FUNC_8 (int *,int *,int **,int **) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(int VAR_10, WCHAR* VAR_11[]) {
    HKEY VAR_12, VAR_13;
    LSTATUS VAR_14;
    WCHAR* VAR_15, *VAR_16;

    if (VAR_10 < 4 || VAR_10 > 5) goto error;

    if (!FUNC_8(VAR_11[2], &VAR_12, &VAR_15, &VAR_16))
        return 1;

    if (FUNC_1(VAR_11[3]) != VAR_1)
    {
        if (VAR_10 == 5 && !FUNC_10(VAR_11[4], L"/y"))
        {
            FUNC_0(VAR_11[3]);
        }
        else
        {
            if (FUNC_5(VAR_8, VAR_11[3]))
                FUNC_0(VAR_11[3]);
        }
    }

    if (FUNC_3(VAR_12, VAR_15, 0, VAR_2, &VAR_13))
    {
        FUNC_7(VAR_6);
        return 1;
    }

    if (!FUNC_9(VAR_4, VAR_9)) return 1;

    VAR_14 = FUNC_4(VAR_13, VAR_11[3], ((void*)0), VAR_3);
    FUNC_2(VAR_13);

    if (VAR_14 != VAR_0) {
        FUNC_6(VAR_14);
        return 1;
    }

    return 0;

error:
    FUNC_7(VAR_7);
    FUNC_7(VAR_5, FUNC_11(VAR_11[1]));
    return 1;
}
