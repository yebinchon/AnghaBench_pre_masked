
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int UINT ;
typedef void* TCHAR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static BYTE FUNC_4 (
 DWORD VAR_1,
 TCHAR* VAR_2,
 UINT VAR_3
)
{
 WCHAR VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (VAR_4 >= 0x100) {
  if (VAR_3 < 2) return 0;
  *VAR_2++ = (char)(VAR_4 >> 8);
  *VAR_2++ = (TCHAR)VAR_4;
  return 2;
 }
 if (VAR_4 == 0 || VAR_3 < 1) return 0;
 *VAR_2++ = (TCHAR)VAR_4;
 return 1;

}
