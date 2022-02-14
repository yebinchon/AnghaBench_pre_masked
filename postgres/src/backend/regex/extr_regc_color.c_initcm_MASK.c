
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vars {int dummy; } ;
struct colormap {int maxarrayrows; int hiarrayrows; int hiarraycols; int * hicolormap; int * cmranges; scalar_t__ numcmranges; int * classbits; int * locolormap; struct colordesc* cd; scalar_t__ free; scalar_t__ max; struct colordesc* cdspace; int ncds; struct vars* v; int magic; } ;
struct colordesc {int nschrs; int nuchrs; int firstchr; scalar_t__ flags; int * arcs; int sub; } ;
typedef int color ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct vars *VAR_7,
    struct colormap *VAR_8)
{
 struct colordesc *VAR_9;

 VAR_8->magic = VAR_1;
 VAR_8->v = VAR_7;

 VAR_8->ncds = VAR_3;
 VAR_8->cd = VAR_8->cdspace;
 VAR_8->max = 0;
 VAR_8->free = 0;

 VAR_9 = VAR_8->cd;
 VAR_9->nschrs = VAR_2 - VAR_0 + 1;
 VAR_9->nuchrs = 1;
 VAR_9->sub = VAR_4;
 VAR_9->arcs = ((void*)0);
 VAR_9->firstchr = VAR_0;
 VAR_9->flags = 0;

 VAR_8->locolormap = (color *)
  FUNC_1((VAR_2 - VAR_0 + 1) * sizeof(color));
 if (VAR_8->locolormap == ((void*)0))
 {
  FUNC_0(VAR_5);
  VAR_8->cmranges = ((void*)0);
  VAR_8->hicolormap = ((void*)0);
  return;
 }

 FUNC_2(VAR_8->locolormap, VAR_6,
     (VAR_2 - VAR_0 + 1) * sizeof(color));

 FUNC_2(VAR_8->classbits, 0, sizeof(VAR_8->classbits));
 VAR_8->numcmranges = 0;
 VAR_8->cmranges = ((void*)0);
 VAR_8->maxarrayrows = 4;
 VAR_8->hiarrayrows = 1;
 VAR_8->hiarraycols = 1;
 VAR_8->hicolormap = (color *) FUNC_1(VAR_8->maxarrayrows * sizeof(color));
 if (VAR_8->hicolormap == ((void*)0))
 {
  FUNC_0(VAR_5);
  return;
 }

 VAR_8->hicolormap[0] = VAR_6;
}
