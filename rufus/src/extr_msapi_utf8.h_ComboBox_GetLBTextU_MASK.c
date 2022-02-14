
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int WPARAM ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static __inline int FUNC_6(HWND VAR_4, int VAR_5, char* VAR_6)
{
 int VAR_7;
 DWORD VAR_8 = VAR_3;
 wchar_t* VAR_9;
 if (VAR_6 == ((void*)0))
  return VAR_0;
 VAR_7 = (int)FUNC_1(VAR_4, VAR_2, (WPARAM)VAR_5, (LPARAM)0);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_9 = (wchar_t*)FUNC_3(VAR_7+1, sizeof(wchar_t));
 VAR_7 = (int)FUNC_1(VAR_4, VAR_1, (WPARAM)VAR_5, (LPARAM)VAR_9);
 VAR_8 = FUNC_0();
 if (VAR_7 > 0)
  FUNC_4(VAR_9, VAR_6, VAR_7+1);
 FUNC_5(VAR_6);
 FUNC_2(VAR_8);
 return VAR_7;
}
