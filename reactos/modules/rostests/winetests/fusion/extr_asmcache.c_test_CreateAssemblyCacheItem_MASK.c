
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IAssemblyCacheItem ;
typedef int IAssemblyCache ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,void*,int **,char const*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int **,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    IAssemblyCache *VAR_2;
    IAssemblyCacheItem *VAR_3;
    HRESULT VAR_4;

    static const WCHAR VAR_5[] = {'w','i','n','e',0};

    VAR_4 = FUNC_4(&VAR_2, 0);
    FUNC_3(VAR_4 == VAR_1, "Expected S_OK, got %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_2, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_4 == VAR_0, "Expected E_INVALIDARG, got %08x\n", VAR_4);

    VAR_4 = FUNC_1(VAR_2, 0, ((void*)0), &VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_1, "Expected S_OK, got %08x\n", VAR_4);
    FUNC_0(VAR_3);

    VAR_4 = FUNC_1(VAR_2, 0, ((void*)0), &VAR_3, VAR_5);
    FUNC_3(VAR_4 == VAR_1, "Expected S_OK, got %08x\n", VAR_4);
    FUNC_0(VAR_3);

    VAR_4 = FUNC_1(VAR_2, 1, (void *)0xdeadbeef, &VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_1, "Expected S_OK, got %08x\n", VAR_4);
    FUNC_0(VAR_3);

    VAR_4 = FUNC_1(VAR_2, 1, ((void*)0), &VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_1, "Expected S_OK, got %08x\n", VAR_4);
    FUNC_0(VAR_3);

    VAR_4 = FUNC_1(VAR_2, 0, (void *)0xdeadbeef, &VAR_3, ((void*)0));
    FUNC_3(VAR_4 == VAR_1, "Expected S_OK, got %08x\n", VAR_4);
    FUNC_0(VAR_3);

    FUNC_2(VAR_2);
}
