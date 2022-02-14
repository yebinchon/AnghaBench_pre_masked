
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct state {int no; struct state* next; int flag; TYPE_1__* tmp; } ;
struct nfa {int nstates; struct state* states; TYPE_1__* post; int pre; } ;
struct TYPE_3__ {scalar_t__ nins; struct TYPE_3__* tmp; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfa*,int ) ;
 int FUNC_3 (struct nfa*,struct state*) ;
 int FUNC_4 (struct nfa*,TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_5 (struct nfa*,int ,struct state*,int ) ;

__attribute__((used)) static void
FUNC_6(struct nfa *VAR_0)
{
 struct state *VAR_1;
 struct state *VAR_2;
 int VAR_3;

 if (FUNC_0())
  return;



 FUNC_5(VAR_0, VAR_0->pre, (struct state *) ((void*)0), VAR_0->pre);
 FUNC_4(VAR_0, VAR_0->post, VAR_0->pre, VAR_0->post);
 for (VAR_1 = VAR_0->states; VAR_1 != ((void*)0) && !FUNC_0(); VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->next;
  if (VAR_1->tmp != VAR_0->post && !VAR_1->flag)
   FUNC_3(VAR_0, VAR_1);
 }
 FUNC_1(FUNC_0() || VAR_0->post->nins == 0 || VAR_0->post->tmp == VAR_0->post);
 FUNC_2(VAR_0, VAR_0->pre);
 FUNC_1(FUNC_0() || VAR_0->post->nins == 0 || VAR_0->post->tmp == ((void*)0));



 VAR_3 = 0;
 for (VAR_1 = VAR_0->states; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
  VAR_1->no = VAR_3++;
 VAR_0->nstates = VAR_3;
}
