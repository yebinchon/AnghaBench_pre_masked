
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int const* REFCLSID ;
typedef int LPCWSTR ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int CATID ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int const*,char*,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,char*,int,int *) ;

__attribute__((used)) static HRESULT FUNC_6(
    REFCLSID VAR_8,
    LPCWSTR VAR_9,
    ULONG VAR_10,
    const CATID *VAR_11)
{
    WCHAR VAR_12[68] = { 'C', 'L', 'S', 'I', 'D', '\\' };
    HRESULT VAR_13;
    HKEY VAR_14;

    if (VAR_10 && VAR_11 == ((void*)0)) return VAR_3;


    VAR_13 = FUNC_3(VAR_8, VAR_12 + 6, VAR_0);
    if (FUNC_0(VAR_13)) return VAR_13;
    VAR_12[44] = '\\';
    FUNC_4(VAR_12 + 45, VAR_9);


    VAR_13 = FUNC_5(VAR_4, VAR_12, VAR_5|VAR_6, &VAR_14);
    if (VAR_13 != VAR_1) return VAR_2;

    for (; VAR_10; --VAR_10, ++VAR_11) {

 VAR_13 = FUNC_3(VAR_11, VAR_12, VAR_0);
 if (FUNC_0(VAR_13)) continue;


 FUNC_2(VAR_14, VAR_12);
    }
    FUNC_1(VAR_14);

    return VAR_7;
}
