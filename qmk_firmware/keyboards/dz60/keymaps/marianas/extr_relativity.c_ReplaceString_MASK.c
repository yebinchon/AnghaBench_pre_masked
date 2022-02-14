
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(char *VAR_3, char *VAR_4)
{
  int VAR_5 = 0;
  while((VAR_3[VAR_5] != 0x0 && VAR_4[VAR_5] != 0x0) && VAR_3[VAR_5] == VAR_4[VAR_5])
   VAR_5++;

  if(VAR_3[VAR_5] != 0x0)
  {
    int VAR_6 = VAR_5;
    while (VAR_3[VAR_6++] != 0x0) {
      VAR_1[VAR_2]--;
      FUNC_1(VAR_0);
      FUNC_2(VAR_0);
    }
  }
  FUNC_0(VAR_4+VAR_5);
}
