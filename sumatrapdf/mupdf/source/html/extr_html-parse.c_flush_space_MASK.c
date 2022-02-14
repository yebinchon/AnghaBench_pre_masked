
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct genstate {scalar_t__ emit_white; int at_bol; int * pool; } ;
typedef int fz_pool ;
struct TYPE_10__ {TYPE_1__* style; } ;
typedef TYPE_2__ fz_html_box ;
typedef int fz_context ;
struct TYPE_9__ {int white_space; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *,int *,TYPE_2__*,TYPE_2__*,char const*,char const*,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_1, fz_html_box *VAR_2, fz_html_box *VAR_3, int VAR_4, struct genstate *VAR_5)
{
 static const char *VAR_6 = " ";
 int VAR_7 = VAR_3->style->white_space & VAR_0;
 fz_pool *VAR_8 = VAR_5->pool;
 if (VAR_5->emit_white)
 {
  if (!VAR_5->at_bol)
  {
   if (VAR_7)
    FUNC_0(VAR_1, VAR_8, VAR_2, VAR_3);
   else
    FUNC_1(VAR_1, VAR_8, VAR_2, VAR_3, VAR_6, VAR_6+1, VAR_4);
  }
  VAR_5->emit_white = 0;
 }
}
