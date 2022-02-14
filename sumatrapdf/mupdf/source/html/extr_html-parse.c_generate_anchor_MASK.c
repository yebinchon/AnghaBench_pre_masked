
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct genstate {int * pool; } ;
typedef int fz_pool ;
struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* up; } ;
typedef TYPE_1__ fz_html_box ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_1, fz_html_box *VAR_2, struct genstate *VAR_3)
{
 fz_pool *VAR_4 = VAR_3->pool;
 fz_html_box *VAR_5 = VAR_2;
 while (VAR_5->type != VAR_0)
  VAR_5 = VAR_5->up;
 FUNC_0(VAR_1, VAR_4, VAR_5, VAR_2);
}
