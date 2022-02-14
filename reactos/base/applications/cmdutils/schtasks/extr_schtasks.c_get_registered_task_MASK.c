
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ITaskFolder ;
typedef int IRegisteredTask ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;

__attribute__((used)) static IRegisteredTask *FUNC_7(const WCHAR *VAR_0)
{
    IRegisteredTask *VAR_1;
    ITaskFolder *VAR_2;
    BSTR VAR_3;
    HRESULT VAR_4;

    VAR_2 = FUNC_6();
    if (!VAR_2)
        return ((void*)0);

    VAR_3 = FUNC_4(VAR_0);
    VAR_4 = FUNC_2(VAR_2, VAR_3, &VAR_1);
    FUNC_5(VAR_3);
    FUNC_3(VAR_2);
    if (FUNC_0(VAR_4)) {
        FUNC_1("GetTask failed: %08x\n", VAR_4);
        return ((void*)0);
    }

    return VAR_1;
}
