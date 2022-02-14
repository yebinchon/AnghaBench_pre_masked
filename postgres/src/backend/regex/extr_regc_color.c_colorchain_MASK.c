
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {struct colordesc* cd; } ;
struct colordesc {struct arc* arcs; } ;
struct arc {size_t co; struct arc* colorchainRev; struct arc* colorchain; } ;



__attribute__((used)) static void
FUNC_0(struct colormap *VAR_0,
     struct arc *VAR_1)
{
 struct colordesc *VAR_2 = &VAR_0->cd[VAR_1->co];

 if (VAR_2->arcs != ((void*)0))
  VAR_2->arcs->colorchainRev = VAR_1;
 VAR_1->colorchain = VAR_2->arcs;
 VAR_1->colorchainRev = ((void*)0);
 VAR_2->arcs = VAR_1;
}
