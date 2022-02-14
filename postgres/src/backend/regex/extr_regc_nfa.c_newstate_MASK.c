
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * next; } ;
struct state {struct state* prev; struct state* next; int * tmp; int * outs; scalar_t__ nouts; int * ins; scalar_t__ nins; scalar_t__ flag; scalar_t__ no; scalar_t__ noas; int * free; TYPE_2__ oas; } ;
struct nfa {scalar_t__ nstates; struct state* slast; struct state* states; TYPE_1__* v; struct state* free; } ;
struct TYPE_3__ {scalar_t__ spaceused; int re; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static struct state *
FUNC_4(struct nfa *VAR_4)
{
 struct state *VAR_5;






 if (FUNC_0(VAR_4->v->re))
 {
  FUNC_2(VAR_0);
  return ((void*)0);
 }

 if (VAR_4->free != ((void*)0))
 {
  VAR_5 = VAR_4->free;
  VAR_4->free = VAR_5->next;
 }
 else
 {
  if (VAR_4->v->spaceused >= VAR_3)
  {
   FUNC_2(VAR_2);
   return ((void*)0);
  }
  VAR_5 = (struct state *) FUNC_1(sizeof(struct state));
  if (VAR_5 == ((void*)0))
  {
   FUNC_2(VAR_1);
   return ((void*)0);
  }
  VAR_4->v->spaceused += sizeof(struct state);
  VAR_5->oas.next = ((void*)0);
  VAR_5->free = ((void*)0);
  VAR_5->noas = 0;
 }

 FUNC_3(VAR_4->nstates >= 0);
 VAR_5->no = VAR_4->nstates++;
 VAR_5->flag = 0;
 if (VAR_4->states == ((void*)0))
  VAR_4->states = VAR_5;
 VAR_5->nins = 0;
 VAR_5->ins = ((void*)0);
 VAR_5->nouts = 0;
 VAR_5->outs = ((void*)0);
 VAR_5->tmp = ((void*)0);
 VAR_5->next = ((void*)0);
 if (VAR_4->slast != ((void*)0))
 {
  FUNC_3(VAR_4->slast->next == ((void*)0));
  VAR_4->slast->next = VAR_5;
 }
 VAR_5->prev = VAR_4->slast;
 VAR_4->slast = VAR_5;
 return VAR_5;
}
