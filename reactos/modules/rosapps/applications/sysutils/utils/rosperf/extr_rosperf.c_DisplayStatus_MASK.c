
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int Status ;
typedef int LPCWSTR ;
typedef int HWND ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,char*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_4(HWND VAR_1, LPCWSTR VAR_2, LPCWSTR VAR_3, int VAR_4)
{
  WCHAR VAR_5[128];

  FUNC_3(VAR_5, sizeof(VAR_5) / sizeof(VAR_5[0]), L"%d %s %s", VAR_4, VAR_2, VAR_3);
  FUNC_1(VAR_1, VAR_5);
  FUNC_0(VAR_1, ((void*)0), VAR_0);
  FUNC_2(VAR_1);
}
