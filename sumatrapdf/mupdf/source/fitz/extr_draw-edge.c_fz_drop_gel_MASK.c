
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_3__ {struct TYPE_3__* deltas; struct TYPE_3__* alphas; struct TYPE_3__* edges; struct TYPE_3__* active; } ;
typedef TYPE_1__ fz_gel ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_rasterizer *VAR_1)
{
 fz_gel *VAR_2 = (fz_gel *)VAR_1;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_0, VAR_2->active);
 FUNC_0(VAR_0, VAR_2->edges);
 FUNC_0(VAR_0, VAR_2->alphas);
 FUNC_0(VAR_0, VAR_2->deltas);
 FUNC_0(VAR_0, VAR_2);
}
