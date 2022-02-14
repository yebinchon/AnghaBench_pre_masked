
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef char WCHAR ;
typedef char* LPWSTR ;


 char* FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
  WCHAR VAR_0[16385];
  WORD VAR_1;




  for (VAR_1 = 32; VAR_1 < 16384; VAR_1++)
    VAR_0[VAR_1] = VAR_1;
  VAR_0[16384] = '\0';

  for (VAR_1 = 32; VAR_1 < 16384; VAR_1++)
  {
    LPWSTR VAR_2 = FUNC_0(VAR_0+32, VAR_1);
    FUNC_1((VAR_2 - VAR_0) == VAR_1, "found char %d in wrong place\n", VAR_1);
  }

  for (VAR_1 = 32; VAR_1 < 16384; VAR_1++)
  {
    LPWSTR VAR_3 = FUNC_0(VAR_0+VAR_1+1, VAR_1);
    FUNC_1(!VAR_3, "found char not in the string\n");
  }
}
