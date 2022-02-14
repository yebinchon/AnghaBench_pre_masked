
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char FUNC_2 (int) ;
 int FUNC_3 (int) ;

char *FUNC_4(char *VAR_0)
{
  unsigned VAR_1 = 0;
  unsigned int VAR_2;
  char *VAR_3;
  int VAR_4;




  if (!VAR_0)
    return(((void*)0));
  VAR_2 = (unsigned int)((unsigned char)VAR_0[0]);
  VAR_3 = &(VAR_0[2]);




  while(VAR_1 < VAR_2-1)
  {
    VAR_4=FUNC_1();





    if (VAR_4 == '\b')
    {
      if (VAR_1 > 0)
      {
 FUNC_0("\b \b");

 VAR_1--;
 VAR_3[VAR_1] = '\0';
      }
    }
    else if (VAR_4 == '\r')
    {
      VAR_3[VAR_1] = '\0';
      break;
    }
    else if (VAR_4 == 0)
    {

      VAR_3[VAR_1] = '\0';
      FUNC_3(VAR_4);
      break;
    }
    else
    {
      VAR_3[VAR_1] = FUNC_2(VAR_4);
      VAR_1++;
    }
  }
  VAR_3[VAR_2-1] = '\0';
  VAR_0[1] = (char)((unsigned char)VAR_1);
  return(VAR_3);
}
