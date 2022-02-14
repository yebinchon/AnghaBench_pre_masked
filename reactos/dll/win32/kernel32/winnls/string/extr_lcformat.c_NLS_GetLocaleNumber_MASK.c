
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LCID ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char*,int ) ;

__attribute__((used)) static DWORD FUNC_2(LCID VAR_0, DWORD VAR_1)
{
  WCHAR VAR_2[80];
  DWORD VAR_3 = 0;

  VAR_2[0] = '\0';
  FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_0(VAR_2));

  if (VAR_2[0] && VAR_2[1] == ';' && VAR_2[2] != '0')
    VAR_3 = (VAR_2[0] - '0') * 10 + (VAR_2[2] - '0');
  else
  {
    const WCHAR* VAR_4 = VAR_2;
    VAR_3 = 0;
    while(*VAR_4 >= '0' && *VAR_4 <= '9')
      VAR_3 = VAR_3 * 10 + (*VAR_4++ - '0');
  }
  return VAR_3;
}
