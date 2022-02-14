
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    ULONG_PTR VAR_9;
    HANDLE VAR_10;
    DWORD VAR_11;
    HRESULT VAR_12;

    VAR_12 = FUNC_0(&VAR_1, VAR_3, ((void*)0));
    FUNC_2(VAR_12 == VAR_4, "got 0x%08x\n", VAR_12);

    VAR_11 = 0xdeadbeef;
    VAR_12 = FUNC_0(&VAR_1, VAR_3, &VAR_11);
    FUNC_2(VAR_12 == VAR_6, "got 0x%08x\n", VAR_12);
    FUNC_2(VAR_11 == 0, "got 0x%08x\n", VAR_11);

    VAR_11 = -1;
    VAR_12 = FUNC_0(&VAR_0, VAR_3, &VAR_11);
    FUNC_2(VAR_12 == VAR_7, "got 0x%08x\n", VAR_12);
    FUNC_2(VAR_11 == 0, "got 0x%08x\n", VAR_11);

    if ((VAR_10 = FUNC_1(VAR_8, &VAR_9)))
    {
        VAR_11 = 0;
        VAR_12 = FUNC_0(&VAR_1, VAR_3, &VAR_11);
        FUNC_2(VAR_12 == VAR_7, "got 0x%08x\n", VAR_12);
        FUNC_2(VAR_11 == VAR_5, "got 0x%08x\n", VAR_11);


        VAR_11 = 0;
        VAR_12 = FUNC_0(&VAR_0, VAR_3, &VAR_11);
        FUNC_2(VAR_12 == VAR_7, "got 0x%08x\n", VAR_12);
        FUNC_2(VAR_11 == VAR_5, "got 0x%08x\n", VAR_11);


        VAR_11 = -1;
        VAR_12 = FUNC_0(&VAR_1, VAR_2, &VAR_11);
        FUNC_2(VAR_12 == VAR_7, "got 0x%08x\n", VAR_12);
        FUNC_2(VAR_11 == 0, "got 0x%08x\n", VAR_11);

        FUNC_3(0, VAR_9);
        FUNC_4(VAR_10);
    }
}
