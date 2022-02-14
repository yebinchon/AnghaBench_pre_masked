
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {scalar_t__ nins; scalar_t__ nouts; struct state* next; struct state* prev; scalar_t__ flag; int no; } ;
struct nfa {struct state* free; struct state* states; struct state* slast; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct nfa *VAR_1,
    struct state *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_2->nins == 0 && VAR_2->nouts == 0);

 VAR_2->no = VAR_0;
 VAR_2->flag = 0;
 if (VAR_2->next != ((void*)0))
  VAR_2->next->prev = VAR_2->prev;
 else
 {
  FUNC_0(VAR_2 == VAR_1->slast);
  VAR_1->slast = VAR_2->prev;
 }
 if (VAR_2->prev != ((void*)0))
  VAR_2->prev->next = VAR_2->next;
 else
 {
  FUNC_0(VAR_2 == VAR_1->states);
  VAR_1->states = VAR_2->next;
 }
 VAR_2->prev = ((void*)0);
 VAR_2->next = VAR_1->free;
 VAR_1->free = VAR_2;
}
