
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; } ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_7__ {TYPE_1__ dash_beg; TYPE_2__ cur; } ;
typedef TYPE_3__ sctx ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, void *VAR_1)
{
 sctx *VAR_2 = (sctx *)VAR_1;

 FUNC_0(VAR_0, VAR_2, VAR_2->dash_beg.x, VAR_2->dash_beg.y, 0);
 VAR_2->cur.x = VAR_2->dash_beg.x;
 VAR_2->cur.y = VAR_2->dash_beg.y;
}
