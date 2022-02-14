
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct state* next; } ;
struct state {scalar_t__ no; struct state* next; int * outs; int * ins; TYPE_2__ oas; } ;
struct nfa {TYPE_1__* v; } ;
struct arcbatch {scalar_t__ no; struct arcbatch* next; int * outs; int * ins; TYPE_2__ oas; } ;
struct TYPE_3__ {int spaceused; } ;


 int FUNC_0 (struct state*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct nfa *VAR_1,
    struct state *VAR_2)
{
 struct arcbatch *VAR_3;
 struct arcbatch *VAR_4;

 FUNC_1(VAR_2->no == VAR_0);
 for (VAR_3 = VAR_2->oas.next; VAR_3 != ((void*)0); VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->next;
  FUNC_0(VAR_3);
  VAR_1->v->spaceused -= sizeof(struct arcbatch);
 }
 VAR_2->ins = ((void*)0);
 VAR_2->outs = ((void*)0);
 VAR_2->next = ((void*)0);
 FUNC_0(VAR_2);
 VAR_1->v->spaceused -= sizeof(struct state);
}
