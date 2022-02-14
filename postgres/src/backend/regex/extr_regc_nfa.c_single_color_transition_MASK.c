
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {int nouts; int nins; struct arc* outs; TYPE_1__* ins; } ;
struct arc {scalar_t__ type; struct state* to; struct arc* outchain; } ;
struct TYPE_2__ {scalar_t__ type; struct state* from; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct state *
FUNC_0(struct state *VAR_2, struct state *VAR_3)
{
 struct arc *VAR_4;


 if (VAR_2->nouts == 1 && VAR_2->outs->type == VAR_0)
  VAR_2 = VAR_2->outs->to;

 if (VAR_3->nins == 1 && VAR_3->ins->type == VAR_0)
  VAR_3 = VAR_3->ins->from;

 if (VAR_2 == VAR_3)
  return ((void*)0);

 if (VAR_2->outs == ((void*)0))
  return ((void*)0);

 for (VAR_4 = VAR_2->outs; VAR_4 != ((void*)0); VAR_4 = VAR_4->outchain)
 {
  if (VAR_4->type != VAR_1 || VAR_4->to != VAR_3)
   return ((void*)0);
 }

 return VAR_2;
}
