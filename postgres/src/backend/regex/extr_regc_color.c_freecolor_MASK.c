
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {size_t max; scalar_t__ free; struct colordesc* cd; } ;
struct colordesc {size_t sub; scalar_t__ nschrs; scalar_t__ nuchrs; int flags; int * arcs; } ;
typedef size_t color ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct colordesc*) ;
 size_t VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct colormap *VAR_3,
    color VAR_4)
{
 struct colordesc *VAR_5 = &VAR_3->cd[VAR_4];
 color VAR_6,
    VAR_7;

 FUNC_1(VAR_4 >= 0);
 if (VAR_4 == VAR_2)
  return;

 FUNC_1(VAR_5->arcs == ((void*)0));
 FUNC_1(VAR_5->sub == VAR_1);
 FUNC_1(VAR_5->nschrs == 0);
 FUNC_1(VAR_5->nuchrs == 0);
 VAR_5->flags = VAR_0;

 if ((size_t) VAR_4 == VAR_3->max)
 {
  while (VAR_3->max > VAR_2 && FUNC_0(&VAR_3->cd[VAR_3->max]))
   VAR_3->max--;
  FUNC_1(VAR_3->free >= 0);
  while ((size_t) VAR_3->free > VAR_3->max)
   VAR_3->free = VAR_3->cd[VAR_3->free].sub;
  if (VAR_3->free > 0)
  {
   FUNC_1(VAR_3->free < VAR_3->max);
   VAR_6 = VAR_3->free;
   VAR_7 = VAR_3->cd[VAR_6].sub;
   while (VAR_7 > 0)
    if ((size_t) VAR_7 > VAR_3->max)
    {

     VAR_7 = VAR_3->cd[VAR_7].sub;
     VAR_3->cd[VAR_6].sub = VAR_7;
    }
    else
    {
     FUNC_1(VAR_7 < VAR_3->max);
     VAR_6 = VAR_7;
     VAR_7 = VAR_3->cd[VAR_6].sub;
    }
  }
 }
 else
 {
  VAR_5->sub = VAR_3->free;
  VAR_3->free = (color) (VAR_5 - VAR_3->cd);
 }
}
