
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LPCWSTR ;
typedef int HWND ;
typedef int HINSTANCE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_4(HWND VAR_2, LPCWSTR VAR_3, UINT VAR_4)
{
 HINSTANCE VAR_5 = FUNC_2(VAR_2, ((void*)0) , VAR_3, ((void*)0) , ((void*)0) , VAR_4);

 if (FUNC_1(VAR_5) <= 32) {
  FUNC_3(VAR_2, FUNC_0());
  return VAR_0;
 }

 return VAR_1;
}
