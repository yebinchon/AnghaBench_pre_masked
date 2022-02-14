
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef char* LPSTR ;


 char* FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
  char VAR_0[129];
  WORD VAR_1;




  for (VAR_1 = 32; VAR_1 < 128; VAR_1++)
    VAR_0[VAR_1] = (char)VAR_1;
  VAR_0[128] = '\0';

  for (VAR_1 = 32; VAR_1 < 128; VAR_1++)
  {
    LPSTR VAR_2 = FUNC_0(VAR_0+32, ((void*)0), VAR_1);
    FUNC_1(VAR_2 - VAR_0 == VAR_1, "found char %d in wrong place\n", VAR_1);
  }

  for (VAR_1 = 32; VAR_1 < 128; VAR_1++)
  {
    LPSTR VAR_3 = FUNC_0(VAR_0+VAR_1+1, ((void*)0), VAR_1);
    FUNC_1(!VAR_3, "found char not in the string\n");
  }

  for (VAR_1 = 32; VAR_1 < 128; VAR_1++)
  {
    LPSTR VAR_4 = FUNC_0(VAR_0+VAR_1+1, VAR_0 + 127, VAR_1);
    FUNC_1(!VAR_4, "found char not in the string\n");
  }
}
