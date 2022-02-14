
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ ULONG ;
typedef int const* REFCLSID ;
typedef int * LPCWSTR ;
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
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int const*,int *,int) ;
 int * VAR_8 ;
 scalar_t__ FUNC_3 (int ,int *,int,int *) ;

__attribute__((used)) static HRESULT FUNC_4(
    REFCLSID VAR_9,
    LPCWSTR VAR_10,
    ULONG VAR_11,
    const CATID *VAR_12)
{
    WCHAR VAR_13[VAR_0];
    HRESULT VAR_14;
    HKEY VAR_15, VAR_16, VAR_17;

    if (VAR_11 && VAR_12 == ((void*)0)) return VAR_3;


    VAR_14 = FUNC_2(VAR_9, VAR_13, VAR_0);
    if (FUNC_0(VAR_14)) return VAR_14;


    VAR_14 = FUNC_3(VAR_4, VAR_8, VAR_5|VAR_6, &VAR_15);
    if (VAR_14 != VAR_1) return VAR_2;


    VAR_14 = FUNC_3(VAR_15, VAR_13, VAR_5|VAR_6, &VAR_16);
    if (VAR_14 == VAR_1) {

 VAR_14 = FUNC_3(VAR_16, VAR_10, VAR_5|VAR_6, &VAR_17);
 if (VAR_14 == VAR_1) {
     for (; VAR_11; --VAR_11, ++VAR_12) {
  HKEY VAR_18;


  VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_0);
  if (FUNC_0(VAR_14)) continue;


  VAR_14 = FUNC_3(VAR_17, VAR_13, VAR_5|VAR_6, &VAR_18);
  if (VAR_14 == VAR_1) FUNC_1(VAR_18);
     }
     VAR_14 = VAR_7;
 } else VAR_14 = VAR_2;
 FUNC_1(VAR_16);
    } else VAR_14 = VAR_2;
    FUNC_1(VAR_15);

    return VAR_14;
}
