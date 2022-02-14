
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int IMoniker ;
typedef int IEnumMoniker ;
typedef int ICreateDevEnum ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int **,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int **,int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_7;
    ICreateDevEnum *VAR_8 = ((void*)0);
    IEnumMoniker *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    IMoniker *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    VAR_7 = FUNC_0(&VAR_3, ((void*)0), VAR_0,
                           &VAR_4, (LPVOID*)&VAR_8);
    if (FUNC_1(VAR_7))
    {
         FUNC_10("Cannot create SystemDeviceEnum object (%x)\n", VAR_7);
         return;
    }

    VAR_7 = FUNC_2(VAR_8, &VAR_2, &VAR_9, 0);
    FUNC_9(FUNC_8(VAR_7), "Cannot create enum moniker (res = %x)\n", VAR_7);
    if (FUNC_8(VAR_7))
    {
        if (FUNC_4(VAR_9, 1, &VAR_11, ((void*)0)) == VAR_6 &&
            FUNC_4(VAR_9, 1, &VAR_12, ((void*)0)) == VAR_6)
        {
            VAR_7 = FUNC_6(VAR_11, VAR_12);
            FUNC_9(VAR_7 == VAR_5, "IMoniker_IsEqual should fail (res = %x)\n", VAR_7);

            VAR_7 = FUNC_6(VAR_12, VAR_11);
            FUNC_9(VAR_7 == VAR_5, "IMoniker_IsEqual should fail (res = %x)\n", VAR_7);

            FUNC_7(VAR_11);
            FUNC_7(VAR_12);
        }
        else
            FUNC_10("Cannot get moniker for testing.\n");
    }
    FUNC_5(VAR_9);

    VAR_7 = FUNC_2(VAR_8, &VAR_2, &VAR_9, 0);
    FUNC_9(FUNC_8(VAR_7), "Cannot create enum moniker (res = %x)\n", VAR_7);
    VAR_7 = FUNC_2(VAR_8, &VAR_1, &VAR_10, 0);
    FUNC_9(FUNC_8(VAR_7), "Cannot create enum moniker (res = %x)\n", VAR_7);
    if (FUNC_8(VAR_7))
    {
        if (FUNC_4(VAR_9, 1, &VAR_11, ((void*)0)) == VAR_6 &&
            FUNC_4(VAR_10, 1, &VAR_12, ((void*)0)) == VAR_6)
        {
            VAR_7 = FUNC_6(VAR_11, VAR_12);
            FUNC_9(VAR_7 == VAR_5, "IMoniker_IsEqual should failed (res = %x)\n", VAR_7);

            VAR_7 = FUNC_6(VAR_12, VAR_11);
            FUNC_9(VAR_7 == VAR_5, "IMoniker_IsEqual should failed (res = %x)\n", VAR_7);

            FUNC_7(VAR_11);
            FUNC_7(VAR_12);
        }
        else
            FUNC_10("Cannot get moniker for testing.\n");
    }
    FUNC_5(VAR_9);
    FUNC_5(VAR_10);

    VAR_7 = FUNC_2(VAR_8, &VAR_2, &VAR_9, 0);
    FUNC_9(FUNC_8(VAR_7), "Cannot create enum moniker (res = %x)\n", VAR_7);
    VAR_7 = FUNC_2(VAR_8, &VAR_2, &VAR_10, 0);
    FUNC_9(FUNC_8(VAR_7), "Cannot create enum moniker (res = %x)\n", VAR_7);
    if (FUNC_8(VAR_7))
    {
        if (FUNC_4(VAR_9, 1, &VAR_11, ((void*)0)) == VAR_6 &&
            FUNC_4(VAR_10, 1, &VAR_12, ((void*)0)) == VAR_6)
        {
            VAR_7 = FUNC_6(VAR_11, VAR_12);
            FUNC_9(VAR_7 == VAR_6, "IMoniker_IsEqual failed (res = %x)\n", VAR_7);

            VAR_7 = FUNC_6(VAR_12, VAR_11);
            FUNC_9(VAR_7 == VAR_6, "IMoniker_IsEqual failed (res = %x)\n", VAR_7);

            FUNC_7(VAR_11);
            FUNC_7(VAR_12);
        }
        else
            FUNC_10("Cannot get moniker for testing.\n");
    }
    FUNC_5(VAR_9);
    FUNC_5(VAR_10);

    FUNC_3(VAR_8);

    return;
}
