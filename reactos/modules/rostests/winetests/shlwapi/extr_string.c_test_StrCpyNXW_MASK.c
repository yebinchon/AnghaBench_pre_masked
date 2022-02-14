
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lpInit ;
typedef int dest ;
typedef char WCHAR ;
typedef char* LPWSTR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int,char*,char*,char*,char,char,char,char,char,char,char,char) ;
 char* FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
  static const WCHAR VAR_0[] = { '\n','\n','\n','\n','\n','\n','\n','\n' };
  static const WCHAR VAR_1[] = { 'h','e','l','l','o','\0' };
  static const WCHAR VAR_2[] = { 'h','e','l','l','o','\0','\n','\n' };
  LPWSTR VAR_3;
  WCHAR VAR_4[8];

  if (!&FUNC_4)
  {
    FUNC_5("StrCpyNXW() is not available\n");
    return;
  }

  FUNC_2(VAR_4, VAR_0, sizeof(VAR_0));
  VAR_3 = FUNC_4(VAR_4, VAR_1, FUNC_0(VAR_4));
  FUNC_3(VAR_3 == VAR_4 + 5 && !FUNC_1(VAR_4, VAR_2, sizeof(VAR_4)),
       "StrCpyNXW: expected %p, \"hello\\0\\n\\n\", got %p, \"%d,%d,%d,%d,%d,%d,%d,%d\"\n",
       VAR_4 + 5, VAR_3, VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3], VAR_4[4], VAR_4[5], VAR_4[6], VAR_4[7]);
}
