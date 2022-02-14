
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_2 (int const*,int *,int) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;

__attribute__((used)) static HRESULT FUNC_5(const GUID *VAR_10, DWORD VAR_11, HKEY *VAR_12)
{
    WCHAR VAR_13[39];
    LONG VAR_14;
    HKEY VAR_15;
    FUNC_2(VAR_10, VAR_13, 39);
    if ((VAR_14 = FUNC_1(VAR_11 == VAR_6 ? VAR_8 : VAR_7, VAR_13, 0, VAR_2|VAR_4|VAR_3, &VAR_15)) != VAR_0)
    {
        FUNC_3("Opening key %s failed with %u\n", FUNC_4(VAR_13), VAR_14);
        return VAR_1;
    }
    VAR_14 = FUNC_1(VAR_15, VAR_9, 0, VAR_2|VAR_4|VAR_3, VAR_12);
    FUNC_0(VAR_15);
    if (VAR_14 != VAR_0)
    {
        FUNC_3("Opening key %s failed with %u\n", FUNC_4(VAR_9), VAR_14);
        return VAR_1;
    }
    return VAR_5;
}
