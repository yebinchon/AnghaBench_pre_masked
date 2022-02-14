
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cbuf ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;

void
FUNC_7(
 char *VAR_5,
 char *VAR_6)
{
    char VAR_7[VAR_0];
    VAR_7[0] = VAR_1;
    switch (*VAR_5)
    {
 case 's':
     if (FUNC_3(VAR_5, "syntax") == 0)
  FUNC_4(VAR_7, sizeof(VAR_7), "syntax %s", VAR_6);
     else if (FUNC_3(VAR_5, "savefiles") == 0)
     {

     }
     break;

 case 'l':
     if (FUNC_3(VAR_5, "lineno") == 0)
  FUNC_2(VAR_7, "set %snu",
   (FUNC_3(VAR_6, "on") == 0) ? "" : "no");
     break;

 case 'p':
     if (FUNC_3(VAR_5, "parentheses") == 0)
  FUNC_2(VAR_7, "set %ssm",
   (FUNC_3(VAR_6, "on") == 0) ? "" : "no");
     break;

 case 'w':





     break;

 case 'b':
     if (VAR_5[7] == VAR_1 && FUNC_3(VAR_5, "balloon") == 0)
     {





     }
     else if (FUNC_3(VAR_5, "balloondelay") == 0)
     {





     }
     break;
    }
    if (VAR_7[0] != VAR_1)
 FUNC_1(VAR_7, VAR_2);
}
