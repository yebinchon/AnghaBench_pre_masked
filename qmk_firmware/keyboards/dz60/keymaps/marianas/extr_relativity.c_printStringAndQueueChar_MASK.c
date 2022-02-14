
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;

void FUNC_2(char* VAR_6)
{
  if (VAR_0[VAR_2] > 0 && VAR_2 < VAR_1)
  {
    VAR_2++;
  }
  VAR_3 = 1;
  if (VAR_6[0] != '\0')
  {
    FUNC_0(VAR_6);

    for (int VAR_7 = 0; VAR_7 < VAR_5-1; VAR_7++)
    {
      if (VAR_4[VAR_7] == '\0')
      {
        VAR_4[VAR_7] = VAR_6[0];
        VAR_4[VAR_7+1] = '\0';
        break;
      }
      else if (VAR_7 == VAR_5-2)
      {
        FUNC_1();
        break;
      }
    }







  }
}
