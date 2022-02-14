
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef int WCHAR ;
typedef int UINT ;


 int* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

WCHAR FUNC_1 (
 WCHAR VAR_2,
 WORD VAR_3
)
{
 const WCHAR *VAR_4;
 WCHAR VAR_5 = 0;
 UINT VAR_6 = 0, VAR_7, VAR_8, VAR_9;


 if (VAR_2 < 0x80) {
  VAR_5 = VAR_2;

 } else {
  if (VAR_3 == VAR_0) {
   VAR_4 = FUNC_0(VAR_1, VAR_0);
   VAR_9 = sizeof FUNC_0(VAR_1, VAR_0) / 4 - 1;
   VAR_8 = 0;
   for (VAR_7 = 16; VAR_7; VAR_7--) {
    VAR_6 = VAR_8 + (VAR_9 - VAR_8) / 2;
    if (VAR_2 == VAR_4[VAR_6 * 2]) break;
    if (VAR_2 > VAR_4[VAR_6 * 2]) {
     VAR_8 = VAR_6;
    } else {
     VAR_9 = VAR_6;
    }
   }
   if (VAR_7 != 0) VAR_5 = VAR_4[VAR_6 * 2 + 1];
  }
 }

 return VAR_5;
}
