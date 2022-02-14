
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (int ,int *,int,int ,int ,int,int,int *,int *,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ,int) ;

__attribute__((used)) static HWND FUNC_3(LPCSTR VAR_5, DWORD VAR_6, HWND VAR_7)
{
  HWND VAR_8 = FUNC_0(VAR_5, ((void*)0),
                            VAR_6 | VAR_1 | VAR_0 | VAR_3 | VAR_2,
                            0, 0, 200, 60, VAR_7, ((void*)0), VAR_4, ((void*)0));
  FUNC_2(VAR_8 != ((void*)0), "class: %s, error: %d\n", VAR_5, (int) FUNC_1());
  return VAR_8;
}
