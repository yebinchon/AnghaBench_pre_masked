
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int DWORD ;
typedef char BYTE ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static
void FUNC_2 (
 BYTE* VAR_0,
 const BYTE* VAR_1,
 const WCHAR* VAR_2,
 UINT VAR_3
)
{
 BYTE VAR_4[8], VAR_5;
 UINT VAR_6, VAR_7;
 WCHAR VAR_8;
 DWORD VAR_9;


 FUNC_1(VAR_0, VAR_1, 11);

 if (VAR_3 > 5) {
  VAR_9 = VAR_3;
  while (*VAR_2) {
   VAR_8 = *VAR_2++;
   for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
    VAR_9 = (VAR_9 << 1) + (VAR_8 & 1);
    VAR_8 >>= 1;
    if (VAR_9 & 0x10000) VAR_9 ^= 0x11021;
   }
  }
  VAR_3 = (UINT)VAR_9;
 }


 VAR_6 = 7;
 do {
  VAR_5 = (VAR_3 % 16) + '0';
  if (VAR_5 > '9') VAR_5 += 7;
  VAR_4[VAR_6--] = VAR_5;
  VAR_3 /= 16;
 } while (VAR_3);
 VAR_4[VAR_6] = '~';


 for (VAR_7 = 0; VAR_7 < VAR_6 && VAR_0[VAR_7] != ' '; VAR_7++) {
  if (FUNC_0(VAR_0[VAR_7])) {
   if (VAR_7 == VAR_6 - 1) break;
   VAR_7++;
  }
 }
 do {
  VAR_0[VAR_7++] = (VAR_6 < 8) ? VAR_4[VAR_6++] : ' ';
 } while (VAR_7 < 8);
}
