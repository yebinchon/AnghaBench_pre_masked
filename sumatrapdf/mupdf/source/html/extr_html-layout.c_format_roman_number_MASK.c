
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, char *VAR_1, int VAR_2, int VAR_3, const char *VAR_4[3][10], const char *VAR_5)
{
 int VAR_6 = VAR_3 % 10;
 int VAR_7 = (VAR_3 / 10) % 10;
 int VAR_8 = (VAR_3 / 100) % 10;
 int VAR_9 = (VAR_3 / 1000);

 FUNC_1(VAR_1, "", VAR_2);
 while (VAR_9--)
  FUNC_0(VAR_1, VAR_5, VAR_2);
 FUNC_0(VAR_1, VAR_4[2][VAR_8], VAR_2);
 FUNC_0(VAR_1, VAR_4[1][VAR_7], VAR_2);
 FUNC_0(VAR_1, VAR_4[0][VAR_6], VAR_2);
 FUNC_0(VAR_1, ". ", VAR_2);
}
