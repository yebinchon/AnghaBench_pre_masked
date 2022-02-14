
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const,int *) ;
 int FUNC_1 (char*,int *) ;

void
FUNC_2(const char *VAR_0, FILE *VAR_1)
{
 const char *VAR_2;
 bool VAR_3 = 1;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
 {
  switch (*VAR_2)
  {
   case '&':
    FUNC_1("&amp;", VAR_1);
    break;
   case '<':
    FUNC_1("&lt;", VAR_1);
    break;
   case '>':
    FUNC_1("&gt;", VAR_1);
    break;
   case '\n':
    FUNC_1("<br />\n", VAR_1);
    break;
   case '"':
    FUNC_1("&quot;", VAR_1);
    break;
   case ' ':

    if (VAR_3)
     FUNC_1("&nbsp;", VAR_1);
    else
     FUNC_1(" ", VAR_1);
    break;
   default:
    FUNC_0(*VAR_2, VAR_1);
  }
  if (*VAR_2 != ' ')
   VAR_3 = 0;
 }
}
