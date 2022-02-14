
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int,char*,int) ;
 int FUNC_1 () ;
 char FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char) ;
 char FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(WORD VAR_1, WORD VAR_2, DWORD VAR_3)
{
  char VAR_4[3], VAR_5[3];

  VAR_4[0] = FUNC_4(VAR_1);
  if (FUNC_3(VAR_4[0]))
  {
    VAR_4[1] = FUNC_2(VAR_1);
    VAR_4[2] = '\0';
  }
  else
    VAR_4[1] = '\0';

  VAR_5[0] = FUNC_4(VAR_2);
  if (FUNC_3(VAR_5[0]))
  {
    VAR_5[1] = FUNC_2(VAR_2);
    VAR_5[2] = '\0';
  }
  else
    VAR_5[1] = '\0';

  return FUNC_0(FUNC_1(), VAR_3, VAR_4, -1, VAR_5, -1) - VAR_0;
}
