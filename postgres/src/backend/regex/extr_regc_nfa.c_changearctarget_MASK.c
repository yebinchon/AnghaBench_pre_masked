
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int nins; struct arc* ins; } ;
struct arc {struct arc* inchainRev; struct arc* inchain; struct state* to; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct arc *VAR_0, struct state *VAR_1)
{
 struct state *VAR_2 = VAR_0->to;
 struct arc *VAR_3;

 FUNC_0(VAR_2 != VAR_1);


 FUNC_0(VAR_2 != ((void*)0));
 VAR_3 = VAR_0->inchainRev;
 if (VAR_3 == ((void*)0))
 {
  FUNC_0(VAR_2->ins == VAR_0);
  VAR_2->ins = VAR_0->inchain;
 }
 else
 {
  FUNC_0(VAR_3->inchain == VAR_0);
  VAR_3->inchain = VAR_0->inchain;
 }
 if (VAR_0->inchain != ((void*)0))
 {
  FUNC_0(VAR_0->inchain->inchainRev == VAR_0);
  VAR_0->inchain->inchainRev = VAR_3;
 }
 VAR_2->nins--;

 VAR_0->to = VAR_1;


 VAR_0->inchain = VAR_1->ins;
 VAR_0->inchainRev = ((void*)0);
 if (VAR_1->ins)
  VAR_1->ins->inchainRev = VAR_0;
 VAR_1->ins = VAR_0;
 VAR_1->nins++;
}
