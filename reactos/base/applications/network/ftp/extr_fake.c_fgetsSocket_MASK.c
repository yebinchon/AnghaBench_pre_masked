
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*,int,int ) ;

char *FUNC_3(int VAR_2, char *VAR_3)
{
   char VAR_4[2] = {0};
   int VAR_5, VAR_6;

   for (VAR_5 = 0, VAR_6 = 1; VAR_6 != 0 && VAR_4[0] != '\n'; VAR_5++)
   {
      FUNC_0(VAR_2);

      VAR_6 = FUNC_2(VAR_2, VAR_4, 1, 0);

      if (VAR_6 == VAR_1)
      {
     FUNC_1("Error in fgetssocket");
     return ((void*)0);
      }

      if (VAR_6 == 1)
      {
     VAR_3[VAR_5] = VAR_4[0];

     if (VAR_5 == VAR_0 - 3)
     {
        VAR_6 = 0;
        VAR_3[++VAR_5] = '\n';
        VAR_3[++VAR_5] = '\0';
     }
      }
      else
      {
     if (VAR_5 == 0)
        return ((void*)0);
     else
     {
        VAR_3[VAR_5] = '\n';
        VAR_3[VAR_5 + 1] = '\0';
        return VAR_3;
     }

      }

   }
   VAR_3[VAR_5] = '\0';




   return VAR_3;
}
