
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef int IAssemblyCache ;
typedef scalar_t__ HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,char const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char const*,int *,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int **,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static BOOL FUNC_9(void)
{
    IAssemblyCache *VAR_5;
    HRESULT VAR_6;
    BOOL VAR_7 = VAR_2;
    ULONG VAR_8;

    static const WCHAR VAR_9[] = {'w','i','n','e','.','d','l','l',0};

    FUNC_4("wine.dll");

    VAR_6 = FUNC_6(&VAR_5, 0);
    FUNC_5(VAR_6 == VAR_3, "Expected S_OK, got %08x\n", VAR_6);

    VAR_6 = FUNC_1(VAR_5, 0, VAR_9, ((void*)0));
    if (VAR_6 == VAR_3)
        VAR_7 = VAR_4;
    else if (VAR_6 == VAR_0)
        FUNC_8("Tests can't be run on older .NET version (.NET 1.1)\n");
    else if (VAR_6 == VAR_1)
        FUNC_7("Not enough rights to install an assembly\n");
    else
        FUNC_5(0, "Expected S_OK, got %08x\n", VAR_6);

    FUNC_0("wine.dll");
    FUNC_3(VAR_5, 0, VAR_9, ((void*)0), &VAR_8);
    FUNC_2(VAR_5);
    return VAR_7;
}
