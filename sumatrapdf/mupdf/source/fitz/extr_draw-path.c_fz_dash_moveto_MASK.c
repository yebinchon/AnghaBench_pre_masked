
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; } ;
struct sctx {int toggle; size_t offset; scalar_t__ phase; scalar_t__ dash_phase; scalar_t__* dash_list; size_t dash_len; TYPE_2__* stroke; int cap; TYPE_1__ dash_cur; } ;
typedef int fz_context ;
struct TYPE_4__ {int start_cap; int end_cap; } ;


 int FUNC_0 (int *,struct sctx*,int ,int ) ;
 int FUNC_1 (int *,struct sctx*,float,float) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, struct sctx *VAR_1, float VAR_2, float VAR_3)
{
 VAR_1->toggle = 1;
 VAR_1->offset = 0;
 VAR_1->phase = VAR_1->dash_phase;

 while (VAR_1->phase > 0 && VAR_1->phase >= VAR_1->dash_list[VAR_1->offset])
 {
  VAR_1->toggle = !VAR_1->toggle;
  VAR_1->phase -= VAR_1->dash_list[VAR_1->offset];
  VAR_1->offset ++;
  if (VAR_1->offset == VAR_1->dash_len)
   VAR_1->offset = 0;
 }

 VAR_1->dash_cur.x = VAR_2;
 VAR_1->dash_cur.y = VAR_3;

 if (VAR_1->toggle)
 {
  FUNC_0(VAR_0, VAR_1, VAR_1->cap, VAR_1->stroke->end_cap);
  VAR_1->cap = VAR_1->stroke->start_cap;
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
