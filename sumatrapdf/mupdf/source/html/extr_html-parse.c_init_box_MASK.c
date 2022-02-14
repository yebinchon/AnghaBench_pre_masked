
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * style; int markup_dir; int * flow_head; int ** flow_tail; int * next; int * down; int * up; scalar_t__ b; scalar_t__ w; scalar_t__ y; scalar_t__ x; int type; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;
typedef int fz_bidi_direction ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(fz_context *VAR_1, fz_html_box *VAR_2, fz_bidi_direction VAR_3)
{
 VAR_2->type = VAR_0;
 VAR_2->x = VAR_2->y = 0;
 VAR_2->w = VAR_2->b = 0;

 VAR_2->up = ((void*)0);
 VAR_2->down = ((void*)0);
 VAR_2->next = ((void*)0);

 VAR_2->flow_head = ((void*)0);
 VAR_2->flow_tail = &VAR_2->flow_head;
 VAR_2->markup_dir = VAR_3;
 VAR_2->style = ((void*)0);
}
