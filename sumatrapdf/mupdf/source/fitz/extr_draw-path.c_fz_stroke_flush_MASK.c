
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sn; scalar_t__ dot; int rast; TYPE_2__* beg; TYPE_1__* seg; } ;
typedef TYPE_3__ sctx ;
typedef int fz_linecap ;
typedef int fz_context ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_7__ {int y; int x; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, sctx *VAR_2, fz_linecap VAR_3, fz_linecap VAR_4)
{
 if (VAR_2->sn == 2)
 {
  FUNC_0(VAR_1, VAR_2, VAR_2->beg[1].x, VAR_2->beg[1].y, VAR_2->beg[0].x, VAR_2->beg[0].y, VAR_3, 2);
  FUNC_0(VAR_1, VAR_2, VAR_2->seg[0].x, VAR_2->seg[0].y, VAR_2->seg[1].x, VAR_2->seg[1].y, VAR_4, 0);
 }
 else if (VAR_2->dot == VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_2->beg[0].x, VAR_2->beg[0].y);
 FUNC_2(VAR_1, VAR_2->rast);
}
