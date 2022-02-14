
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * fonts; struct TYPE_5__* family; struct TYPE_5__* src; int font; struct TYPE_5__* next; struct TYPE_5__* custom; } ;
typedef TYPE_1__ fz_html_font_set ;
typedef TYPE_1__ fz_html_font_face ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(fz_context *VAR_0, fz_html_font_set *VAR_1)
{
 fz_html_font_face *VAR_2, *VAR_3;
 int VAR_4;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->custom;
 while (VAR_2)
 {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2->font);
  FUNC_1(VAR_0, VAR_2->src);
  FUNC_1(VAR_0, VAR_2->family);
  FUNC_1(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }

 for (VAR_4 = 0; VAR_4 < (int)FUNC_2(VAR_1->fonts); ++VAR_4)
  FUNC_0(VAR_0, VAR_1->fonts[VAR_4]);

 FUNC_1(VAR_0, VAR_1);
}
