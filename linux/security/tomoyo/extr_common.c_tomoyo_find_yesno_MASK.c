
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s8 ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static s8 FUNC_3(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2) {
  VAR_2 += FUNC_0(VAR_1);
  if (!FUNC_1(VAR_2, "=yes", 4))
   return 1;
  else if (!FUNC_1(VAR_2, "=no", 3))
   return 0;
 }
 return -1;
}
