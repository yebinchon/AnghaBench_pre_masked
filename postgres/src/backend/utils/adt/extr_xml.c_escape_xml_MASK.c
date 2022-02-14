
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;


 int FUNC_0 (TYPE_1__*,char const) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;

char *
FUNC_3(const char *VAR_0)
{
 StringInfoData VAR_1;
 const char *VAR_2;

 FUNC_2(&VAR_1);
 for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
 {
  switch (*VAR_2)
  {
   case '&':
    FUNC_1(&VAR_1, "&amp;");
    break;
   case '<':
    FUNC_1(&VAR_1, "&lt;");
    break;
   case '>':
    FUNC_1(&VAR_1, "&gt;");
    break;
   case '\r':
    FUNC_1(&VAR_1, "&#x0d;");
    break;
   default:
    FUNC_0(&VAR_1, *VAR_2);
    break;
  }
 }
 return VAR_1.data;
}
