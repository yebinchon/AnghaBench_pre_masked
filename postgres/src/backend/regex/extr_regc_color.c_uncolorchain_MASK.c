
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {struct colordesc* cd; } ;
struct colordesc {struct arc* arcs; } ;
struct arc {size_t co; struct arc* colorchainRev; struct arc* colorchain; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct colormap *VAR_0,
    struct arc *VAR_1)
{
 struct colordesc *VAR_2 = &VAR_0->cd[VAR_1->co];
 struct arc *VAR_3 = VAR_1->colorchainRev;

 if (VAR_3 == ((void*)0))
 {
  FUNC_0(VAR_2->arcs == VAR_1);
  VAR_2->arcs = VAR_1->colorchain;
 }
 else
 {
  FUNC_0(VAR_3->colorchain == VAR_1);
  VAR_3->colorchain = VAR_1->colorchain;
 }
 if (VAR_1->colorchain != ((void*)0))
  VAR_1->colorchain->colorchainRev = VAR_3;
 VAR_1->colorchain = ((void*)0);
 VAR_1->colorchainRev = ((void*)0);
}
