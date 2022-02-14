
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfa {int dummy; } ;
struct colormap {struct colordesc* cd; } ;
struct colordesc {size_t sub; scalar_t__ nschrs; scalar_t__ nuchrs; struct arc* arcs; } ;
struct arc {size_t co; int to; int from; int type; struct arc* colorchain; } ;
typedef size_t color ;


 struct colordesc* FUNC_0 (struct colormap*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (struct colordesc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct colormap*,struct arc*) ;
 int FUNC_4 (struct colormap*,size_t) ;
 int FUNC_5 (struct nfa*,int ,size_t,int ,int ) ;
 int FUNC_6 (struct colormap*,struct arc*) ;

__attribute__((used)) static void
FUNC_7(struct nfa *VAR_1,
   struct colormap *VAR_2)
{
 struct colordesc *VAR_3;
 struct colordesc *VAR_4 = FUNC_0(VAR_2);
 struct colordesc *VAR_5;
 struct arc *VAR_6;
 color VAR_7;
 color VAR_8;

 for (VAR_3 = VAR_2->cd, VAR_7 = 0; VAR_3 < VAR_4; VAR_3++, VAR_7++)
 {
  VAR_8 = VAR_3->sub;
  if (FUNC_1(VAR_3) || VAR_8 == VAR_0)
  {

  }
  else if (VAR_8 == VAR_7)
  {

  }
  else if (VAR_3->nschrs == 0 && VAR_3->nuchrs == 0)
  {

   VAR_3->sub = VAR_0;
   VAR_5 = &VAR_2->cd[VAR_8];
   FUNC_2(VAR_5->nschrs > 0 || VAR_5->nuchrs > 0);
   FUNC_2(VAR_5->sub == VAR_8);
   VAR_5->sub = VAR_0;
   while ((VAR_6 = VAR_3->arcs) != ((void*)0))
   {
    FUNC_2(VAR_6->co == VAR_7);
    FUNC_6(VAR_2, VAR_6);
    VAR_6->co = VAR_8;
    FUNC_3(VAR_2, VAR_6);
   }
   FUNC_4(VAR_2, VAR_7);
  }
  else
  {

   VAR_3->sub = VAR_0;
   VAR_5 = &VAR_2->cd[VAR_8];
   FUNC_2(VAR_5->nschrs > 0 || VAR_5->nuchrs > 0);
   FUNC_2(VAR_5->sub == VAR_8);
   VAR_5->sub = VAR_0;
   for (VAR_6 = VAR_3->arcs; VAR_6 != ((void*)0); VAR_6 = VAR_6->colorchain)
   {
    FUNC_2(VAR_6->co == VAR_7);
    FUNC_5(VAR_1, VAR_6->type, VAR_8, VAR_6->from, VAR_6->to);
   }
  }
 }
}
