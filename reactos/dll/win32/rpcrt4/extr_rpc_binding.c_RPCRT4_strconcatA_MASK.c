
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef char* LPCSTR ;
typedef int DWORD ;
typedef int CHAR ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*) ;
 char* FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static LPSTR FUNC_5(LPSTR VAR_0, LPCSTR VAR_1)
{
  DWORD VAR_2 = FUNC_4(VAR_0), VAR_3 = FUNC_4(VAR_1);
  LPSTR VAR_4 = FUNC_2(FUNC_0(), 0, VAR_0, (VAR_2+VAR_3+2)*sizeof(CHAR));
  if (!VAR_4)
  {
    FUNC_1(FUNC_0(), 0, VAR_0);
    return ((void*)0);
  }
  VAR_4[VAR_2] = ',';
  FUNC_3(VAR_4+VAR_2+1, VAR_1, VAR_3+1);
  return VAR_4;
}
