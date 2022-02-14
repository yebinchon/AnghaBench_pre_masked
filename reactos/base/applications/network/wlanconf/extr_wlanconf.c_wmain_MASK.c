
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IP_ADAPTER_INDEX_MAP ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int,int **) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_11(int VAR_5, WCHAR *VAR_6[])
{
    HANDLE VAR_7;
    IP_ADAPTER_INDEX_MAP VAR_8;


    FUNC_1();

    if (!FUNC_6(VAR_5, VAR_6))
        return -1;

    if (!FUNC_5(&VAR_7, &VAR_8))
    {
        FUNC_2(VAR_1, VAR_0);
        return -1;
    }

    if (VAR_4)
    {
        if (!FUNC_10(VAR_7))
        {
            FUNC_3(FUNC_4());
            FUNC_0(VAR_7);
            return -1;
        }
    }
    else if (VAR_3)
    {
        if (!FUNC_8(VAR_7, &VAR_8))
        {
            FUNC_3(FUNC_4());
            FUNC_0(VAR_7);
            return -1;
        }
    }
    else if (VAR_2)
    {
        if (!FUNC_7(VAR_7))
        {
            FUNC_3(FUNC_4());
            FUNC_0(VAR_7);
            return -1;
        }
    }
    else
    {
        if (!FUNC_9(VAR_7))
        {
            FUNC_3(FUNC_4());
            FUNC_0(VAR_7);
            return -1;
        }
    }

    FUNC_0(VAR_7);
    return 0;
}
