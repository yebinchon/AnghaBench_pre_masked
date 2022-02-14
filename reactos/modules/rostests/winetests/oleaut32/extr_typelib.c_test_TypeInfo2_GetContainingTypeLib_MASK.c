
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef char OLECHAR ;
typedef int ITypeLib ;
typedef int ITypeInfo2 ;
typedef int ICreateTypeLib2 ;
typedef int ICreateTypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (int *,char const*,int*) ;
 int FUNC_1 (int *,int **,int*) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int*,...) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,int **,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int ,int (*) (int *,int **,int*)) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_3[] = {'t','e','s','t','.','t','l','b',0};
    static OLECHAR VAR_4[] = {'t','e','s','t','T','y','p','e','I','n','f','o',0};

    ICreateTypeLib2 *VAR_5;
    ICreateTypeInfo *VAR_6;
    ITypeInfo2 *VAR_7;
    ITypeLib *VAR_8;
    UINT VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_0(&VAR_1, VAR_3, VAR_5);
    FUNC_10(VAR_10, FUNC_0);

    VAR_10 = FUNC_4(VAR_5, VAR_4, &VAR_2, &VAR_6);
    FUNC_10(VAR_10, FUNC_4);

    VAR_10 = FUNC_2(VAR_6, &VAR_0, (void**)&VAR_7);
    FUNC_10(VAR_10, FUNC_1);

    VAR_8 = ((void*)0);
    VAR_9 = 888;
    VAR_10 = FUNC_6(VAR_7, &VAR_8, &VAR_9);
    FUNC_10(VAR_10, FUNC_6);
    FUNC_9(VAR_8 != ((void*)0), "ITypeInfo2_GetContainingTypeLib returned empty TypeLib\n");
    FUNC_9(VAR_9 == 0, "ITypeInfo2_GetContainingTypeLib returned Index = %u, expected 0\n", VAR_9);
    if(VAR_8) FUNC_8(VAR_8);

    VAR_8 = ((void*)0);
    VAR_10 = FUNC_6(VAR_7, &VAR_8, ((void*)0));
    FUNC_10(VAR_10, FUNC_6);
    FUNC_9(VAR_8 != ((void*)0), "ITypeInfo2_GetContainingTypeLib returned empty TypeLib\n");
    if(VAR_8) FUNC_8(VAR_8);

    VAR_9 = 888;
    VAR_10 = FUNC_6(VAR_7, ((void*)0), &VAR_9);
    FUNC_10(VAR_10, FUNC_6);
    FUNC_9(VAR_9 == 0, "ITypeInfo2_GetContainingTypeLib returned Index = %u, expected 0\n", VAR_9);

    VAR_10 = FUNC_6(VAR_7, ((void*)0), ((void*)0));
    FUNC_10(VAR_10, FUNC_6);

    FUNC_7(VAR_7);
    FUNC_3(VAR_6);
    FUNC_5(VAR_5);
}
