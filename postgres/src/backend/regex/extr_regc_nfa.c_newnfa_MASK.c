
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct nfa {void* post; void* final; struct colormap* cm; void* init; void* pre; struct nfa* parent; void** eos; void** bos; struct vars* v; scalar_t__ nstates; int * free; int * slast; int * states; } ;
struct colormap {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct nfa*) ;
 int FUNC_4 (struct nfa*,char,int,void*,void*) ;
 void* FUNC_5 (struct nfa*,char) ;
 void* FUNC_6 (struct nfa*) ;
 int FUNC_7 (struct nfa*,struct colormap*,int ,void*,void*,void*) ;

__attribute__((used)) static struct nfa *
FUNC_8(struct vars *VAR_3,
    struct colormap *VAR_4,
    struct nfa *VAR_5)
{
 struct nfa *VAR_6;

 VAR_6 = (struct nfa *) FUNC_2(sizeof(struct nfa));
 if (VAR_6 == ((void*)0))
 {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_6->states = ((void*)0);
 VAR_6->slast = ((void*)0);
 VAR_6->free = ((void*)0);
 VAR_6->nstates = 0;
 VAR_6->cm = VAR_4;
 VAR_6->v = VAR_3;
 VAR_6->bos[0] = VAR_6->bos[1] = VAR_0;
 VAR_6->eos[0] = VAR_6->eos[1] = VAR_0;
 VAR_6->parent = VAR_5;
 VAR_6->post = FUNC_5(VAR_6, '@');
 VAR_6->pre = FUNC_5(VAR_6, '>');

 VAR_6->init = FUNC_6(VAR_6);
 VAR_6->final = FUNC_6(VAR_6);
 if (FUNC_1())
 {
  FUNC_3(VAR_6);
  return ((void*)0);
 }
 FUNC_7(VAR_6, VAR_6->cm, VAR_1, VAR_0, VAR_6->pre, VAR_6->init);
 FUNC_4(VAR_6, '^', 1, VAR_6->pre, VAR_6->init);
 FUNC_4(VAR_6, '^', 0, VAR_6->pre, VAR_6->init);
 FUNC_7(VAR_6, VAR_6->cm, VAR_1, VAR_0, VAR_6->final, VAR_6->post);
 FUNC_4(VAR_6, '$', 1, VAR_6->final, VAR_6->post);
 FUNC_4(VAR_6, '$', 0, VAR_6->final, VAR_6->post);

 if (FUNC_1())
 {
  FUNC_3(VAR_6);
  return ((void*)0);
 }
 return VAR_6;
}
