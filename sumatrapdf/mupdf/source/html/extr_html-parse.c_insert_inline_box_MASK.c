
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct genstate {int at_bol; int pool; int styles; } ;
struct TYPE_7__ {scalar_t__ type; int is_first_flow; int style; struct TYPE_7__* next; struct TYPE_7__* up; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_css_style ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_4, fz_html_box *VAR_5, fz_html_box *VAR_6, int VAR_7, struct genstate *VAR_8)
{
 if (VAR_6->type == VAR_1 || VAR_6->type == VAR_2)
 {
  FUNC_2(VAR_4, VAR_5, VAR_2, VAR_6);
 }
 else
 {
  while (VAR_6->type != VAR_0 && VAR_6->type != VAR_3)
   VAR_6 = VAR_6->up;


  if (VAR_6->next && VAR_6->next->type == VAR_1)
  {
   FUNC_2(VAR_4, VAR_5, VAR_2, VAR_6->next);
  }
  else
  {
   fz_css_style VAR_9;
   fz_html_box *VAR_10 = FUNC_3(VAR_4, VAR_8->pool, VAR_7);
   VAR_10->is_first_flow = !VAR_6->next;
   FUNC_1(VAR_4, &VAR_9);
   VAR_10->style = FUNC_0(VAR_4, &VAR_9, &VAR_8->styles, VAR_8->pool);
   FUNC_2(VAR_4, VAR_10, VAR_1, VAR_6);
   FUNC_2(VAR_4, VAR_5, VAR_2, VAR_10);
   VAR_8->at_bol = 1;
  }
 }
}
