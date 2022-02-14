
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUnknown ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,int *,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int **) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_4[] = {'s','t','d','o','l','e','2','.','t','l','b',0};
    ITypeLib *VAR_5;
    ITypeInfo *VAR_6;
    IUnknown *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_6(VAR_8 == VAR_0, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_0(((void*)0), ((void*)0), ((void*)0), &VAR_7);
    FUNC_6(VAR_8 == VAR_0, "got 0x%08x\n", VAR_8);

    VAR_8 = FUNC_5(VAR_4, &VAR_5);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    VAR_8 = FUNC_2(VAR_5, &VAR_1, &VAR_6);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    FUNC_3(VAR_5);

    VAR_8 = FUNC_0(((void*)0), &VAR_3, ((void*)0), &VAR_7);
    FUNC_6(VAR_8 == VAR_0, "got %08x\n", VAR_8);

    VAR_8 = FUNC_0(((void*)0), ((void*)0), VAR_6, &VAR_7);
    FUNC_6(VAR_8 == VAR_0, "got %08x\n", VAR_8);

    VAR_8 = FUNC_0(((void*)0), &VAR_3, VAR_6, &VAR_7);
    FUNC_6(VAR_8 == VAR_2, "got %08x\n", VAR_8);
    FUNC_4(VAR_7);

    FUNC_1(VAR_6);
}
