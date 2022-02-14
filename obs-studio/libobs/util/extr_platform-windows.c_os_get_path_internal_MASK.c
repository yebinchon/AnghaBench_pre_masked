
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,size_t,char const*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, size_t VAR_3, const char *VAR_4,
    int VAR_5)
{
 wchar_t VAR_6[VAR_0];

 FUNC_0(((void*)0), VAR_5, ((void*)0), VAR_1, VAR_6);

 if (FUNC_1(VAR_6, 0, VAR_2, VAR_3) != 0) {
  if (!VAR_4 || !*VAR_4) {
   return (int)FUNC_3(VAR_2);
  }

  if (FUNC_2(VAR_2, VAR_3, "\\") == 0) {
   if (FUNC_2(VAR_2, VAR_3, VAR_4) == 0) {
    return (int)FUNC_3(VAR_2);
   }
  }
 }

 return -1;
}
