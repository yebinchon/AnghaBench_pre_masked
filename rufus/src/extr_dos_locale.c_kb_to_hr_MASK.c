
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const***) ;
 int FUNC_1 (int) ;
 char const*** VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static const char* FUNC_3(const char* VAR_1)
{
 int VAR_2;
 for (VAR_2=0; VAR_2<FUNC_0(VAR_0); VAR_2++) {
  if (FUNC_2(VAR_1, VAR_0[VAR_2][0]) == 0) {
   return VAR_0[VAR_2][1];
  }
 }

 FUNC_1(VAR_2 < FUNC_0(VAR_0));
 return ((void*)0);
}
