
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parser {TYPE_2__* head; } ;
struct TYPE_3__ {char* text; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
typedef TYPE_2__ fz_xml ;
typedef int fz_context ;


 int FUNC_0 (int *,struct parser*) ;
 int FUNC_1 (int *,struct parser*,char*,char*,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, struct parser *VAR_1, char *VAR_2, char *VAR_3)
{
 fz_xml *VAR_4;
 char *VAR_5;

 (void)FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 VAR_4 = VAR_1->head;

 VAR_5 = VAR_4->u.text;
 while (VAR_2 < VAR_3)
  *VAR_5++ = *VAR_2++;
 *VAR_5 = 0;

 FUNC_0(VAR_0, VAR_1);
}
