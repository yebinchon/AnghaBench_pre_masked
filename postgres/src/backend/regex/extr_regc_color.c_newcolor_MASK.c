
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {size_t free; size_t ncds; int max; struct colordesc* cd; struct colordesc* cdspace; } ;
struct colordesc {size_t sub; scalar_t__ flags; int firstchr; int * arcs; scalar_t__ nuchrs; scalar_t__ nschrs; } ;
typedef int color ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_3 (struct colordesc*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct colordesc*) ;
 int FUNC_5 (struct colordesc*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static color
FUNC_8(struct colormap *VAR_6)
{
 struct colordesc *VAR_7;
 size_t VAR_8;

 if (FUNC_1())
  return VAR_1;

 if (VAR_6->free != 0)
 {
  FUNC_6(VAR_6->free > 0);
  FUNC_6((size_t) VAR_6->free < VAR_6->ncds);
  VAR_7 = &VAR_6->cd[VAR_6->free];
  FUNC_6(FUNC_4(VAR_7));
  FUNC_6(VAR_7->arcs == ((void*)0));
  VAR_6->free = VAR_7->sub;
 }
 else if (VAR_6->max < VAR_6->ncds - 1)
 {
  VAR_6->max++;
  VAR_7 = &VAR_6->cd[VAR_6->max];
 }
 else
 {

  struct colordesc *VAR_9;

  if (VAR_6->max == VAR_2)
  {
   FUNC_0(VAR_4);
   return VAR_1;
  }

  VAR_8 = VAR_6->ncds * 2;
  if (VAR_8 > VAR_2 + 1)
   VAR_8 = VAR_2 + 1;
  if (VAR_6->cd == VAR_6->cdspace)
  {
   VAR_9 = (struct colordesc *) FUNC_2(VAR_8 * sizeof(struct colordesc));
   if (VAR_9 != ((void*)0))
    FUNC_7(FUNC_5(VAR_9), FUNC_5(VAR_6->cdspace), VAR_6->ncds *
        sizeof(struct colordesc));
  }
  else
   VAR_9 = (struct colordesc *)
    FUNC_3(VAR_6->cd, VAR_8 * sizeof(struct colordesc));
  if (VAR_9 == ((void*)0))
  {
   FUNC_0(VAR_5);
   return VAR_1;
  }
  VAR_6->cd = VAR_9;
  VAR_6->ncds = VAR_8;
  FUNC_6(VAR_6->max < VAR_6->ncds - 1);
  VAR_6->max++;
  VAR_7 = &VAR_6->cd[VAR_6->max];
 }

 VAR_7->nschrs = 0;
 VAR_7->nuchrs = 0;
 VAR_7->sub = VAR_3;
 VAR_7->arcs = ((void*)0);
 VAR_7->firstchr = VAR_0;
 VAR_7->flags = 0;

 return (color) (VAR_7 - VAR_6->cd);
}
