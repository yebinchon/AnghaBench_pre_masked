
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct colormap {struct colordesc* cd; } ;
struct colordesc {int nuchrs; int flags; int firstchr; int * arcs; int sub; scalar_t__ nschrs; } ;
typedef size_t color ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (struct colormap*) ;

__attribute__((used)) static color
FUNC_2(struct colormap *VAR_4)
{
 color VAR_5;
 struct colordesc *VAR_6;

 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_0())
  return VAR_1;
 VAR_6 = &VAR_4->cd[VAR_5];
 VAR_6->nschrs = 0;
 VAR_6->nuchrs = 1;
 VAR_6->sub = VAR_2;
 VAR_6->arcs = ((void*)0);
 VAR_6->firstchr = VAR_0;
 VAR_6->flags = VAR_3;
 return VAR_5;
}
