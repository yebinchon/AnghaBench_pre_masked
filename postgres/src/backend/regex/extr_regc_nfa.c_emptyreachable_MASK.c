
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct state {size_t no; struct state* tmp; } ;
struct nfa {TYPE_1__* v; } ;
struct arc {scalar_t__ type; struct state* from; struct arc* inchain; } ;
struct TYPE_2__ {int re; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct state *
FUNC_2(struct nfa *VAR_2,
      struct state *VAR_3,
      struct state *VAR_4,
      struct arc **VAR_5)
{
 struct arc *VAR_6;


 if (FUNC_1(VAR_2->v->re))
 {
  FUNC_0(VAR_1);
  return VAR_4;
 }

 VAR_3->tmp = VAR_4;
 VAR_4 = VAR_3;
 for (VAR_6 = VAR_5[VAR_3->no]; VAR_6 != ((void*)0); VAR_6 = VAR_6->inchain)
 {
  if (VAR_6->type == VAR_0 && VAR_6->from->tmp == ((void*)0))
   VAR_4 = FUNC_2(VAR_2, VAR_6->from, VAR_4, VAR_5);
 }
 return VAR_4;
}
