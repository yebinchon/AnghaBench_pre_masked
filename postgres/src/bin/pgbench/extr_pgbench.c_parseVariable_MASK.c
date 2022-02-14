
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;
 int * FUNC_3 (char*,char const) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0, int *VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3;

 do
 {
  VAR_2++;
 } while (FUNC_0(VAR_0[VAR_2]) ||
    FUNC_3("ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"
     "_0123456789", VAR_0[VAR_2]) != ((void*)0));
 if (VAR_2 == 1)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_2);
 FUNC_1(VAR_3, &VAR_0[1], VAR_2 - 1);
 VAR_3[VAR_2 - 1] = '\0';

 *VAR_1 = VAR_2;
 return VAR_3;
}
