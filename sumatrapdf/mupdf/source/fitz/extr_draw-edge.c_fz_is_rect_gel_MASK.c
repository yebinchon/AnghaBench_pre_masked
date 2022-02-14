
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_3__ {int len; TYPE_2__* edges; } ;
typedef TYPE_1__ fz_gel ;
struct TYPE_4__ {scalar_t__ y; scalar_t__ h; scalar_t__ xmove; scalar_t__ adj_up; } ;
typedef TYPE_2__ fz_edge ;
typedef int fz_context ;



__attribute__((used)) static int
FUNC_0(fz_context *VAR_0, fz_rasterizer *VAR_1)
{
 fz_gel *VAR_2 = (fz_gel *)VAR_1;

 if (VAR_2->len == 2)
 {
  fz_edge *VAR_3 = VAR_2->edges + 0;
  fz_edge *VAR_4 = VAR_2->edges + 1;
  return VAR_3->y == VAR_4->y && VAR_3->h == VAR_4->h &&
   VAR_3->xmove == 0 && VAR_3->adj_up == 0 &&
   VAR_4->xmove == 0 && VAR_4->adj_up == 0;
 }
 return 0;
}
