
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {struct arc* outs; } ;
struct nfa {int dummy; } ;
struct arc {int co; struct arc* outchain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nfa*,int,int ,struct state*,struct state*) ;

__attribute__((used)) static void
FUNC_2(struct nfa *VAR_0,
    struct state *VAR_1,
    struct state *VAR_2,
    struct state *VAR_3,
    int VAR_4)
{
 struct arc *VAR_5;

 FUNC_0(VAR_1 != VAR_2);

 for (VAR_5 = VAR_1->outs; VAR_5 != ((void*)0); VAR_5 = VAR_5->outchain)
  FUNC_1(VAR_0, VAR_4, VAR_5->co, VAR_2, VAR_3);
}
