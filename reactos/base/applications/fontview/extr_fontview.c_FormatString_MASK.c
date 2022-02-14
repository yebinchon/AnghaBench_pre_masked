
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int WCHAR ;
typedef int LPWSTR ;
typedef int HINSTANCE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int ,int,int ,int,int *) ;
 int FUNC_1 (int ,int,int ,int) ;

DWORD
FUNC_2(
 DWORD VAR_3,
 HINSTANCE VAR_4,
 DWORD VAR_5,
 DWORD VAR_6,
 LPWSTR VAR_7,
 DWORD VAR_8,
 va_list* VAR_9
)
{
 DWORD VAR_10;
 int VAR_11;
 WCHAR VAR_12[1000];

 VAR_11 = FUNC_1(VAR_4, VAR_5, (LPWSTR)VAR_12, 1000);

 if (VAR_11)
 {
  VAR_3 |= VAR_1;
  VAR_3 &= ~(VAR_0 | VAR_2);
  VAR_10 = FUNC_0(VAR_3, VAR_12, 0, VAR_6, VAR_7, VAR_8, VAR_9);
  return VAR_10;
 }
 return 0;
}
