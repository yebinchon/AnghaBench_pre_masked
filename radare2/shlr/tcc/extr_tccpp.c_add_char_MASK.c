
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CString ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(CString *VAR_0, int VAR_1)
{
 if (VAR_1 == '\'' || VAR_1 == '\"' || VAR_1 == '\\') {

  FUNC_0 (VAR_0, '\\');
 }
 if (VAR_1 >= 32 && VAR_1 <= 126) {
  FUNC_0 (VAR_0, VAR_1);
 } else {
  FUNC_0 (VAR_0, '\\');
  if (VAR_1 == '\n') {
   FUNC_0 (VAR_0, 'n');
  } else {
   FUNC_0 (VAR_0, '0' + ((VAR_1 >> 6) & 7));
   FUNC_0 (VAR_0, '0' + ((VAR_1 >> 3) & 7));
   FUNC_0 (VAR_0, '0' + (VAR_1 & 7));
  }
 }
}
