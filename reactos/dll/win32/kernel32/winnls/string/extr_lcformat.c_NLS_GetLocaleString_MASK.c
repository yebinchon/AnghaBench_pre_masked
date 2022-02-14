
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LCID ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char*,int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static WCHAR* FUNC_6(LCID VAR_0, DWORD VAR_1)
{
  WCHAR VAR_2[80], *VAR_3;
  DWORD VAR_4;

  VAR_2[0] = '\0';
  FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_0(VAR_2));
  VAR_4 = FUNC_5(VAR_2) + 1;
  VAR_3 = FUNC_3(FUNC_2(), 0, VAR_4 * sizeof(WCHAR));
  if (VAR_3)
    FUNC_4(VAR_3, VAR_2, VAR_4 * sizeof(WCHAR));
  return VAR_3;
}
