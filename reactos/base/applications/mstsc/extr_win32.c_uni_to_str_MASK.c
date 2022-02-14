
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TCHAR ;


 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_1(char * VAR_0, TCHAR * VAR_1)
{
  int VAR_2;
  int VAR_3;

  VAR_2 = FUNC_0(VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  {
    VAR_0[VAR_3] = (char)VAR_1[VAR_3];
  }
  VAR_0[VAR_2] = 0;
}
