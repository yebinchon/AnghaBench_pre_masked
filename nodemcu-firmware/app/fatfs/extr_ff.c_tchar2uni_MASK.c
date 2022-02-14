
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int TCHAR ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static DWORD FUNC_6 (
 const TCHAR** VAR_1
)
{
 DWORD VAR_2;
 const TCHAR *VAR_3 = *VAR_1;
 BYTE VAR_4;
 WCHAR VAR_5;

 VAR_5 = (BYTE)*VAR_3++;
 if (FUNC_3((BYTE)VAR_5)) {
  VAR_4 = (BYTE)*VAR_3++;
  if (!FUNC_4(VAR_4)) return 0xFFFFFFFF;
  VAR_5 = (VAR_5 << 8) + VAR_4;
 }
 if (VAR_5 != 0) {
  VAR_5 = FUNC_5(VAR_5, VAR_0);
  if (VAR_5 == 0) return 0xFFFFFFFF;
 }
 VAR_2 = VAR_5;


 *VAR_1 = VAR_3;
 return VAR_2;
}
