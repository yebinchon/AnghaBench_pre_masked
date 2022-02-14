
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT ;
typedef char TCHAR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;


__attribute__((used)) static
int FUNC_1 (
 const TCHAR** VAR_3
)
{
 const TCHAR *VAR_4, *VAR_5;
 UINT VAR_6;
 int VAR_7 = -1;
 if (*VAR_3) {
  for (VAR_5 = *VAR_3; (UINT)*VAR_5 >= (VAR_1 ? ' ' : '!') && *VAR_5 != ':'; VAR_5++) ;
  if (*VAR_5 == ':') {
   VAR_4 = *VAR_3;
   VAR_6 = *VAR_4++ - '0';
   if (VAR_6 < 10 && VAR_4 == VAR_5) {
    if (VAR_6 < VAR_2) {
     VAR_7 = (int)VAR_6;
     *VAR_3 = ++VAR_5;
    }
   }
   return VAR_7;
  }



  VAR_7 = 0;

 }
 return VAR_7;
}
