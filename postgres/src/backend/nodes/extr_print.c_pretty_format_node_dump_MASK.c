
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,char*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

char *
FUNC_3(const char *VAR_3)
{



 char VAR_4[78 + 1];
 StringInfoData VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_2(&VAR_5);
 VAR_6 = 0;
 VAR_7 = 0;
 VAR_8 = 0;
 for (;;)
 {
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   VAR_4[VAR_9] = ' ';
  for (; VAR_9 < 78 && VAR_3[VAR_8] != '\0'; VAR_8++, VAR_9++)
  {
   VAR_4[VAR_9] = VAR_3[VAR_8];
   switch (VAR_4[VAR_9])
   {
    case '}':
     if (VAR_9 != VAR_7)
     {

      VAR_4[VAR_9] = '\0';
      FUNC_1(&VAR_5, "%s\n", VAR_4);
     }

     VAR_4[VAR_7] = '}';
     VAR_4[VAR_7 + 1] = '\0';
     FUNC_1(&VAR_5, "%s\n", VAR_4);

     if (VAR_6 > 0)
     {
      VAR_6--;
      VAR_7 = FUNC_0(VAR_6 * 3, 60);
     }
     VAR_9 = VAR_7 - 1;


     while (VAR_3[VAR_8 + 1] == ' ')
      VAR_8++;
     break;
    case ')':

     if (VAR_3[VAR_8 + 1] != ')')
     {
      VAR_4[VAR_9 + 1] = '\0';
      FUNC_1(&VAR_5, "%s\n", VAR_4);
      VAR_9 = VAR_7 - 1;
      while (VAR_3[VAR_8 + 1] == ' ')
       VAR_8++;
     }
     break;
    case '{':

     if (VAR_9 != VAR_7)
     {
      VAR_4[VAR_9] = '\0';
      FUNC_1(&VAR_5, "%s\n", VAR_4);
     }

     VAR_6++;
     VAR_7 = FUNC_0(VAR_6 * 3, 60);
     for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
      VAR_4[VAR_9] = ' ';
     VAR_4[VAR_9] = VAR_3[VAR_8];
     break;
    case ':':

     if (VAR_9 != VAR_7)
     {
      VAR_4[VAR_9] = '\0';
      FUNC_1(&VAR_5, "%s\n", VAR_4);
     }
     VAR_9 = VAR_7;
     VAR_4[VAR_9] = VAR_3[VAR_8];
     break;
   }
  }
  VAR_4[VAR_9] = '\0';
  if (VAR_3[VAR_8] == '\0')
   break;
  FUNC_1(&VAR_5, "%s\n", VAR_4);
 }
 if (VAR_9 > 0)
  FUNC_1(&VAR_5, "%s\n", VAR_4);
 return VAR_5.data;



}
