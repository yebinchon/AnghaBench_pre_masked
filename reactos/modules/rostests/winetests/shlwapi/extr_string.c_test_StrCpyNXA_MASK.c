
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;
typedef char* LPSTR ;
typedef char* LPCSTR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,char*,char*,char*,char,char,char,char,char,char,char,char) ;
 char* FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  LPCSTR VAR_0 = "hello";
  LPSTR VAR_1;
  char VAR_2[8];

  if (!&FUNC_4)
  {
    FUNC_5("StrCpyNXA() is not available\n");
    return;
  }

  FUNC_2(VAR_2, '\n', sizeof(VAR_2));
  VAR_1 = FUNC_4(VAR_2, VAR_0, FUNC_0(VAR_2));
  FUNC_3(VAR_1 == VAR_2 + 5 && !FUNC_1(VAR_2, "hello\0\n\n", sizeof(VAR_2)),
       "StrCpyNXA: expected %p, \"hello\\0\\n\\n\", got %p, \"%d,%d,%d,%d,%d,%d,%d,%d\"\n",
       VAR_2 + 5, VAR_1, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);
}
