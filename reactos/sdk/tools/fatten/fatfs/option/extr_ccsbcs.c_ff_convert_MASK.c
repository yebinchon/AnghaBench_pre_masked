
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;


 int* VAR_0 ;

WCHAR FUNC_0 (
 WCHAR VAR_1,
 UINT VAR_2
)
{
 WCHAR VAR_3;


 if (VAR_1 < 0x80) {
  VAR_3 = VAR_1;

 } else {
  if (VAR_2) {
   VAR_3 = (VAR_1 >= 0x100) ? 0 : VAR_0[VAR_1 - 0x80];

  } else {
   for (VAR_3 = 0; VAR_3 < 0x80; VAR_3++) {
    if (VAR_1 == VAR_0[VAR_3]) break;
   }
   VAR_3 = (VAR_3 + 0x80) & 0xFF;
  }
 }

 return VAR_3;
}
