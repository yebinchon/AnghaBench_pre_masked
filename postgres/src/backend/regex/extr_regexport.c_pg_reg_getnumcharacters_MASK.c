
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct colormap {int max; TYPE_1__* cd; } ;
struct guts {struct colormap cmap; } ;
struct TYPE_5__ {scalar_t__ re_magic; scalar_t__ re_guts; } ;
typedef TYPE_2__ regex_t ;
struct TYPE_4__ {int flags; scalar_t__ nuchrs; int nschrs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

int
FUNC_1(const regex_t *VAR_2, int VAR_3)
{
 struct colormap *VAR_4;

 FUNC_0(VAR_2 != ((void*)0) && VAR_2->re_magic == VAR_1);
 VAR_4 = &((struct guts *) VAR_2->re_guts)->cmap;

 if (VAR_3 <= 0 || VAR_3 > VAR_4->max)
  return -1;
 if (VAR_4->cd[VAR_3].flags & VAR_0)
  return -1;
 if (VAR_4->cd[VAR_3].nuchrs != 0)
  return -1;


 return VAR_4->cd[VAR_3].nschrs;
}
