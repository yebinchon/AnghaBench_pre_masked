
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*,int,int) ;
 int FUNC_1 (char const*,char*,int,int,char const*,int) ;
 int FUNC_2 (char const*,char*,int,int) ;
 int FUNC_3 (char const*,char*,int,int,int) ;

int FUNC_4(const char *VAR_1, char *VAR_2,
      int VAR_3, int VAR_4,
      const char *VAR_5, int VAR_6)
{
 if (VAR_6 == 0)
  return FUNC_0(VAR_1, VAR_2,
        VAR_3, VAR_4);
 if (VAR_5+VAR_6 == VAR_2) {
  if (VAR_6 >= 64 * VAR_0 - 1)
   return FUNC_2(VAR_1, VAR_2,
    VAR_3, VAR_4);
  return FUNC_3(VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_6);
 }
 return FUNC_1(VAR_1, VAR_2,
  VAR_3, VAR_4, VAR_5, VAR_6);
}
