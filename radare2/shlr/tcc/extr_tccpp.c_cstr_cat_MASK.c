
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CString ;


 int FUNC_0 (int *,int) ;

void FUNC_1(CString *VAR_0, const char *VAR_1)
{
 int VAR_2;
 for (;;) {
  VAR_2 = *VAR_1;
  if (VAR_2 == '\0') {
   break;
  }
  FUNC_0 (VAR_0, VAR_2);
  VAR_1++;
 }
}
