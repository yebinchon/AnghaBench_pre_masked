
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct parser {TYPE_1__* head; scalar_t__ for_html; } ;
struct TYPE_3__ {struct TYPE_3__* up; } ;
typedef TYPE_1__ fz_xml ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int *,struct parser*) ;

__attribute__((used)) static int
FUNC_4(fz_context *VAR_0, struct parser *VAR_1, char *VAR_2, char *VAR_3)
{
 fz_xml *VAR_4, *VAR_5;


 if (VAR_1->for_html)
 {
  for (VAR_4 = VAR_1->head; VAR_4; VAR_4 = VAR_4->up)
  {
   char *VAR_6 = FUNC_1(VAR_4);
   if (VAR_6 && FUNC_0(VAR_6, VAR_2, VAR_3-VAR_2) == 0 && VAR_6[VAR_3-VAR_2] == 0)
    break;
  }
 }
 else
 {
  for (VAR_4 = VAR_1->head; VAR_4; VAR_4 = VAR_4->up)
  {
   char *VAR_7 = FUNC_1(VAR_4);
   if (VAR_7 && FUNC_2(VAR_7, VAR_2, VAR_3-VAR_2) == 0 && VAR_7[VAR_3-VAR_2] == 0)
    break;
  }
 }

 if (VAR_4 == ((void*)0))
 {

  return 0;
 }


 for (VAR_5 = VAR_1->head; VAR_5 != VAR_4; VAR_5 = VAR_5->up)
  FUNC_3(VAR_0, VAR_1);
 return 1;
}
