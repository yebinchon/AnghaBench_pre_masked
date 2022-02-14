
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uni_buf ;
typedef int fz_pool ;
struct TYPE_3__ {struct TYPE_3__* next; struct TYPE_3__* down; scalar_t__ flow_head; int markup_dir; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_pool *VAR_1, uni_buf *VAR_2, fz_html_box *VAR_3)
{
 while (VAR_3)
 {
  if (VAR_3->flow_head)
   VAR_3->markup_dir = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3->markup_dir, VAR_3->flow_head);
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3->down);
  VAR_3 = VAR_3->next;
 }
}
