
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IAssemblyName ;
typedef int IAssemblyEnum ;
typedef int * HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int,char*,...) ;
 int * FUNC_3 (int **,int *,int *,int ,int *) ;
 int * FUNC_4 (int **,int *,int ,int *) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_6;
    WCHAR VAR_7[VAR_4];
    IAssemblyEnum *VAR_8;
    IAssemblyName *VAR_9;

    FUNC_5(VAR_7, "wine");
    VAR_9 = ((void*)0);
    VAR_6 = FUNC_4(&VAR_9, VAR_7, VAR_2, ((void*)0));
    FUNC_2(VAR_6 == VAR_5, "Expected S_OK, got %08x\n", VAR_6);
    FUNC_2(VAR_9 != ((void*)0), "Expected non-NULL asmname\n");


    if (0)
    {

        VAR_6 = FUNC_3(((void*)0), ((void*)0), VAR_9, VAR_0, ((void*)0));
        FUNC_2(VAR_6 == VAR_3, "Expected E_INVALIDARG, got %08x\n", VAR_6);
    }


    VAR_8 = ((void*)0);
    VAR_6 = FUNC_3(&VAR_8, ((void*)0), ((void*)0), VAR_0, ((void*)0));
    FUNC_2(VAR_6 == VAR_5, "Expected S_OK, got %08x\n", VAR_6);
    FUNC_2(VAR_8 != ((void*)0), "Expected non-NULL asmenum\n");

    FUNC_0(VAR_8);


    VAR_8 = (IAssemblyEnum *)0xdeadbeef;
    VAR_6 = FUNC_3(&VAR_8, ((void*)0), ((void*)0), VAR_1, ((void*)0));
    FUNC_2(VAR_6 == VAR_3, "Expected E_INVALIDARG, got %08x\n", VAR_6);
    FUNC_2(VAR_8 == (IAssemblyEnum *)0xdeadbeef,
       "Expected asmenum to be unchanged, got %p\n", VAR_8);


    VAR_8 = (IAssemblyEnum *)0xdeadbeef;
    VAR_6 = FUNC_3(&VAR_8, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_2(VAR_6 == VAR_3, "Expected E_INVALIDARG, got %08x\n", VAR_6);
    FUNC_2(VAR_8 == (IAssemblyEnum *)0xdeadbeef,
       "Expected asmenum to be unchanged, got %p\n", VAR_8);

    FUNC_1(VAR_9);
}
