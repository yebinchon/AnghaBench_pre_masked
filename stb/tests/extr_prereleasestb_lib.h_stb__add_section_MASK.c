
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

void FUNC_1(char *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
   if (VAR_3 < VAR_2) {
      int VAR_4 = VAR_3 >> 1, VAR_5 = VAR_3-VAR_4;
      FUNC_0(VAR_0, VAR_1, VAR_4-1);
      VAR_0[VAR_4-1] = '.';
      VAR_0[VAR_4-0] = '.';
      FUNC_0(VAR_0+VAR_4+1, VAR_1+VAR_2-VAR_5+1, VAR_5-1);
   } else
      FUNC_0(VAR_0, VAR_1, VAR_2);
}
