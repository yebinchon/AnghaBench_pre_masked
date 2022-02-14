
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char) ;

void FUNC_1(char* VAR_2)
{

  if (VAR_2[0] != '\0')
  {
    int VAR_3 = 0;
    while (1)
    {
      if (VAR_2[VAR_3] == 0)
      {
        break;
      }
      FUNC_0(VAR_2[VAR_3++]);
      VAR_0[VAR_1]++;
    }
  }
}
