
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ UCHAR ;
typedef int* PWSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int*,scalar_t__*) ;
 scalar_t__ FUNC_9 (int*,scalar_t__*) ;
 scalar_t__ FUNC_10 (int*,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_13 (int*,char*) ;
 scalar_t__ FUNC_14 (int*,char*,int) ;

int FUNC_15(int VAR_4, WCHAR **VAR_5)
{
    PWSTR VAR_6 = ((void*)0);
    PWSTR VAR_7 = ((void*)0);
    ULONG VAR_8 = (ULONG)-1;
    ULONG VAR_9 = (ULONG)-1;
    ULONG VAR_10 = (ULONG)-1;
    BOOL VAR_11 = VAR_0, VAR_12 = VAR_0;
    BOOL VAR_13 = VAR_0, VAR_14 = VAR_0;
    BOOL VAR_15 = VAR_0;
    ULONG VAR_16 = 0;
    UCHAR VAR_17 = 0;
    INT VAR_18 = 0;
    INT VAR_19, VAR_20;


    FUNC_1();

    if (!FUNC_6())
        return 1;


    VAR_19 = 1;
    VAR_20 = 1;
    if (VAR_19 < VAR_4 &&
        VAR_5[VAR_19][0] == L'\\' &&
        VAR_5[VAR_19][1] == L'\\')
    {
        VAR_6 = VAR_5[VAR_19];
        VAR_19++;
        VAR_20++;
    }


    if (VAR_19 < VAR_4 && VAR_5[VAR_19][0] != L'/')
    {
        if (FUNC_10(VAR_5[VAR_19], &VAR_9, &VAR_10))
        {
            VAR_19++;
            VAR_20++;
        }
        else if (FUNC_9(VAR_5[VAR_19], &VAR_8))
        {
            VAR_19++;
            VAR_20++;
        }
    }


    for (; VAR_19 < VAR_4; VAR_19++)
    {
        if (VAR_5[VAR_19][0] == L'/')
        {
            if (FUNC_13(VAR_5[VAR_19], L"/?") == 0)
            {
                VAR_15 = VAR_3;
                goto done;
            }
            else if (FUNC_13(VAR_5[VAR_19], L"/delete") == 0)
            {
                VAR_11 = VAR_3;
            }
            else if (FUNC_13(VAR_5[VAR_19], L"/yes") == 0)
            {
                VAR_12 = VAR_3;
            }
            else if (FUNC_13(VAR_5[VAR_19], L"/interactive") == 0)
            {
                VAR_13 = VAR_3;
            }
            else if (FUNC_14(VAR_5[VAR_19], L"/every:", 7) == 0)
            {
                VAR_14 = VAR_3;
                if (FUNC_7(&(VAR_5[VAR_19][7]), &VAR_16) == VAR_0)
                {
                    if (FUNC_8(&(VAR_5[VAR_19][7]), &VAR_17) == VAR_0)
                    {
                        VAR_16 = FUNC_5();
                    }
                }
            }
            else if (FUNC_14(VAR_5[VAR_19], L"/next:", 6) == 0)
            {
                VAR_14 = VAR_0;
                if (FUNC_7(&(VAR_5[VAR_19][6]), &VAR_16) == VAR_0)
                {
                    if (FUNC_8(&(VAR_5[VAR_19][6]), &VAR_17) == VAR_0)
                    {
                        VAR_16 = FUNC_5();
                    }
                }
            }
            else
            {
                VAR_15 = VAR_3;
                VAR_18 = 1;
                goto done;
            }
        }
    }


    if (VAR_4 > VAR_20 && VAR_5[VAR_4 - 1][0] != L'/')
    {
        VAR_7 = VAR_5[VAR_4 - 1];
    }

    if (VAR_11 == VAR_3)
    {

        if (VAR_13 == VAR_3 ||
            VAR_9 != (ULONG)-1 ||
            VAR_10 != (ULONG)-1 ||
            VAR_16 != 0 ||
            VAR_17 != 0 ||
            VAR_7 != ((void*)0))
        {
            VAR_15 = VAR_3;
            VAR_18 = 1;
            goto done;
        }

        VAR_18 = FUNC_3(VAR_6,
                            VAR_8,
                            VAR_12);
    }
    else
    {
        if (VAR_9 != (ULONG)-1 && VAR_10 != (ULONG)-1)
        {

            if (VAR_12 == VAR_3 ||
                VAR_7 == ((void*)0))
            {
                VAR_15 = VAR_3;
                VAR_18 = 1;
                goto done;
            }

            VAR_18 = FUNC_0(VAR_6,
                             VAR_9,
                             VAR_10,
                             VAR_16,
                             VAR_17,
                             VAR_13,
                             VAR_14,
                             VAR_7);
        }
        else
        {

            if (VAR_12 == VAR_3 ||
                VAR_13 == VAR_3 ||
                VAR_16 != 0 ||
                VAR_17 != 0 ||
                VAR_7 != ((void*)0))
            {
                VAR_15 = VAR_3;
                VAR_18 = 1;
                goto done;
            }

            if (VAR_8 == (ULONG)-1)
            {
                VAR_18 = FUNC_11(VAR_6);
            }
            else
            {
                VAR_18 = FUNC_12(VAR_6,
                                          VAR_8);
            }
        }
    }

done:
    FUNC_4();

    if (VAR_15 == VAR_3)
        FUNC_2(VAR_2, VAR_1);

    return VAR_18;
}
