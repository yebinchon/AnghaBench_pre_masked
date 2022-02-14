
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IDrive ;
typedef int * HRESULT ;
typedef int * BSTR ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int **) ;
 int * FUNC_2 (int *,int*) ;
 int * FUNC_3 (int *,int **) ;
 int * VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IDrive *VAR_2;
    LONG VAR_3;
    HRESULT VAR_4;
    BSTR VAR_5;

    VAR_2 = FUNC_5();
    if (!VAR_2) {
        FUNC_7("No fixed drive found, skipping test.\n");
        return;
    }

    VAR_4 = FUNC_2(VAR_2, ((void*)0));
    FUNC_6(VAR_4 == VAR_0, "got 0x%08x\n", *VAR_4);

    VAR_3 = 0xdeadbeef;
    VAR_4 = FUNC_2(VAR_2, &VAR_3);
    FUNC_6(VAR_4 == VAR_1, "got 0x%08x\n", *VAR_4);
    FUNC_6(VAR_3 != 0xdeadbeef, "got %x\n", VAR_3);

    VAR_4 = FUNC_1(VAR_2, ((void*)0));
    FUNC_6(VAR_4 == VAR_0, "got 0x%08x\n", *VAR_4);

    VAR_5 = ((void*)0);
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    FUNC_6(VAR_4 == VAR_1, "got 0x%08x\n", *VAR_4);
    FUNC_6(VAR_5 != ((void*)0), "got %p\n", *VAR_5);
    FUNC_4(VAR_5);

    VAR_4 = FUNC_3(VAR_2, ((void*)0));
    FUNC_6(VAR_4 == VAR_0, "got 0x%08x\n", *VAR_4);

    VAR_5 = ((void*)0);
    VAR_4 = FUNC_3(VAR_2, &VAR_5);
    FUNC_6(VAR_4 == VAR_1, "got 0x%08x\n", *VAR_4);
    FUNC_6(VAR_5 != ((void*)0), "got %p\n", *VAR_5);
    FUNC_4(VAR_5);

    FUNC_0(VAR_2);
}
