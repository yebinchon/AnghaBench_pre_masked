
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IWSCProductList ;
typedef int IID ;
typedef int HRESULT ;
typedef int HMODULE ;
typedef int CLSID ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int ,int const*,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
 IWSCProductList *VAR_5 = ((void*)0);
 HMODULE VAR_6;
 HRESULT VAR_7;




 VAR_6 = FUNC_4(L"wscapi.dll");
 if (!VAR_6)
  return;

 const CLSID *VAR_8 =
  (const CLSID *)FUNC_3(VAR_6, "CLSID_WSCProductList");
 const IID *VAR_9 =
  (const IID *)FUNC_3(VAR_6, "IID_IWSCProductList");

 if (VAR_8 && VAR_9) {
  FUNC_5(VAR_1, "Sec. Software Status:");

  VAR_7 = FUNC_0(VAR_8, ((void*)0),
          VAR_0, VAR_9,
          &VAR_5);
  if (!FUNC_1(VAR_7)) {
   FUNC_6(
    VAR_5, VAR_3);
  }

  VAR_7 = FUNC_0(VAR_8, ((void*)0),
          VAR_0, VAR_9,
          &VAR_5);
  if (!FUNC_1(VAR_7)) {
   FUNC_6(
    VAR_5, VAR_4);
  }

  VAR_7 = FUNC_0(VAR_8, ((void*)0),
          VAR_0, VAR_9,
          &VAR_5);
  if (!FUNC_1(VAR_7)) {
   FUNC_6(
    VAR_5, VAR_2);
  }
 }

 FUNC_2(VAR_6);
}
