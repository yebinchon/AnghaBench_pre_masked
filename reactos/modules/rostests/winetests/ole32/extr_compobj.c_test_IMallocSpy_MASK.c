
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IMalloc ;
typedef int * HRESULT ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (int ,int **) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int * VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int,char*,int *) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(void)
{
    IMalloc *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(((void*)0));
    FUNC_5(VAR_7 == VAR_2, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2();
    FUNC_5(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1(&VAR_5);
    FUNC_5(VAR_7 == VAR_4, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1(((void*)0));
    FUNC_5(VAR_7 == VAR_2, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_1(&VAR_5);
    FUNC_5(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);

    VAR_6 = ((void*)0);
    VAR_7 = FUNC_0(VAR_3, &VAR_6);
    FUNC_5(VAR_7 == VAR_4, "got 0x%08x\n", VAR_7);
    FUNC_5(VAR_6 != ((void*)0), "got %p\n", VAR_6);

    FUNC_3(VAR_6, ((void*)0));

    FUNC_4(VAR_6);

    VAR_7 = FUNC_2();
    FUNC_5(VAR_7 == VAR_4, "got 0x%08x\n", VAR_7);

    VAR_7 = FUNC_2();
    FUNC_5(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
}
