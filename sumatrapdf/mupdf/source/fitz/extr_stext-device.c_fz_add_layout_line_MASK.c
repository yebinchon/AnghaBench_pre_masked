
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x; float y; float h; char const* p; int * text; struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_layout_line ;
struct TYPE_6__ {int ** text_tailp; TYPE_1__** tailp; int pool; } ;
typedef TYPE_2__ fz_layout_block ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int ,int) ;

void FUNC_1(fz_context *VAR_0, fz_layout_block *VAR_1, float VAR_2, float VAR_3, float VAR_4, const char *VAR_5)
{
 fz_layout_line *VAR_6 = FUNC_0(VAR_0, VAR_1->pool, sizeof (fz_layout_line));
 VAR_6->x = VAR_2;
 VAR_6->y = VAR_3;
 VAR_6->h = VAR_4;
 VAR_6->p = VAR_5;
 VAR_6->text = ((void*)0);
 VAR_6->next = ((void*)0);
 *VAR_1->tailp = VAR_6;
 VAR_1->tailp = &VAR_6->next;
 VAR_1->text_tailp = &VAR_6->text;
}
