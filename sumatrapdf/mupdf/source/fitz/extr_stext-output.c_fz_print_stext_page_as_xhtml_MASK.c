
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* first_block; } ;
typedef TYPE_1__ fz_stext_page ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* next; } ;
typedef TYPE_2__ fz_stext_block ;
typedef int fz_output ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_2__*) ;
 int FUNC_1 (int *,int *,TYPE_2__*) ;
 int FUNC_2 (int *,int *,char*,int) ;
 int FUNC_3 (int *,int *,char*) ;

void
FUNC_4(fz_context *VAR_2, fz_output *VAR_3, fz_stext_page *VAR_4, int VAR_5)
{
 fz_stext_block *VAR_6;

 FUNC_2(VAR_2, VAR_3, "<div id=\"page%d\">\n", VAR_5);

 for (VAR_6 = VAR_4->first_block; VAR_6; VAR_6 = VAR_6->next)
 {
  if (VAR_6->type == VAR_0)
   FUNC_1(VAR_2, VAR_3, VAR_6);
  else if (VAR_6->type == VAR_1)
   FUNC_0(VAR_2, VAR_3, VAR_6);
 }

 FUNC_3(VAR_2, VAR_3, "</div>\n");
}
