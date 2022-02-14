
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float x; float w; char const* p; struct TYPE_5__* next; } ;
typedef TYPE_1__ fz_layout_char ;
struct TYPE_6__ {TYPE_1__** text_tailp; int pool; } ;
typedef TYPE_2__ fz_layout_block ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int ,int) ;

void FUNC_1(fz_context *VAR_0, fz_layout_block *VAR_1, float VAR_2, float VAR_3, const char *VAR_4)
{
 fz_layout_char *VAR_5 = FUNC_0(VAR_0, VAR_1->pool, sizeof (fz_layout_char));
 VAR_5->x = VAR_2;
 VAR_5->w = VAR_3;
 VAR_5->p = VAR_4;
 VAR_5->next = ((void*)0);
 *VAR_1->text_tailp = VAR_5;
 VAR_1->text_tailp = &VAR_5->next;
}
