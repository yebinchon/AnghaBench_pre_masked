
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char const) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(char **VAR_0, int *VAR_1, const char *VAR_2)
{
 StringInfoData VAR_3;

 FUNC_1(&VAR_3);

 while (*VAR_2)
 {
  bool VAR_4 = 0;

  FUNC_5(&VAR_3);


  while (FUNC_2((unsigned char) *VAR_2))
   VAR_2++;

  if (*VAR_2 == '\0')
   break;





  while (*VAR_2)
  {
   if (FUNC_2((unsigned char) *VAR_2) && !VAR_4)
    break;

   if (!VAR_4 && *VAR_2 == '\\')
    VAR_4 = 1;
   else
   {
    VAR_4 = 0;
    FUNC_0(&VAR_3, *VAR_2);
   }

   VAR_2++;
  }


  VAR_0[(*VAR_1)++] = FUNC_4(VAR_3.data);
 }

 FUNC_3(VAR_3.data);
}
