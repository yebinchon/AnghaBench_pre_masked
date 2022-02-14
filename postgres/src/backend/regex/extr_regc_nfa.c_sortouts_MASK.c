
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct state {int nouts; struct arc* outs; } ;
struct nfa {int dummy; } ;
struct arc {struct arc* outchainRev; struct arc* outchain; } ;


 int FUNC_0 (struct arc**) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct arc**,int,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct nfa *VAR_2,
   struct state *VAR_3)
{
 struct arc **VAR_4;
 struct arc *VAR_5;
 int VAR_6 = VAR_3->nouts;
 int VAR_7;

 if (VAR_6 <= 1)
  return;

 VAR_4 = (struct arc **) FUNC_1(VAR_6 * sizeof(struct arc *));
 if (VAR_4 == ((void*)0))
 {
  FUNC_2(VAR_0);
  return;
 }
 VAR_7 = 0;
 for (VAR_5 = VAR_3->outs; VAR_5 != ((void*)0); VAR_5 = VAR_5->outchain)
  VAR_4[VAR_7++] = VAR_5;
 FUNC_3(VAR_7 == VAR_6);

 FUNC_4(VAR_4, VAR_6, sizeof(struct arc *), VAR_1);


 VAR_5 = VAR_4[0];
 VAR_3->outs = VAR_5;
 VAR_5->outchain = VAR_4[1];
 VAR_5->outchainRev = ((void*)0);
 for (VAR_7 = 1; VAR_7 < VAR_6 - 1; VAR_7++)
 {
  VAR_5 = VAR_4[VAR_7];
  VAR_5->outchain = VAR_4[VAR_7 + 1];
  VAR_5->outchainRev = VAR_4[VAR_7 - 1];
 }
 VAR_5 = VAR_4[VAR_7];
 VAR_5->outchain = ((void*)0);
 VAR_5->outchainRev = VAR_4[VAR_7 - 1];
 FUNC_0(VAR_4);
}
