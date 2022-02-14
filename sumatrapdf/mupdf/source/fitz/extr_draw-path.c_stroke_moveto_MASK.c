
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float x; float y; } ;
struct TYPE_8__ {TYPE_2__ cur; TYPE_1__* stroke; } ;
typedef TYPE_3__ sctx ;
typedef int fz_context ;
struct TYPE_6__ {int end_cap; int start_cap; } ;


 int FUNC_0 (int *,TYPE_3__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3)
{
 sctx *VAR_4 = (sctx *)VAR_1;

 FUNC_0(VAR_0, VAR_4, VAR_4->stroke->start_cap, VAR_4->stroke->end_cap);
 FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);
 VAR_4->cur.x = VAR_2;
 VAR_4->cur.y = VAR_3;
}
