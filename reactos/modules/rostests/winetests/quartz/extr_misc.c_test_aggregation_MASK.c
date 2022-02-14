
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int LPVOID ;
typedef int IUnknown ;
typedef int IID ;
typedef scalar_t__ HRESULT ;
typedef int CLSID ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const*,int *,int ,int const*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 scalar_t__ FUNC_2 (int *,int const*,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const,int *) ;
 int FUNC_6 (int *,int const,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(const CLSID VAR_6, const CLSID VAR_7,
                             const IID VAR_8, const IID VAR_9)
{
    HRESULT VAR_10;
    ULONG VAR_11;
    IUnknown *VAR_12 = ((void*)0);
    IUnknown *VAR_13 = ((void*)0);
    IUnknown *VAR_14 = ((void*)0);
    IUnknown *VAR_15 = ((void*)0);
    IUnknown *VAR_16 = ((void*)0);
    IUnknown *VAR_17 = ((void*)0);
    IUnknown *VAR_18 = ((void*)0);
    IUnknown *VAR_19 = ((void*)0);

    VAR_10 = FUNC_1(&VAR_6, ((void*)0), VAR_0,
                          &VAR_3, (LPVOID*)&VAR_12);
    FUNC_9(VAR_10 == VAR_5, "CoCreateInstance failed with %x\n", VAR_10);
    FUNC_9(VAR_12 != ((void*)0), "pUnkOuter is NULL\n");

    if (!VAR_12)
    {
        FUNC_10("pUnkOuter is NULL\n");
        return;
    }


    VAR_10 = FUNC_1(&VAR_7, VAR_12, VAR_0,
                          &VAR_9, (LPVOID*)&VAR_14);
    if (VAR_10 == VAR_4)
    {
        FUNC_10("Class not registered\n");
        return;
    }
    FUNC_9(VAR_10 == VAR_1, "CoCreateInstance returned %x\n", VAR_10);
    FUNC_9(VAR_14 == ((void*)0), "pUnkInnerFail is not NULL\n");


    VAR_10 = FUNC_1(&VAR_7, VAR_12, VAR_0,
                          &VAR_3, (LPVOID*)&VAR_13);
    FUNC_9(VAR_10 == VAR_5, "CoCreateInstance returned %x\n", VAR_10);
    FUNC_9(VAR_13 != ((void*)0), "pUnkInner is NULL\n");

    if (!VAR_13)
    {
        FUNC_10("pUnkInner is NULL\n");
        return;
    }

    FUNC_0(VAR_12, 2);
    FUNC_0(VAR_13, 2);
    FUNC_7(VAR_12, 1);
    FUNC_7(VAR_13, 1);

    FUNC_5(VAR_12, VAR_9, VAR_17);
    FUNC_5(VAR_13, VAR_8, VAR_18);


    FUNC_6(VAR_12, VAR_8, VAR_18);
    FUNC_6(VAR_12, VAR_3, VAR_15);

    if(FUNC_4(&VAR_2, &VAR_9))
    {
        VAR_10 = FUNC_2(VAR_13, &VAR_9, (LPVOID*)&VAR_17);
        FUNC_9(VAR_10 == VAR_5 || FUNC_8(VAR_10 == VAR_1), "IUnknown_QueryInterface returned %x\n", VAR_10);
        FUNC_9(VAR_17 != ((void*)0) || FUNC_8(!VAR_17), "Pointer is NULL\n");
    }
    else
    {
        FUNC_6(VAR_13, VAR_9, VAR_17);
    }
    FUNC_6(VAR_13, VAR_3, VAR_16);

    if (!VAR_18 || !VAR_15 || !VAR_17
                    || !VAR_16)
    {
        FUNC_10("One of the required interfaces is NULL\n");
        return;
    }

    FUNC_0(VAR_18, 5);
    FUNC_0(VAR_15, 6);
    FUNC_0(VAR_17, 7);
    FUNC_0(VAR_16, 3);
    FUNC_7(VAR_18, 6);
    FUNC_7(VAR_15, 5);
    FUNC_7(VAR_17, 4);
    FUNC_7(VAR_16, 2);

    FUNC_6(VAR_18, VAR_3, VAR_19);
    FUNC_6(VAR_15, VAR_3, VAR_19);
    FUNC_6(VAR_17, VAR_3, VAR_19);
    FUNC_6(VAR_16, VAR_3, VAR_19);

    FUNC_5(VAR_18, VAR_9, VAR_19);
    FUNC_5(VAR_15, VAR_9, VAR_19);
    FUNC_5(VAR_17, VAR_9, VAR_19);
    FUNC_6(VAR_16, VAR_9, VAR_19);

    FUNC_6(VAR_18, VAR_8, VAR_19);
    FUNC_6(VAR_15, VAR_8, VAR_19);
    FUNC_6(VAR_17, VAR_8, VAR_19);
    FUNC_5(VAR_16, VAR_8, VAR_19);

    FUNC_7(VAR_18, 10);
    FUNC_7(VAR_15, 9);
    FUNC_7(VAR_17, 8);
    FUNC_7(VAR_16, 2);
    FUNC_7(VAR_12, 7);
    FUNC_7(VAR_13, 1);

    do
    {
        VAR_11 = FUNC_3(VAR_13);
    } while (VAR_11);

    do
    {
        VAR_11 = FUNC_3(VAR_12);
    } while (VAR_11);
}
