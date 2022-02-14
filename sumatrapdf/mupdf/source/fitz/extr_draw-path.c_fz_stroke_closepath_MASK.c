
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sn; scalar_t__ dot; int rast; scalar_t__ from_bezier; TYPE_1__* beg; TYPE_1__* seg; } ;
typedef TYPE_2__ sctx ;
typedef int fz_context ;
struct TYPE_7__ {int y; int x; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, sctx *VAR_3)
{
 if (VAR_3->sn == 2)
 {
  FUNC_3(VAR_2, VAR_3, VAR_3->beg[0].x, VAR_3->beg[0].y, 0);
  FUNC_1(VAR_2, VAR_3, VAR_3->seg[0].x, VAR_3->seg[0].y, VAR_3->beg[0].x, VAR_3->beg[0].y, VAR_3->beg[1].x, VAR_3->beg[1].y, 0);
 }
 else if (VAR_3->dot == VAR_0)
  FUNC_0(VAR_2, VAR_3, VAR_3->beg[0].x, VAR_3->beg[0].y);

 VAR_3->seg[0] = VAR_3->beg[0];
 VAR_3->sn = 1;
 VAR_3->dot = VAR_1;
 VAR_3->from_bezier = 0;

 FUNC_2(VAR_2, VAR_3->rast);
}
