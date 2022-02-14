
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;

char *
FUNC_2(const char *VAR_1)
{

 char VAR_2[78 + 1];
 StringInfoData VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_1(&VAR_3);
 VAR_4 = 0;
 for (;;)
 {
  for (VAR_5 = 0; VAR_5 < 78 && VAR_1[VAR_4] != '\0'; VAR_4++, VAR_5++)
   VAR_2[VAR_5] = VAR_1[VAR_4];
  if (VAR_1[VAR_4] == '\0')
   break;
  if (VAR_1[VAR_4] == ' ')
  {

   VAR_4++;
  }
  else
  {
   for (VAR_6 = VAR_5 - 1; VAR_6 > 0; VAR_6--)
    if (VAR_2[VAR_6] == ' ')
     break;
   if (VAR_6 > 0)
   {

    VAR_4 -= (VAR_5 - VAR_6 - 1);
    VAR_5 = VAR_6;
   }
  }
  VAR_2[VAR_5] = '\0';
  FUNC_0(&VAR_3, "%s\n", VAR_2);
 }
 if (VAR_5 > 0)
 {
  VAR_2[VAR_5] = '\0';
  FUNC_0(&VAR_3, "%s\n", VAR_2);
 }
 return VAR_3.data;

}
