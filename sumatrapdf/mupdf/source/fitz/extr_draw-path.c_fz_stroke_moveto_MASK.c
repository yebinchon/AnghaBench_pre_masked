
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sctx {int sn; scalar_t__ from_bezier; int dot; TYPE_1__* beg; TYPE_2__* seg; } ;
typedef int fz_context ;
struct TYPE_4__ {float x; float y; } ;
struct TYPE_3__ {float x; float y; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(fz_context *VAR_1, void *VAR_2, float VAR_3, float VAR_4)
{
 struct sctx *VAR_5 = (struct sctx *)VAR_2;

 VAR_5->seg[0].x = VAR_5->beg[0].x = VAR_3;
 VAR_5->seg[0].y = VAR_5->beg[0].y = VAR_4;
 VAR_5->sn = 1;
 VAR_5->dot = VAR_0;
 VAR_5->from_bezier = 0;
}
