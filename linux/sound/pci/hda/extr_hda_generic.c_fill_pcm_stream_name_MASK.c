
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, size_t VAR_1, const char *VAR_2,
     const char *VAR_3)
{
 char *VAR_4;

 if (*VAR_0)
  return;
 FUNC_3(VAR_0, VAR_3, VAR_1);


 for (VAR_4 = FUNC_1(VAR_0, ' '); VAR_4; VAR_4 = FUNC_1(VAR_4 + 1, ' ')) {
  if (!FUNC_0(VAR_4[1])) {
   *VAR_4 = 0;
   break;
  }
 }
 FUNC_2(VAR_0, VAR_2, VAR_1);
}
