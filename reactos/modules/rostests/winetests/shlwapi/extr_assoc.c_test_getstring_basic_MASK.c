
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int *,int*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_9;
    WCHAR * VAR_10;
    WCHAR * VAR_11;
    DWORD VAR_12, VAR_13, VAR_14;

    if (!&FUNC_8)
    {
        FUNC_10("AssocQueryStringW() is missing\n");
        return;
    }

    VAR_9 = FUNC_8(0, VAR_0, VAR_7, VAR_8, ((void*)0), &VAR_12);
    FUNC_5(VAR_5, VAR_9);
    if (VAR_9 != VAR_5)
    {
        FUNC_9("failed to get initial len\n");
        return;
    }

    VAR_11 = FUNC_2(FUNC_0(), VAR_4,
                               VAR_12 * sizeof(WCHAR));
    if (!VAR_11)
    {
        FUNC_9("failed to allocate memory\n");
        return;
    }

    VAR_13 = VAR_12;
    VAR_9 = FUNC_8(0, VAR_0, VAR_7, VAR_8,
                           VAR_11, &VAR_13);
    FUNC_5(VAR_6, VAR_9);
    VAR_14 = FUNC_6(VAR_11) + 1;
    FUNC_4(VAR_12, VAR_13);
    FUNC_4(VAR_12, VAR_14);

    VAR_9 = FUNC_8(0, VAR_1, VAR_7, VAR_8, ((void*)0),
                           &VAR_12);
    FUNC_7(VAR_9 == VAR_5 ||
       VAR_9 == FUNC_1(VAR_2) ||
       VAR_9 == FUNC_1(VAR_3),
       "Unexpected result : %08x\n", VAR_9);
    if (VAR_9 != VAR_5)
    {
        FUNC_3(FUNC_0(), 0, VAR_11);
        FUNC_9("failed to get initial len\n");
        return;
    }

    VAR_10 = FUNC_2(FUNC_0(), VAR_4,
                               VAR_12 * sizeof(WCHAR));
    if (!VAR_10)
    {
        FUNC_3(FUNC_0(), 0, VAR_11);
        FUNC_9("failed to allocate memory\n");
        return;
    }

    VAR_13 = VAR_12;
    VAR_9 = FUNC_8(0, VAR_1, VAR_7, VAR_8,
                           VAR_10, &VAR_13);
    FUNC_5(VAR_6, VAR_9);
    VAR_14 = FUNC_6(VAR_10) + 1;
    FUNC_4(VAR_12, VAR_13);
    FUNC_4(VAR_12, VAR_14);

    FUNC_3(FUNC_0(), 0, VAR_11);
    FUNC_3(FUNC_0(), 0, VAR_10);
}
