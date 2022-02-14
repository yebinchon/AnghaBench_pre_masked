
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int REFIID ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__*,int **) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,scalar_t__*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,scalar_t__*,int ) ;

__attribute__((used)) static HRESULT FUNC_9(REFIID VAR_2, ITypeInfo **VAR_3)
{
    WCHAR VAR_4[VAR_0];
    ITypeLib *VAR_5;
    HRESULT VAR_6;

    *VAR_3 = ((void*)0);

    VAR_4[0] = 0;
    if (!FUNC_6(VAR_2, VAR_4, FUNC_0(VAR_4)))
    {
        VAR_6 = FUNC_8(VAR_2, VAR_4, FUNC_0(VAR_4));
        if (FUNC_2(VAR_6))
            return VAR_6;
    }

    VAR_6 = FUNC_5(VAR_4, &VAR_5);
    if (VAR_6 != VAR_1) {
        FUNC_1("Failed to load typelib for %s, but it should be there.\n", FUNC_7(VAR_2));
        return VAR_6;
    }

    VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);
    FUNC_4(VAR_5);
    if (VAR_6 != VAR_1)
        FUNC_1("typelib does not contain info for %s\n", FUNC_7(VAR_2));

    return VAR_6;
}
