
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ depth; int * head; int preserve_white; } ;
typedef int fz_xml ;
typedef int fz_context ;


 int FUNC_0 (char*,int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int *,struct parser*) ;
 int FUNC_4 (int *,struct parser*,char*,char*,int) ;
 int FUNC_5 (int*,char*) ;

__attribute__((used)) static void FUNC_6(fz_context *VAR_0, struct parser *VAR_1, char *VAR_2, char *VAR_3)
{
 fz_xml *VAR_4;
 char *VAR_5;
 int VAR_6;


 if (VAR_1->depth == 0)
  return;


 if (!VAR_1->preserve_white)
 {
  for (VAR_5 = VAR_2; VAR_5 < VAR_3; VAR_5++)
   if (!FUNC_2(*VAR_5))
    break;
  if (VAR_5 == VAR_3)
   return;
 }

 (void)FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 VAR_4 = VAR_1->head;


 VAR_5 = FUNC_1(VAR_4);
 while (VAR_2 < VAR_3) {
  if (*VAR_2 == '&') {
   VAR_2 += FUNC_5(&VAR_6, VAR_2);
   VAR_5 += FUNC_0(VAR_5, VAR_6);
  }
  else {
   *VAR_5++ = *VAR_2++;
  }
 }
 *VAR_5 = 0;

 FUNC_3(VAR_0, VAR_1);
}
